#include "IR.h"
#include <string>
#include <iostream>

using std::hex;

/******** IRInstr*********/

IRInstr::IRInstr(BasicBlock* bb, Operation op, vector<string> params){
    this->bb=bb;
    this->op=op;
    this->params=params;
}


/*
*   Génère l'assembleur pour l'opération de l'instruction avec ses paramètres
*/
void IRInstr::gen_asm(ostream &o){
    
    string varDest;
    string var1;
    string var2;

    long long int temp;

    switch(op){
        case Operation::ldconst:
             
                varDest = bb->cfg->IR_reg_to_asm(bb->cfg->get_var_index(params[0]));
                try{
                    temp = stoll(params[1]);
                }
                catch(std::out_of_range& e){
                    cerr<<"warning : variable too big"<<endl;   
                }
                o<<"    movq    $"<<params[1]<<", "<<varDest<<endl;
            
            break;
        case Operation::add:
             
                varDest = bb->cfg->IR_reg_to_asm(bb->cfg->get_var_index(params[0]));

                if(params[1]=="%rbp"){
                    var1 = params[1];
                }else{
                    var1 = bb->cfg->IR_reg_to_asm(bb->cfg->get_var_index(params[1]));
                }

                var2 = bb->cfg->IR_reg_to_asm(bb->cfg->get_var_index(params[2]));
                
                o<<"    movq    "<<var1<<", %rax"<<endl;
                o<<"    addq    "<<var2<<", %rax"<<endl;
                o<<"    movq    %rax, "<<varDest<<endl;
            
            break;
        case Operation::sub:
             
                varDest = bb->cfg->IR_reg_to_asm(bb->cfg->get_var_index(params[0]));
                var1 = bb->cfg->IR_reg_to_asm(bb->cfg->get_var_index(params[1]));
                var2 = bb->cfg->IR_reg_to_asm(bb->cfg->get_var_index(params[2]));

                o<<"    movq    "<<var1<<", %rax"<<endl;
                o<<"    subq    "<<var2<<", %rax"<<endl;
                o<<"    movq    %rax, "<<varDest<<endl;
            
            break;
        case Operation::mul:
             
                varDest = bb->cfg->IR_reg_to_asm(bb->cfg->get_var_index(params[0]));
                var1 = bb->cfg->IR_reg_to_asm(bb->cfg->get_var_index(params[1]));
                var2 = bb->cfg->IR_reg_to_asm(bb->cfg->get_var_index(params[2]));

                o<<"    movq    "<<var2<<", %rax"<<endl;
                o<<"    imulq    "<<var1<<", %rax"<<endl;
                o<<"    movq    %rax, "<<varDest<<endl;
            
            break;
        case Operation::div:
             
                varDest = bb->cfg->IR_reg_to_asm(bb->cfg->get_var_index(params[0]));
                var1 = bb->cfg->IR_reg_to_asm(bb->cfg->get_var_index(params[1]));
                var2 = bb->cfg->IR_reg_to_asm(bb->cfg->get_var_index(params[2]));

                o<<"    movq    "<<var1<<", %rax"<<endl;
                o<<"    cqo\n 	 idivq    "<<var2<<endl;
                o<<"    movq    %rax, "<<varDest<<endl;
            
            break;
        case Operation::andq:
             
                varDest = bb->cfg->IR_reg_to_asm(bb->cfg->get_var_index(params[0]));
                var1 = bb->cfg->IR_reg_to_asm(bb->cfg->get_var_index(params[1]));
                var2 = bb->cfg->IR_reg_to_asm(bb->cfg->get_var_index(params[2]));

                o<<"    movq    "<<var1<<", %rax"<<endl;
                o<<"    andq    "<<var2<<", %rax"<<endl;
                o<<"    movq    %rax, "<<varDest<<endl;
            
            break;
        case Operation::xorq:
             
                varDest = bb->cfg->IR_reg_to_asm(bb->cfg->get_var_index(params[0]));
                var1 = bb->cfg->IR_reg_to_asm(bb->cfg->get_var_index(params[1]));
                var2 = bb->cfg->IR_reg_to_asm(bb->cfg->get_var_index(params[2]));

                o<<"    movq    "<<var1<<", %rax"<<endl;
                o<<"    xorq    "<<var2<<", %rax"<<endl;
                o<<"    movq    %rax, "<<varDest<<endl;
            
            break;
        case Operation::orq:
             
                varDest = bb->cfg->IR_reg_to_asm(bb->cfg->get_var_index(params[0]));
                var1 = bb->cfg->IR_reg_to_asm(bb->cfg->get_var_index(params[1]));
                var2 = bb->cfg->IR_reg_to_asm(bb->cfg->get_var_index(params[2]));

                o<<"    movq    "<<var1<<", %rax"<<endl;
                o<<"    orq    "<<var2<<", %rax"<<endl;
                o<<"    movq    %rax, "<<varDest<<endl;
            
            break;
        case Operation::neg:
             
                varDest = bb->cfg->IR_reg_to_asm(bb->cfg->get_var_index(params[0]));
                var1 = bb->cfg->IR_reg_to_asm(bb->cfg->get_var_index(params[1]));

                o<<" 	 movq   "<<var1<<", %rax"<<endl;
                o<<" 	 negq   %rax"<<endl;
                o<<" 	 movq   %rax, "<<varDest<<endl;
            
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

                varDest = bb->cfg->IR_reg_to_asm(bb->cfg->get_var_index(params[0]));
                var1 = bb->cfg->IR_reg_to_asm(bb->cfg->get_var_index(params[1]));
             
                o<<"    movq    "<<var1<<", %rax"<<endl;
                o<<"    movq     (%rax), %rdx"<<endl;
                o<<"    movq      %rdx, %rax"<<endl;
                o<<"    movq     %rax,"<<varDest<<endl;
            
            break;
        case Operation::mov:

                varDest = params[0];
                var1 = params[1];

                o<<"    movq    "<<var1<<", %rax"<<endl;
                o<<"    movq     %rax,"<<varDest<<endl;
            
            break;
        case Operation::wmem:

                varDest = bb->cfg->IR_reg_to_asm(bb->cfg->get_var_index(params[0]));
                var1 = bb->cfg->IR_reg_to_asm(bb->cfg->get_var_index(params[1]));

                o<<"    movq    "<<varDest<<", %rax"<<endl;
                o<<"    movq    "<<var1<<", %r10"<<endl;
                o<<"    movq    %r10, (%rax)"<<endl;
            
            break;
        case Operation::cmp_eq:
             
                varDest = bb->cfg->IR_reg_to_asm(bb->cfg->get_var_index(params[0]));
                var1 = bb->cfg->IR_reg_to_asm(bb->cfg->get_var_index(params[1]));

                if(params[2]=="$0"){
                    var2 = params[2];
                }else{
                    var2 = bb->cfg->IR_reg_to_asm(bb->cfg->get_var_index(params[2]));
                }                

                o<<"    movq    "<<var1<<", %rax"<<endl;
                o<<"    cmpq    "<<var2<<", %rax"<<endl;
                o<<"    sete    %al"<<endl;
                o<<"    movzbq  %al, %rax"<<endl;
                o<<"    movq    %rax, "<<varDest<<endl;
            
            break;
        case Operation::cmp_ineq:
             
                varDest = bb->cfg->IR_reg_to_asm(bb->cfg->get_var_index(params[0]));
                var1 = bb->cfg->IR_reg_to_asm(bb->cfg->get_var_index(params[1]));
                var2 = bb->cfg->IR_reg_to_asm(bb->cfg->get_var_index(params[2]));

                o<<"    movq    "<<var1<<", %rax"<<endl;
                o<<"    cmpq    "<<var2<<", %rax"<<endl;
                o<<"    setne    %al"<<endl;
                o<<"    movzbq  %al, %rax"<<endl;
                o<<"    movq    %rax, "<<varDest<<endl;
            
            break;
        case Operation::cmp_gt:
             
                varDest = bb->cfg->IR_reg_to_asm(bb->cfg->get_var_index(params[0]));
                var1 = bb->cfg->IR_reg_to_asm(bb->cfg->get_var_index(params[1]));
                var2 = bb->cfg->IR_reg_to_asm(bb->cfg->get_var_index(params[2]));

                o<<"    movq    "<<var1<<", %rax"<<endl;
                o<<"    cmpq    "<<var2<<", %rax"<<endl;
                o<<"    setg    %al"<<endl;
                o<<"    movzbq  %al, %rax"<<endl;
                o<<"    movq    %rax, "<<varDest<<endl;
            
            
            break;
        case Operation::cmp_lt:
             
                varDest = bb->cfg->IR_reg_to_asm(bb->cfg->get_var_index(params[0]));
                var1 = bb->cfg->IR_reg_to_asm(bb->cfg->get_var_index(params[1]));
                var2 = bb->cfg->IR_reg_to_asm(bb->cfg->get_var_index(params[2]));

                o<<"    movq    "<<var1<<", %rax"<<endl;
                o<<"    cmpq    "<<var2<<", %rax"<<endl;
                o<<"    setl    %al"<<endl;
                o<<"    movzbq  %al, %rax"<<endl;
                o<<"    movq    %rax, "<<varDest<<endl;
            
            break;
        case Operation::ret:
             
                varDest = bb->cfg->IR_reg_to_asm(bb->cfg->get_var_index(params[0]));
                
                o<<"    movq    "<<varDest<<", %rax"<<endl;

                bb->cfg->set_returnCalled(true);
            
            break;
        case Operation::call:
        {
                //recuperation du nom de la fonction et de la variable destination
                string function = params[0];
                varDest = bb->cfg->IR_reg_to_asm(bb->cfg->get_var_index(params[1]));

                //passage des paramètre dans les registres
                for (int i = 2; i < params.size(); i++) {
                    string arg = to_string(bb->cfg->get_var_index(params[i]))+"(%rbp)";

                    switch(i) {
                        case 2: o << "    movq    " << arg << ", %rdi" << endl; break;
                        case 3: o << "    movq    " << arg << ", %rsi" << endl; break;
                        case 4: o << "    movq    " << arg << ", %rdx" << endl; break;
                        case 5: o << "    movq    " << arg << ", %rcx" << endl; break;
                        case 6: o << "    movq    "  << arg << ", %r8" << endl; break;
                        case 7: o << "    movq    "  << arg << ", %r9" << endl; break;
                    }
                }


                o << "    callq   " << function << endl;

                //Si le type de retour est void on ne strock pas le resultat de la fonction (pas retourné) dans  varDest
                if(bb->cfg->getFonction()->getReturnType() != Type::VOID)
                    o << "    movq    %rax,"<<varDest<<endl;
            

            break;
        }
        default:
            break;
    }

}


