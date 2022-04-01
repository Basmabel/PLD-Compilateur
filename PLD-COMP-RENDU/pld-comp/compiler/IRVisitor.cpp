#include <iostream>
#include "IRVisitor.h"
using namespace std;


/*
*	Visite les instructions du programme et génère le CFG correspondant
*/
antlrcpp::Any IRVisitor::visitProg(ifccParser::ProgContext *ctx) 
{
	
    cfg = new CFG();
    for(int i=0 ; i<ctx->instr().size(); i++){
		linectr=ctx->instr().at(i)->getStart()->getLine();
		visit(ctx->instr().at(i));
	}
    
    cfg->gen_asm(cout);
	return 0;
}


/*
*	Visiteur de l'instruction déclaration d'une variable 
*/
antlrcpp::Any IRVisitor::visitDeclarationInstr(ifccParser::DeclarationInstrContext *context){
	visitDeclaration(context->declaration());
	return 0;
}

/*
*	Visiteur de l'instruction affectation d'une variable 
*/
antlrcpp::Any IRVisitor::visitAffectationInstr(ifccParser::AffectationInstrContext *context){
	visitAffectation(context->affectation());
	return 0;
}

/*
*	Visiteur de l'instruction if then else 
*/
antlrcpp::Any IRVisitor::visitIf_then_elseInstr(ifccParser::If_then_elseInstrContext *context){

	visitIf_then_else(context->if_then_else());
	return 0;
}

/*
*	Visiteur de l'instruction return en fin de fonction 
*/
antlrcpp::Any IRVisitor::visitReturn_stmtInstr(ifccParser::Return_stmtInstrContext *context){
	visitReturn_stmt(context->return_stmt());
	return 0;
}


/*
*	Visite la déclaration de variables, les ajoute à la table des symboles du cfg
*/
antlrcpp::Any IRVisitor::visitDeclaration(ifccParser::DeclarationContext *context)
{
	

	for(int i=0 ; i<context->variables().size(); i++){
		string var =visitVariables(context->variables().at(i));
        cfg->redeclarationError(linectr,var);
		cfg->add_to_symbol_table(var,Type::INT,linectr);
	}

	string var =context->VAR()->getText();
	cfg->redeclarationError(linectr,var);
	cfg->add_to_symbol_table(var,Type::INT,linectr);
	
	return 0;
}


/*
*	Visite d'une variable, retourne son nom 
*/
antlrcpp::Any IRVisitor::visitVariables(ifccParser::VariablesContext *context){
	return context->VAR()->getText();
}


/*
*	Visite de l'affectation d'une variable et création de l'instruction dans le block.
*	Si la variable a bien été déclarée au préalable, on lui affecte la valeur produite par la visite de l'expression et on 
*	indique qu'elle a été utilisée. 
*/
antlrcpp::Any IRVisitor::visitAffectation(ifccParser::AffectationContext *context)
{

	std::string var =context->VAR()->getText();

    cfg->erreurVariableNonDeclare(var,linectr);

	string local = visit(context->expression());
	
	cfg->set_var_used(var,true);

    vector<string> params = {var,local};

    cfg->current_bb->add_IRInstr(IRInstr::Operation::mov, Type::MOV, params);

	return var;
}


/*
*	Visite de l'expression plus ou de l'expression moins. 
* 	Récupère le nom des deux variables var et var2 obtenues par la 
*	visite de l'expression à droite du (+/-) et de celle à gauche.
*	Stocke le résultat dans une nouvelle variable temporaire et retourne son nom
*/
antlrcpp::Any IRVisitor::visitPlusminus(ifccParser::PlusminusContext *context) 
{

	//Indique si l'expression est une addition ou une soustraction
	bool op = (context->PLUS())? true : false;


	//récuparation du nom de la première variable
	std::string var= visit(context->expression(0));
	
	//récuparation du nom de la deuxieme variable
	std:: string var2=visit(context->expression(1));	


	//Creation d'une nouvelle variable résultat
	std:: string vartmp = cfg->create_new_tempvar(Type::INT, cfg->current_bb->label,linectr);

    vector<string> params = {vartmp,var,var2};

    if(op){
        cfg->current_bb->add_IRInstr(IRInstr::Operation::add, Type::ADD, params);
    }else{
        cfg->current_bb->add_IRInstr(IRInstr::Operation::sub, Type::SUB, params);
    }
    

	return vartmp;
}

/*
*	Visite de l'expression multiply ou de l'expression divide. 
* 	Récupère le nom des deux variables var et var2 obtenues par la 
*	visite de l'expression à droite du (*,/) et de celle à gauche.
*	Stock le résultat dans une nouvelle variable temporaire et retourne son nom.
*/
antlrcpp::Any IRVisitor::visitMultdiv(ifccParser::MultdivContext *context) 
{
	//Indique si l'expression est une multiplication ou une division
	bool op = (context->MULTIPLY())? true : false;

	//récuparation du nom de la première variable
	std::string var= visit(context->expression(0));

	//récuparation du nom de la deuxieme variable
	std:: string var2=visit(context->expression(1));

	//Creation d'une nouvelle variable résultat
	std:: string vartmp = cfg->create_new_tempvar(Type::INT, cfg->current_bb->label,linectr);

    vector<string> params = {vartmp,var,var2};

	if(op){
        cfg->current_bb->add_IRInstr(IRInstr::Operation::mul, Type::MUL, params);
    }else{
        cfg->current_bb->add_IRInstr(IRInstr::Operation::div, Type::DIV, params);
    }


	return vartmp;
}

/*
*	Visite de l'expression entre parenthèses et retourne le nom de la variable obtenue
*/
antlrcpp::Any IRVisitor::visitPar(ifccParser::ParContext *context) 
{
	string var = visit(context->expression());
	return var;	
}


