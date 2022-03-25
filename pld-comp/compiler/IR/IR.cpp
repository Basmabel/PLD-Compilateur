
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

    switch(op){
        case Operation::ldconst:
            varDest = bb->cfg->get_var_index(params[0]);
            o<<"    movl	$"<<params[1]<<", -"<<varDest<<"(%rbp)"<<endl;
            break;
        case Operation::add:
            varDest = bb->cfg->get_var_index(params[0]);
            var1 = bb->cfg->get_var_index(params[1]);
            var2 = bb->cfg->get_var_index(params[2]);
            o<<"    movl	$"<<params[1]<<", -"<<varDest<<"(%rbp)"<<endl;
            break;
        default:
            break;
    }

}


CFG::CFG(DefFonction* ast){
    this->ast = ast;
    nextFreeSymbolIndex=0;
    nextBBnumber=0;
}