/******** BasicBlock *********/

BasicBlock::BasicBlock(CFG* cfg, string entry_label){
	this->cfg = cfg;
	this->label = entry_label;	
}


/*
*   Ajoute une instruction au block avec son operation op, ses paramètres params et le block
*/
void BasicBlock::add_IRInstr(IRInstr::Operation op, vector<string> params) {
    instrs.push_back(new IRInstr(this, op, params));
}


/*
*   Genere l'assembleur pour un block et jump si necessaire aux blocks suivants
*/
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

}

/********* CFG *********/

CFG::CFG(string functionName){

    //Aucun symbol ni block pour l'instant
    nextFreeSymbolIndex=0;
    nextBBnumber=0;    

    //Création du premier block
    string firstBlockName = functionName+"_entry_block";
    BasicBlock* firstBlock = new BasicBlock(this,firstBlockName);
    add_bb(firstBlock);
    nextBBnumber++;

    //Création du dernier bloc
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


//Gestion des blocks

/*
*   Ajoute le block bb à la position nextBBnumber soit avant le dernier block
*/
void CFG::add_bb(BasicBlock* bb){
    bbs.insert(bbs.begin()+nextBBnumber,bb);
}

/*
*   Donen un nom au block  
*/
string CFG::new_BB_name(string name){
    return function->getNameFonction()+"_"+name+"block"+to_string(nextBBnumber);
}


//Gestion asm

/*
*   Génère l'assembleur
*/
void CFG::gen_asm(ostream& o){
    gen_asm_prologue(o);

    //Recuperation des valeurs des paramètres dans une fonction
    if(function->getNameFonction()!="main"){
        for(int i=0; i<function->getArgsSize();i++){
            string arg = function->getArgs().at(i).first;
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

    //Génère l'assembleur pour chaque block
    for(unsigned int i = 0; i < bbs.size(); i++)
    {
        if(bbs[i]->label != function->getNameFonction()+"_entry_block" ) { //&& bbs[i]->label != "exit_block"
            o<<bbs[i]->label<<":"<<endl;
            
        }
        bbs[i]->gen_asm(o);
        
    }

    gen_asm_epilogue(o);
}


/*
*   Génère l'assembleur prologue
*/
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

    //Si on est dans main, soustrait à rsp la taille occupé par les variables locales
    if(function->getNameFonction()=="main"){
        int size=(symboleTable->getSymbols().size()+1)*sizeof(int64_t);
        o<<"    subq   $"<<size<<", %rsp"<<endl;
    }
        
}


/*
*   Génère l'assembleur epilogue
*/
void CFG::gen_asm_epilogue(ostream& o){
    o<<"    #epilogue\n";
    if(function->getNameFonction()=="main"){
        o<<"    leave\n";
    }else{
        o<<"    popq %rbp\n";
    }
        
    o<<"    ret"<<endl;
}



/*
* Retourne la position de la var par rapport à rbp si l'index vaut 24 on retourne -24(%rbp)
*/
string CFG::IR_reg_to_asm(int index){
    string string_var = "-" + to_string(index) + "(%rbp)";
    return string_var;
}


//Gestion symbolTable

/*
*   Ajoute un symbole à la table de CFG
*/
void CFG::add_to_symbol_table(string name, Type t, int line, int nbAlloc){
    symboleTable->add(name,t,line, nextFreeSymbolIndex);
    nextFreeSymbolIndex+=nbAlloc;
}

/*
* Déclenche une erreur si le symbole appelé name est déjà déclaré
*/
void CFG::redeclarationError(int currentLine, string name){
    if(symboleTable->contains(name)){  
		cerr << "<source>:"<<currentLine<<": error: redeclaration of '"<<symboleTable->getType(name)<<" "<<name<<"'" << endl;
		cerr << "<source>:"<<symboleTable->getLine(name)<<": error: '"<<symboleTable->getType(name)<<" "<<name<<"' previously declared here" << endl;
		exit(1);
	}
}

/*
* Déclenche une erreur si le symbole appelé name est utilisé mais n'a pas été déclaré
*/
void CFG::erreurVariableNonDeclare(string name, int currentLine){
	if(!symboleTable->contains(name)){
		cerr << "<source>:"<<currentLine<<": error: '"<<name<<"' was not declared in this scope" << endl;
		exit(1);
	}
}

/*
* Déclenche une erreur si la taille entrée dans un tableau est negative
*/
void CFG::erreurNegativeTabSize(string name, int currentLine){
    cerr<<"<source>:"<<currentLine<<": error: size of array '"<<name<<"' is negative"<<endl;
    exit(1);
}

/*
* Déclenche une erreur si on attribu pas de taille à la déclaration d'un tableau
*/
void CFG::erreurScalarObject(string name, int currentLine){
    cerr<<"<source>:"<<currentLine<<": error: scalar object '"<<name<<"' requires one element in initializer"<<endl;
    exit(1);
}

/*
* Déclenche une erreur si on essaie d'attribuer un scalaire à la déclaration d'un tableau
*/
void CFG::erreurInvalidInitializer(int currentLine){
    cerr<<"<source>:"<<currentLine<<": error: invalid initializer"<<endl;
    exit(1);
}

void CFG::errorlvalMisPlaced(int currentLine){
    cerr<<"<source>:"<<currentLine<<": error: lvalue required as left operand of assignment"<<endl;
    exit(1);
}

/*
* Déclenche un warning si une variable appelé var est déclarée mais pas utilisée
*/
void CFG::warningVarNotUsed(){
    for(auto i : symboleTable->checkIfSymbolsUsed()){
		cerr<<"warning : variable '"<<i.first<<"' was declared but never referenced"<<endl;
	}
}


/*
* Créé un symbole temporaire et l'ajoute à la table des symboles
*/
string CFG::create_new_tempvar(Type t, string blockName, int line, int nbAlloc){
    string name = blockName+"_tmp"+to_string(nextFreeSymbolIndex);
    add_to_symbol_table(name,t,line,nbAlloc);
    symboleTable->setUsed(name,true);
    return name;
}

/*
* Créé un symbole temporaire pour une fonction et l'ajoute à la table des symboles
*/
string CFG::create_new_tempvar_function(Type t, string var, size_t line, int nbAlloc){
    add_to_symbol_table(var,t,line,nbAlloc);
    symboleTable->setUsed(var,true);
    return var;
}

/*
* Retourne l'index (l'offset) d'un symbole
*/
int CFG::get_var_index(string name){
    return symboleTable->getOffset(name);
}

/*
* Retourne le type d'un symbole
*/
Type CFG::get_var_type(string name){
    return symboleTable->getType(name);
}

//setters
void CFG::set_var_type(string name, Type type){
    symboleTable->setType(name,type);    
}

void CFG::set_var_used(string name, bool used){
    symboleTable->setUsed(name,used);
}


//Gestion des fonctions

/*
*   Retourne la fonction du CFG
*/
fonction * CFG::getFonction(){
    return this->function;
}


void CFG::warningReturnVoid(int currentLine){
	if(function->getReturnType()==Type::VOID){
		cerr<<"source.c:"+to_string(currentLine)+": warning: ‘return’ with a value, in function returning void"<<endl;
	}
	
}
/*
*   Retourne le type dela fonction du CFG
*/
bool CFG::get_returnCalled(){
    return this->returnCalled;
}

//setters

void CFG::set_returnCalled(bool val){
    this->returnCalled = val;
}

void CFG::setFonction(fonction *fonction){
    this->function = fonction;
}