/*
*	Visite d'une variable. Si elle a été déclarée, retourne son nom
*/
antlrcpp::Any IRVisitor::visitVar(ifccParser::VarContext *context) 
{
	std::string var =context->VAR()->getText();

	cfg->erreurVariableNonDeclare(var,linectr);

	return var;
	
}

/*
*	Visite d'un moins unaire.
*	Récupère le nom de la variable var obtenue par la visite de l'expression suivant le -.
*	Stock et retourne le nom du résultat dans une nouvelle variable temporaire
*/
antlrcpp::Any IRVisitor::visitOppose(ifccParser::OpposeContext *context){

	std::string var =visit(context->expression());

	//Creation d'une nouvelle variable résultat
	std:: string vartmp = cfg->create_new_tempvar(Type::INT, cfg->current_bb->label,linectr);

    vector<string> params = {vartmp,var};

	cfg->current_bb->add_IRInstr(IRInstr::Operation::neg, Type::NEG, params);

	return vartmp;
}


/*
*	Visite d'une constante. 
*	Récupère sa valeur et stock la constante dans une nouvelle variable temporaire.
*	Retourne le nom de la nouvelle variable.
*/
antlrcpp::Any IRVisitor::visitConst(ifccParser::ConstContext *context)
{
	
	string val = context->CONST()->getText();

    //Creation d'une nouvelle variable résultat
	std:: string var = cfg->create_new_tempvar(Type::INT, cfg->current_bb->label,linectr);

    vector<string> params = {var,val};

	cfg->current_bb->add_IRInstr(IRInstr::Operation::ldconst, Type::CONST, params); 

	return var;
}

/*
*	Visite du if else statement. 
*/
antlrcpp::Any IRVisitor :: visitIf_then_else(ifccParser::If_then_elseContext *context) {

	//visite de la condition
	string var = visit(context->condition());
	
	//sauvegarde de la sortie 
	BasicBlock* blockTmp = cfg->current_bb->exit_true;
	cout<<"tmp = "<<blockTmp->label<<endl;
	
	//créer les blocks then, else et endif
	string nameBlock1= cfg->new_BB_name("then");
    BasicBlock* block1 = new BasicBlock(cfg,nameBlock1);
	cfg->add_bb(block1);
	cfg->nextBBnumber++;

	string nameBlock2= cfg->new_BB_name("else");
    BasicBlock* block2 = new BasicBlock(cfg,nameBlock2);
	cfg->add_bb(block2);
	cfg->nextBBnumber++;

	string nameBlock3= cfg->new_BB_name("endif");
    BasicBlock* block3 = new BasicBlock(cfg,nameBlock3);
	cfg->add_bb(block3);
	cfg->nextBBnumber++;

	cfg->current_bb->exit_true= block1; // true-> then
	cfg->current_bb->exit_false= block2; // false->else

	cfg->current_bb=block1;
	block1->exit_true= block3;
	block1->exit_false= nullptr;
	

	visit(context->blockthen); 
	
	cfg->current_bb=block2;
	block2->exit_true= block3; //enlever le jump dans l'assembleur
	block2->exit_false= nullptr;

	visit(context->blockelse); 

	cfg->current_bb=block3;
	block3->exit_true = blockTmp;
	cout<<"tmp2 = "<<block3->exit_true->label<<endl;

	//block3->exit_true=cfg->return_bb; 
	block3->exit_false=nullptr;


	return 0;
}

/*
*	.. 
*/
antlrcpp::Any IRVisitor::visitBlock(ifccParser::BlockContext *context){

	for(int i=0 ; i<context->instr().size(); i++){
		linectr=context->instr().at(i)->getStart()->getLine();
		visit(context->instr().at(i));
	}

	return 0;
}

/*
*	.. 
*/
antlrcpp::Any IRVisitor :: visitCondition_affectation(ifccParser::Condition_affectationContext *context) {
	string var = visit(context->affectation());

    vector<string> params = {"$0",var};

	cfg->current_bb->add_IRInstr(IRInstr::Operation::cmp_eq, Type::CMP_EQ, params); 

	return var;
}

/*
*	.. 
*/
antlrcpp::Any IRVisitor :: visitCondition_expression(ifccParser::Condition_expressionContext *context) {
	string var = visit(context->expression());
	return 0;
}

/*
*	.. 
*/
antlrcpp::Any IRVisitor :: visitCondition_comparison(ifccParser::Condition_comparisonContext *context) {
	string var = visit(context->comparison());
	return 0;
}

/*
*	.. 
*/
antlrcpp::Any IRVisitor :: visitComparison_equal(ifccParser::Comparison_equalContext *context) {
	
	//récuparation du nom de la première variable
	std::string var= visit(context->expression(0));
	
	//récuparation du nom de la deuxieme variable
	std:: string var2=visit(context->expression(1));	
	return 0;
}

/*
*	.. 
*/
antlrcpp::Any IRVisitor :: visitComparison_different(ifccParser::Comparison_differentContext *context) {

	//récuparation du nom de la première variable
	std::string var= visit(context->expression(0));
	
	//récuparation du nom de la deuxieme variable
	std:: string var2=visit(context->expression(1));

	return 0;
}

/*
*	Visite du return. Génère le code assembleur associé en utilisant le 
*	nom de la variable obtenue par la visite de l'expression dans le return.
*/
antlrcpp::Any IRVisitor::visitReturn_stmt(ifccParser::Return_stmtContext *context) 
{
	
	std:string ret = visit(context->expression());
	
    vector<string> params = {ret};

    cfg->current_bb->add_IRInstr(IRInstr::Operation::ret, Type::RET, params); 
	
	return 0;
}










