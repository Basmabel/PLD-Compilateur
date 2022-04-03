#include "IR.h"



IRInstr::IRInstr(BasicBlock* bb, Operation op, Type t, vector<string> params){
    this->bb=bb;
    this->op=op;
    this->t=t;
    this->params=params;
}


void IRInstr::gen_asm(ostream &o){
    int varDest;
    int var1;
    int var2;
    switch(op){
        case Operation::ldconst:
        
            varDest = bb->cfg->get_var_index(params[0]);
            o<<"    movq    $"<<params[1]<<", -"<<varDest<<"(%rbp)"<<endl;
            //o<<";"<<params[0]<<endl;;
            break;
        case Operation::add:
            varDest = bb->cfg->get_var_index(params[0]);
            var1 = bb->cfg->get_var_index(params[1]);
            var2 = bb->cfg->get_var_index(params[2]);
            o<<"    movq    -"<<var1<<"(%rbp), %rax"<<endl;
            o<<"    addq    -"<<var2<<"(%rbp), %rax"<<endl;
            o<<"    movq    %rax, -"<<varDest<<"(%rbp)"<<endl;
           // o<<";"<<params[0]<<endl;;
            break;
        case Operation::sub:
            varDest = bb->cfg->get_var_index(params[0]);
            var1 = bb->cfg->get_var_index(params[1]);
            var2 = bb->cfg->get_var_index(params[2]);
            o<<"    movq    -"<<var1<<"(%rbp), %rax"<<endl;
            o<<"    subq    -"<<var2<<"(%rbp), %rax"<<endl;
            o<<"    movq    %rax, -"<<varDest<<"(%rbp)"<<endl;
            //o<<";"<<params[0]<<endl;;
            break;
        case Operation::mul:
            varDest = bb->cfg->get_var_index(params[0]);
            var1 = bb->cfg->get_var_index(params[1]);
            var2 = bb->cfg->get_var_index(params[2]);
            o<<"    movq    -"<<var2<<"(%rbp), %rax"<<endl;
            o<<"    imulq    -"<<var1<<"(%rbp), %rax"<<endl;
            o<<"    movq    %rax, -"<<varDest<<"(%rbp)"<<endl;
            //o<<";"<<params[0]<<endl;;
            break;
        case Operation::div:
            varDest = bb->cfg->get_var_index(params[0]);
            var1 = bb->cfg->get_var_index(params[1]);
            var2 = bb->cfg->get_var_index(params[2]);
            o<<"    movq    -"<<var1<<"(%rbp), %rax"<<endl;
            o<<"    cltd\n 	 idivl    -"<<var2<<"(%rbp)"<<endl;
            o<<"    movq    %rax, -"<<varDest<<"(%rbp)"<<endl;
            //o<<";"<<params[0]<<endl;;
            break;
        case Operation::neg:
            varDest = bb->cfg->get_var_index(params[0]);
            var1 = bb->cfg->get_var_index(params[1]);
            o<<"    movq   -"<<var1<<"(%rbp), %rax"<<endl;
            o<<"    negq   %rax"<<endl;
            o<<"    movq   %rax, -"<<varDest<<"(%rbp);"<<endl;
            //o<<";"<<params[0]<<endl;;
            break;
        case Operation::mov:
            varDest = bb->cfg->get_var_index(params[0]);
            var1 = bb->cfg->get_var_index(params[1]);
            o<<"    movq    -"<<var1<<"(%rbp), %rax"<<endl;
            o<<"    movq    %rax, -"<<varDest<<"(%rbp)"<<endl;
            //o<<";"<<params[0]<<endl;;
            break;
        case Operation::cmp_eq:
            varDest= bb->cfg->get_var_index(params[0]);
            var1= bb->cfg->get_var_index(params[1]);
            
            if(params[2]=="$0"){
                o<<"    cmpq    "<<params[2]<<", -"<<var1<<"(%rbp)"<<endl;
            }else{
                var2= bb->cfg->get_var_index(params[2]);
                o<<"    movq    -"<<var1<<"(%rbp), %rax"<<endl;
                o<<"    cmpq    -"<<var2<<"(%rbp), %rax"<<endl;
            }
            o<<"    sete    %al"<<endl;
            o<<"    movzbq  %al, %rax"<<endl;
            o<<"    movq    %rax, -"<<varDest<<"(%rbp)"<<endl;
            break;
        case Operation::cmp_ineq:
            var1= bb->cfg->get_var_index(params[1]);
            var2= bb->cfg->get_var_index(params[2]);
            if(params[0]=="$0"){
                o<<"    cmpq    "<<params[0]<<", -"<<var1<<"(%rbp)"<<endl;
            }else{
                varDest= bb->cfg->get_var_index(params[0]);
                o<<"    movq    -"<<var1<<"(%rbp), %rax"<<endl;
                o<<"    cmpq    -"<<var2<<"(%rbp), %rax"<<endl;
                o<<"    setne    %al"<<endl;
                o<<"    movzbq  %al, %rax"<<endl;
                o<<"    movq    %rax, -"<<varDest<<"(%rbp)"<<endl;
            }
            break;
        case Operation::ret:
            var1 = bb->cfg->get_var_index(params[0]);
            o<<"    movq    -"<<var1<<"(%rbp), %rax"<<endl;
            //o<<";"<<params[0]<<endl;;
            break;
        default:
            break;
    }

}

