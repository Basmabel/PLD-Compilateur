
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
    nextFreeSymbolIndex=0;
    nextBBnumber=0;
}