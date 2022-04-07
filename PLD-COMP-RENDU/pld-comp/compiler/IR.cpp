#include "IR.h"
#include <string>
#include <iostream>

using std::hex;


IRInstr::IRInstr(BasicBlock* bb, Operation op, Type t, vector<string> params){
    this->bb=bb;
    this->op=op;
    this->t=t;
    this->params=params;
}


void IRInstr::gen_asm(ostream &o){
    string varDest;
    string var1;
    string var2;

    long long int temp;

    switch(op){
        case Operation::ldconst:
             
                varDest = params[0];
                try{
                    temp = stoll(params[1]);
                }
                catch(std::out_of_range& e){
                    std::cerr<<"warning : variable too big"<<endl;   
                }
                o<<"    movq    $"<<params[1]<<", "<<varDest<<endl;
                //o<<";"<<params[0]<<endl;;
            
            break;
        case Operation::add:
             
                varDest = params[0];
                var2 = params[2];
                var1 = params[1];
                o<<"    movq    "<<var1<<", %rax"<<endl;
                o<<"    addq    "<<var2<<", %rax"<<endl;
                o<<"    movq    %rax, "<<varDest<<endl;
            // o<<";"<<params[0]<<endl;;
            
            break;
        case Operation::sub:
             
                varDest = params[0];
                var1 = params[1];
                var2 = params[2];
                o<<"    movq    "<<var1<<", %rax"<<endl;
                o<<"    subq    "<<var2<<", %rax"<<endl;
                o<<"    movq    %rax, "<<varDest<<endl;
                //o<<";"<<params[0]<<endl;;
            
            break;
        case Operation::mul:
             
                varDest = params[0];
                var1 = params[1];
                var2 = params[2];
                o<<"    movq    "<<var2<<", %rax"<<endl;
                o<<"    imulq    "<<var1<<", %rax"<<endl;
                o<<"    movq    %rax, "<<varDest<<endl;
                //o<<";"<<params[0]<<endl;;
            
            break;
        case Operation::div:
             
                varDest = params[0];
                var1 = params[1];
                var2 = params[2];
                o<<"    movq    "<<var1<<", %rax"<<endl;
                o<<"    cqo\n 	 idivq    "<<var2<<endl;
                o<<"    movq    %rax, "<<varDest<<endl;
                //o<<";"<<params[0]<<endl;;
            
            break;
        case Operation::andq:
             
                varDest = params[0];
                var1 = params[1];
                var2 = params[2];
                o<<"    movq    "<<var1<<", %rax"<<endl;
                o<<"    andq    "<<var2<<", %rax"<<endl;
                o<<"    movq    %rax, "<<varDest<<endl;
                //o<<";"<<params[0]<<endl;;
            
            break;
        case Operation::xorq:
             
                varDest = params[0];
                var1 = params[1];
                var2 = params[2];
                o<<"    movq    "<<var1<<", %rax"<<endl;
                o<<"    xorq    "<<var2<<", %rax"<<endl;
                o<<"    movq    %rax, "<<varDest<<endl;
                //o<<";"<<params[0]<<endl;;
            
            break;
        case Operation::orq:
             
                varDest = params[0];
                var1 = params[1];
                var2 = params[2];
                o<<"    movq    "<<var1<<", %rax"<<endl;
                o<<"    orq    "<<var2<<", %rax"<<endl;
                o<<"    movq    %rax, "<<varDest<<endl;
                //o<<";"<<params[0]<<endl;;
            
            break;
        case Operation::neg:
             
                varDest = params[0];
                var1 = params[1];
                o<<" 	 movq   "<<var1<<", %rax"<<endl;
                o<<" 	 negq   %rax"<<endl;
                o<<" 	 movq   %rax, "<<varDest<<endl;
                //o<<";"<<params[0]<<endl;;
            
            break;
        case Operation::setz:
             
                varDest = params[0];
                var1 = params[1];
                o<<"    cmpq   $0, "<<var1<<endl;
                o<<"    sete    %al"<<endl;
                o<<"    movzbq  %al, %rax"<<endl;
                o<<"    movq   %rax, "<<varDest<<endl;
            break;
        case Operation::rmem:
             
                o<<"    movq    "<<params[1]<<", %rax"<<endl;
                o<<"    movq     (%rax), %rdx"<<endl;
                o<<"    movq      %rdx, %rax"<<endl;
                o<<"    movq     %rax,"<<params[0]<<endl;
            
            break;
        case Operation::mov:
             
                o<<"    movq    "<<params[1]<<", %rax"<<endl;
                o<<"    movq     %rax,"<<params[0]<<endl;
            
            break;
        case Operation::wmem:
             
                o<<"    movq    "<<params[0]<<", %rax"<<endl;
                o<<"    movq    "<<params[1]<<", %r10"<<endl;
                o<<"    movq    %r10, (%rax)"<<endl;
            
            break;
        case Operation::cmp_eq:
             
                varDest= params[0];
                var1= params[1];
                var2= params[2];
                o<<"    movq    "<<var1<<", %rax"<<endl;
                o<<"    cmpq    "<<var2<<", %rax"<<endl;
                o<<"    sete    %al"<<endl;
                o<<"    movzbq  %al, %rax"<<endl;
                o<<"    movq    %rax, "<<varDest<<endl;
            
            break;
        case Operation::cmp_ineq:
             
                varDest= params[0];
                var1= params[1];
                var2= params[2];
                o<<"    movq    "<<var1<<", %rax"<<endl;
                o<<"    cmpq    "<<var2<<", %rax"<<endl;
                o<<"    setne    %al"<<endl;
                o<<"    movzbq  %al, %rax"<<endl;
                o<<"    movq    %rax, "<<varDest<<endl;
            
            break;
        case Operation::cmp_gt:
             
                var1= params[1];
                var2= params[2];
                varDest= params[0];
                o<<"    movq    "<<var1<<", %rax"<<endl;
                o<<"    cmpq    "<<var2<<", %rax"<<endl;
                o<<"    setg    %al"<<endl;
                o<<"    movzbq  %al, %rax"<<endl;
                o<<"    movq    %rax, "<<varDest<<endl;
            
            
            break;
        case Operation::cmp_lt:
             
                var1= params[1];
                var2= params[2];
                varDest= params[0];
                o<<"    movq    "<<var1<<", %rax"<<endl;
                o<<"    cmpq    "<<var2<<", %rax"<<endl;
                o<<"    setl    %al"<<endl;
                o<<"    movzbq  %al, %rax"<<endl;
                o<<"    movq    %rax, "<<varDest<<endl;
            
            break;
        case Operation::ret:
             
                var1 = params[0];
                o<<"    movq    "<<var1<<", %rax"<<endl;
                bb->cfg->set_returnCalled(true);
            
            break;
        case Operation::call:
        {
             
                string function = params[1];
                var2 = params[2];

                for (int i = 3; i < params.size(); i++) {
                    switch(i) {
                        case 3: o << "    movq    " << params[i] << ", %rdi" << endl; break;
                        case 4: o << "    movq    " << params[i] << ", %rsi" << endl; break;
                        case 5: o << "    movq    " << params[i] << ", %rdx" << endl; break;
                        case 6: o << "    movq    " << params[i] << ", %rcx" << endl; break;
                        case 7: o << "    movq    "  << params[i] << ", %r8" << endl; break;
                        case 8: o << "    movq    "  << params[i] << ", %r9" << endl; break;
                    }
                }

                o << "    callq   " << function << endl;
                if(bb->cfg->getFonction()->getReturnType() != Type::VOID)
                o << "    movq    %rax,"<<var2<<endl;
            

            break;
        }
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


CFG::CFG(string functionName){

    //Aucun symbol ni block pour l'instant
    nextFreeSymbolIndex=0;
    nextBBnumber=0;

    

    //Création des premiers blocs
    string firstBlockName = functionName+"_entry_block";
    BasicBlock* firstBlock = new BasicBlock(this,firstBlockName);
    add_bb(firstBlock);
    nextBBnumber++;

    //Création des premiers blocs
    string lastBlockName = functionName+"_exit_block";
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

void CFG::gen_asm(ostream& o, int size, functionTable *fonctionTable){
    gen_asm_prologue(o);

    /*for(auto i : symboleTable->getSymbols()){
		cout<<i.first<<" : "<<i.second<<endl;
	}*/

    if(function->getNameFonction()!="main"){
        for(int i=0; i<function->getArgsSize();i++){
            string arg = function->getArgs().at(i).first;
            //cout<<arg<<endl;
            switch(i) {
                    case 0: o << "    movq    %rdi, -" <<get_var_index(arg) << "(%rbp)"<<endl; break;
                    case 1: o << "    movq    %rsi, -" <<get_var_index(arg) << "(%rbp)"<<endl; break;
                    case 2: o << "    movq    %rdx, -" <<get_var_index(arg) << "(%rbp)"<<endl; break;
                    case 3: o << "    movq    %rcx, -" <<get_var_index(arg) << "(%rbp)"<<endl; break;
                    case 4: o << "    movq    %r8, -" <<get_var_index(arg) << "(%rbp)"<<endl; break;
                    case 5: o << "    movq    %r9, -" <<get_var_index(arg) << "(%rbp)"<<endl; break;
            }
        }
    }

    for(unsigned int i = 0; i < bbs.size(); i++)
    {
        if(bbs[i]->label != function->getNameFonction()+"_entry_block" ) { //&& bbs[i]->label != "exit_block"
            o<<bbs[i]->label<<":"<<endl;
            
        }
        bbs[i]->gen_asm(o);
        
    }


    

    gen_asm_epilogue(o,size);
}

string CFG::IR_reg_to_asm(int index){
    string string_var = "-" + to_string(index) + "(%rbp)";
    return string_var;
}

void CFG::gen_asm_prologue(ostream& o){
    
    #ifdef __APPLE__
	    o<<".globl    _"<<function->getNameFonction()<<"\n"
        " _"<<function->getNameFonction()<<": \n"
	#else
	    o<<".globl    "<<function->getNameFonction()<<"\n"
        " "<<function->getNameFonction()<<": \n"
	#endif
        "    #prologue\n"
        "    pushq %rbp\n"
        "    movq %rsp, %rbp\n";
    if(function->getNameFonction()=="main"){
        int size=(symboleTable->getSymbols().size()+1)*sizeof(int64_t);
        o<<"    subq   $"<<size<<", %rsp"<<endl;
    }
        
}

void CFG::gen_asm_epilogue(ostream& o, int size){
    o<<"    #epilogue\n";
    if(function->getNameFonction()=="main"){
        o<<"    leave\n";
    }else{
        o<<"    popq %rbp\n";
    }
        
    o<<"    ret"<<endl;
}


//SymbolTable
void CFG::add_to_symbol_table(string name, Type t, int line, int nbAlloc){
   /* string type;
    switch(t){
        case Type::INT:
            type="int";
            break;
        case Type::CHAR:
            type="char";
            break;
        default:
            type="int";
            break;
    }    */
    symboleTable->add(name,t,line, nextFreeSymbolIndex);
    nextFreeSymbolIndex+=nbAlloc;
}

void CFG::redeclarationError(int linectr, string name){
    if(symboleTable->contains(name)){  
		cerr << "<source>:"<<linectr<<": error: redeclaration of '"<<symboleTable->getType(name)<<" "<<name<<"'" << endl;
		cerr << "<source>:"<<symboleTable->getLine(name)<<": error: '"<<symboleTable->getType(name)<<" "<<name<<"' previously declared here" << endl;
		exit(1);
	}
}

void CFG::erreurVariableNonDeclare(string name, int linectr){
	if(!symboleTable->contains(name)){
		cerr << "<source>:"<<linectr<<": error: '"<<name<<"' was not declared in this scope" << endl;
		exit(1);
	}
}

void CFG::erreurNegativeTabSize(string name, int linectr){
    cerr<<"<source>:"<<linectr<<": error: size of array '"<<name<<"' is negative"<<endl;
    exit(1);
}

void CFG::erreurScalarObject(string name, int linectr){
    cerr<<"<source>:"<<linectr<<": error: scalar object '"<<name<<"' requires one element in initializer"<<endl;
    exit(1);
}

void CFG::erreurInvalidInitializer(int linectr){
    cerr<<"<source>:"<<linectr<<": error: invalid initializer"<<endl;
    exit(1);
}


string CFG::create_new_tempvar(Type t, string blockName, int line, int nbAlloc){
   // string name = blockName+"_tmp"+to_string(nextFreeSymbolIndex);
    string name = blockName+"_tmp"+to_string(nextFreeSymbolIndex);
    add_to_symbol_table(name,t,line,nbAlloc);
    symboleTable->setUsed(name,true);
    return name;
}

string CFG::create_new_tempvar_function(Type t, string var, size_t line, int nbAlloc){
    add_to_symbol_table(var,t,line,nbAlloc);
    symboleTable->setUsed(var,true);
    return var;
}


int CFG::get_var_index(string name){
    return symboleTable->getOffset(name);
}

Type CFG::get_var_type(string name){
    return symboleTable->getType(name);
}

fonction * CFG::getFonction(){
    return this->function;
}

void CFG::set_var_type(string name, Type type){
    symboleTable->setType(name,type);    
}

void CFG::set_var_used(string name, bool used){
    symboleTable->setUsed(name,used);
}

string CFG::new_BB_name(string name){
    //return "block_"+to_string(line);
    return function->getNameFonction()+"_"+name+"block"+to_string(nextBBnumber);
}

bool CFG::get_returnCalled(){
    return this->returnCalled;
}

void CFG::set_returnCalled(bool val){
    this->returnCalled = val;
}

void CFG::setFonction(fonction *fonction){
    this->function = fonction;
}