BasicBlock::BasicBlock(CFG* cfg, string entry_label){
	this->cfg = cfg;
	this->label = entry_label;	
}

void BasicBlock::add_IRInstr(IRInstr::Operation op, Type t, vector<string> params) {
    instrs.push_back(new IRInstr(this, op, t, params));
}

void BasicBlock::gen_asm(ostream &o){
    
    for (auto instr : instrs) {
        instr->gen_asm(o);
    }

    if (exit_true!=nullptr) {
        if(exit_false != nullptr) {
            o<<"    je     "<<exit_false->label<<endl;
        }
        o << "    jmp    " << exit_true->label <<endl;     
    }
    

     //exit_true->label=="endifblock3" 
    // if (cfg->current_bb->label== "thenblock1") {
    //     o << "jmp " << exit_true->label << endl;
    // }

}


CFG::CFG(){

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

    firstBlock->exit_true = return_bb;
    firstBlock->exit_false = nullptr;

    lastBlock->exit_true = nullptr;
    lastBlock->exit_false = nullptr;

    symboleTable = new symbolTable();

}


void CFG::add_bb(BasicBlock* bb){
    bbs.insert(bbs.begin()+nextBBnumber,bb);
}

void CFG::gen_asm(ostream& o){
    gen_asm_prologue(o);
    for(unsigned int i = 0; i < bbs.size(); i++)
    {
        if(bbs[i]->label != "entry_block" ) { //&& bbs[i]->label != "exit_block"
            o<<bbs[i]->label<<":"<<endl;
            
        }
        bbs[i]->gen_asm(o);
    }
    gen_asm_epilogue(o);
}

string CFG::IR_reg_to_asm(string reg){
    size_t index = get_var_index(reg);
    string string_var = "-" + to_string(index) + "(%rbp)";
    return string_var;
}

void CFG::gen_asm_prologue(ostream& o){
    #ifdef __APPLE__
	    o<<".globl    _main\n"
        " _main: \n"
	#else
	    o<<".globl    main\n"
        " main: \n"
	#endif
        "    #prologue\n"
        "    pushq %rbp\n"
        "    movq %rsp, %rbp\n";
}

void CFG::gen_asm_epilogue(ostream& o){
    o<<"    #epilogue\n"
        "    popq %rbp\n"
        "    ret\n";
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
        
    symboleTable->add(name,type,line);
    nextFreeSymbolIndex++;
}

void CFG::redeclarationError(size_t linectr, string name){
    if(symboleTable->contains(name)){  
		cerr << "<source>:"<<linectr<<": error: redeclaration of '"<<symboleTable->getType(name)<<" "<<name<<"'" << endl;
		cerr << "<source>:"<<symboleTable->getLine(name)<<": error: '"<<symboleTable->getType(name)<<" "<<name<<"' previously declared here" << endl;
		exit(1);
	}
}

void CFG::erreurVariableNonDeclare(string name, size_t linectr){
	if(!symboleTable->contains(name)){
		cerr << "<source>:"<<linectr<<": error: '"<<name<<"' was not declared in this scope" << endl;
		exit(1);
	}
}


string CFG::create_new_tempvar(Type t, string blockName, size_t line){
    string name = blockName+"_tmp"+to_string(nextFreeSymbolIndex);
    add_to_symbol_table(name,t,line);
    symboleTable->setUsed(name,true);
    return name;
}


size_t CFG::get_var_index(string name){
    return symboleTable->getOffset(name);
}

Type CFG::get_var_type(string name){
    if(symboleTable->getType(name)=="int"){
        return Type::INT;
    }
    return Type::DEFAULT;
}

void CFG::set_var_used(string name, bool used){
    symboleTable->setUsed(name,used);
}

string CFG::new_BB_name(string name){
    //return "block_"+to_string(line);
    return name+"block"+to_string(nextBBnumber);
}

