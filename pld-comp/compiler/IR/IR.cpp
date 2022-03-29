#include "IR.h"



IRInstr::IRInstr(BasicBlock* bb_, Operation op, Type t, vector<string> params){
    this->bb=bb;
    this->op=op;
    this->t=t;
    this->params=params;
}


void IRInstr::gen_asm(ostream &o){
    int varDest;
    int var1;
    int var2;
    
+
    switch(op){
        case Operation::ldconst:
            varDest = bb->cfg->get_var_index(params[0]);
            o<<"    movl	$"<<params[1]<<", -"<<varDest<<"(%rbp);"<<params[0]<<endl;;
            break;
        case Operation::add:
            varDest = bb->cfg->get_var_index(params[0]);
            var1 = bb->cfg->get_var_index(params[1]);
            var2 = bb->cfg->get_var_index(params[2]);
            o<<"    movl	-"<<var1<<"(%rbp), %eax ;"<<params[1]<<endl;
            o<<"    addl    -"<<var2<<"(%rbp), %eax ;"<<params[2]<<endl;
            o<<"    movl    %eax, -"<<varDest<<"(%rbp) ; "<<params[0]<<endl;
            break;
        case Operation::sub:
            varDest = bb->cfg->get_var_index(params[0]);
            var1 = bb->cfg->get_var_index(params[1]);
            var2 = bb->cfg->get_var_index(params[2]);
            o<<"    movl	-"<<var1<<"(%rbp), %eax;"<<params[1]<<endl;
            o<<"    subl    -"<<var2<<"(%rbp), %eax;"<<params[2]<<endl;
            o<<"    movl    %eax, -"<<varDest<<"(%rbp);"<<params[0]<<endl;
            break;
        case Operation::mul:
            varDest = bb->cfg->get_var_index(params[0]);
            var1 = bb->cfg->get_var_index(params[1]);
            var2 = bb->cfg->get_var_index(params[2]);
            o<<"    movl	-"<<var1<<"(%rbp), %eax;"<<params[1]<<endl;
            o<<"    imul    -"<<var2<<"(%rbp), %eax;"<<params[2]<<endl;
            o<<"    movl    %eax, -"<<varDest<<"(%rbp);"<<params[0]<<endl;
            break;
        case Operation::neg:
            varDest = bb->cfg->get_var_index(params[0]);
            var1 = bb->cfg->get_var_index(params[1]);
            o<<" 	 movl	-"<<var1<<"(%rbp), %eax;"<<params[1]<<endl;
            o<<" 	 negl	%eax"<<endl;
            o<<" 	 movl	%eax, -"<<varDest<<"(%rbp);"<<params[0]<<endl;
            break;
        default:
            break;
    }

}

IRInstr::BasicBlock(CFG* cfg, string entry_label){
	this->cfg = cfg;
	this->label = entry_label;	
}

void BasicBlock::add_IRInstr(IRInstr::Operation op, Type t, vector<string> params) {
    instrs.push_back(new IRInstr(this, op, t, params));
}

void BasicBlock::gen_asm(ostream &o){
#ifdef _APPLE_
    if(label == "main"){
        out << endl << "_main" << ":" << endl;
    } else {
        out << endl << label << ":" << endl;
    }
#else
    out << endl << label << ":" << endl;
#endif
	if (label == cfg->ast->getName()) {
        	cfg->gen_asm_prologue(o);
    	}

    	for (auto instr : instrs) {
        	instr->gen_asm(o);
   	}

    	if (exit_true) {
        	o << "jmp " << exit_true->label << endl;
    	} else if (!exit_false) {
        	cfg->gen_asm_epilogue(o);
    	}
}


CFG::CFG(DefFonction* ast){
    this->ast = ast;

    //Aucun symbol pour l'instant
    nextFreeSymbolIndex=0;
    nextBBnumber=0;

    //Création des premiers blocs
    string firstBlockName = "entry_block";
    BasicBlock* firstBlock = new BasicBlock(this,firstBlockName);
    add_bb(firstBlock);
    nextBBnumber++;

    //Création des premiers blocs
    string lastBlockName = "exit_block";
    BasicBlock* lastBlock = new BasicBlock(this,lastBlockName);
    add_bb(lastBlock);

    current_bb  = firstBlock;
    return_bb = lastBlock;

    firstblock->exit_true = return_bb;
    firstblock->exit_false = nullptr;

    lastblock->exit_true = nullptr;
    lastblock->exit_false = nullptr;

    symbolTable = new symbolTable();

}

void CFG::gen_asm(ostream& o){
    gen_asm_prologue(o);
    for(unsigned int i = 0; i < bbs.size(); i++)
    {
        bbs[i]->gen_asm(o);
    }
    gen_asm_epilogue(o);
}

string CFG::IR_reg_to_asm(string reg){
    size_t index = get_var_index(reg);
    string string_var = "-" + to_string(index) + "(%rbp)";
}

void CFG::gen_asm_prologue(ostream& o){
    string prologue = "    #prologue\n"
        "    pushq %rbp\n"
        "    movq %rsp, %rbp\n";
    return prologue;
}

void CFG::gen_asm_epilogue(ostream& o){
    string epilogue = "    #epilogue\n"
        "    popq %rbp\n"
        "    ret\n";
    return epilogue;
}

void CFG::add_bb(BasicBlock* bb){
    bbs.insert(bbs.begin()+nextBBnumber,bb);
}

void CFG::add_to_symbol_table(string name, Type t, size_t line){
    string type;

    switch(t){
        case Type::INT:
            type="int";
            break;
        default:
            type="int";
            break;
    }

    symbolTable->add(name,type,line);
    nextFreeSymbolIndex++;
}


string CFG::create_new_tempvar(Type t, string blockName, size_t line){
    string name = blockName+"_tmp"+to_string(nextFreeSymbolIndex);
    add_to_symbol_table(name,t,line);
}


size_t CFG::get_var_index(string name){
    return symbolTable->getOffset(name);
}

Type CFG::get_var_index(string name){
    switch(symbolTable->getType(name)){
        case "int":
            return Type::INT;
            break;
        default:
            return -1;
            break;
    }
}

string CFG::new_BB_name(size_t line){
    return "block_"+to_string(line);
}

