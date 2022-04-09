#include <iostream>
#include "ValeurVisitor.h"
using namespace std;


/*
*	Visite les instructions du programme et génère le CFG correspondant
*/
antlrcpp::Any ValeurVisitor::visitProg(ifccParser::ProgContext *ctx) 
{
    for(int i=0 ; i<ctx->instr().size(); i++){
		currentLine=ctx->instr().at(i)->getStart()->getLine();
		visit(ctx->instr().at(i));
	}

	/*for(auto i : values){
		cout<<i.first<<" : "<<i.second<<endl;
	}*/
    
	return 0;
}


/*
*	Visiteur de l'instruction déclaration d'une variable 
*/
antlrcpp::Any ValeurVisitor::visitDeclarationInstr(ifccParser::DeclarationInstrContext *context){
	visitDeclaration(context->declaration());
	return 0;
}

/*
*	Visiteur de l'instruction d'appel de fonction 
*/
antlrcpp::Any ValeurVisitor::visitFunctionCallInstr(ifccParser::FunctionCallInstrContext *context){
	visitFunctionCall(context->functionCall());
	return 0;
}

/*
*	Visiteur de l'instruction affectation d'une variable 
*/
antlrcpp::Any ValeurVisitor::visitAffectationInstr(ifccParser::AffectationInstrContext *context){
	visitAffectation(context->affectation());
	return 0;
}

/*
*	Visiteur de l'instruction return en fin de fonction 
*/
antlrcpp::Any ValeurVisitor::visitReturn_stmtInstr(ifccParser::Return_stmtInstrContext *context){
	visitReturn_stmt(context->return_stmt());
	return 0;
}





/*
*	Visite la déclaration de variables, les ajoute à la table des symboles du cfg
*/
antlrcpp::Any ValeurVisitor::visitDeclaration(ifccParser::DeclarationContext *context)
{

	declaration = true;

	for(int i=0 ; i<context->variables().size(); i++){
		string var =visit(context->variables().at(i));
		addValue(var,0);
	}

	string var =visit(context->enddeclaration());
	addValue(var,0);

	declaration = false;

	return 0;
}

/*
*	Visite l'appel de fonction
*/
antlrcpp::Any ValeurVisitor::visitFunctionCall(ifccParser::FunctionCallContext *context)
{
	int a = 5;
	
	return a;
}

antlrcpp::Any ValeurVisitor::visitFuncCall(ifccParser::FuncCallContext *context) 
{
	int a = 5;
	
	return a;
}


/*
*	Visite d'une variable, retourne son nom 
*/
/*antlrcpp::Any ValeurVisitor::visitVariables(ifccParser::VariablesContext *context){
	return context->VAR()->getText();
}*/


/*
*	Visite d'une variable en fin de déclaration et retourne son nom
*/
antlrcpp::Any ValeurVisitor::visitEnddeclvar(ifccParser::EnddeclvarContext *context){
	return visit(context->lvalue());
}

/*
*	Visite une variable déclarée et affectée en fin de déclaration et retourne son nom
*/
antlrcpp::Any ValeurVisitor::visitEnddeclaffect(ifccParser::EnddeclaffectContext *context){
	return visit(context->affectation());
}


/*
*	Visite une variable  et retourne son nom
*/
antlrcpp::Any ValeurVisitor::visitVarsimpledecl(ifccParser::VarsimpledeclContext *context){
	return visit(context->lvalue());
}

/*
*	Visite une variable déclarée et affectée et retourne son nom
*/
antlrcpp::Any ValeurVisitor::visitVaraffectdecl(ifccParser::VaraffectdeclContext *context){
	return visit(context->affectation());
}


/*
*	Visite de l'affectation d'une variable et création de l'instruction dans le block.
*	Si la variable a bien été déclarée au préalable, on lui affecte la valeur produite par la visite de l'expression et on 
*	indique qu'elle a été utilisée. 
*/
antlrcpp::Any ValeurVisitor::visitAffectation(ifccParser::AffectationContext *context)
{
	

	//Recuperation nouvelle variable droite
	int local = visit(context->expression());

	//Recuperation nouvelle variable gauche
	std::string var =visit(context->lvalue());

	if(!declaration){
		var+=to_string(currentLine);
	}

	addValue(var,local);
	//cout<<getLastValForVar(var)<<endl;
	
	if(declaration){
		
		return var;
	}else{
		return local;
	}
	
}


/*
*	Visiteur de lvalue pour une variable simple
*/
antlrcpp::Any ValeurVisitor::visitLvalVar(ifccParser::LvalVarContext *context){

	string var = context->VAR()->getText();

	int val = 0;
	create_new_tempvar(val);

	return var;
}

/*
*	Visiteur de lvalue pour un tableau
*/
antlrcpp::Any ValeurVisitor::visitLvaltableau(ifccParser::LvaltableauContext *context){
	string var = context->VAR()->getText();

	int size = visit(context->expression());
	
	if(declaration){
		string name =var +"_tab_size";
		addValue(name,size);
		nbNewVar+=size;
	}else{
		string name = var+"_index_"+to_string(currentLine);
		addValue(name,size);
	}

	int val = size;
	create_new_tempvar(val);
	

	return var;
}

/*
*	Visite de l'expression plus ou de l'expression moins. 
* 	Récupère le nom des deux variables var et var2 obtenues par la 
*	visite de l'expression à droite du (+/-) et de celle à gauche.
*	Stocke le résultat dans une nouvelle variable temporaire et retourne son nom
*/
antlrcpp::Any ValeurVisitor::visitPlusminus(ifccParser::PlusminusContext *context) 
{

	//Indique si l'expression est une addition ou une soustraction
	bool op = (context->PLUS())? true : false;


	//récuparation du nom de la première variable
	int val1= visit(context->expression(0));
	
	//récuparation du nom de la deuxieme variable
	int val2=visit(context->expression(1));	

	if(op){
        int val = val1+val2;
		create_new_tempvar(val);
		return val;
    }
    

    int val = val1-val2;
	create_new_tempvar(val);

	return val;
}

antlrcpp::Any ValeurVisitor::visitCharacter(ifccParser::CharacterContext *context){
	string character =context->CHARACTER()->getText();

	int64_t temp = (int64_t) character[1];
	int tmp = (int) temp;

	return tmp;
}

/*
*	Visite de l'expression multiply ou de l'expression divide. 
* 	Récupère le nom des deux variables var et var2 obtenues par la 
*	visite de l'expression à droite du (*,/) et de celle à gauche.
*	Stock le résultat dans une nouvelle variable temporaire et retourne son nom.
*/
antlrcpp::Any ValeurVisitor::visitMultdiv(ifccParser::MultdivContext *context) 
{
	//Indique si l'expression est une multiplication ou une division
	bool op = (context->MULTIPLY())? true : false;

	//récuparation du nom de la première variable
	int val1= visit(context->expression(0));
	
	//récuparation du nom de la deuxieme variable
	int val2=visit(context->expression(1));	

	if(op){
        int val = (int) val1*val2;
		create_new_tempvar(val);

		return val;
    }

	if(val2==0){
		return val1;
	}
    int val =val1/val2;


	create_new_tempvar(val);

	return val;

}

/*
*	Visite de l'expression entre parenthèses et retourne le nom de la variable obtenue
*/
antlrcpp::Any ValeurVisitor::visitPar(ifccParser::ParContext *context) 
{
	int val = visit(context->expression());
	return val;	
}


/*
*	Visite d'une variable. Si elle a été déclarée, retourne son nom
*/
antlrcpp::Any ValeurVisitor::visitVar(ifccParser::VarContext *context) 
{
	std::string var =context->VAR()->getText();

	return getLastValForVar(var);
	
}

/*
*	Visite d'une valeur dans le tableau
*/
antlrcpp::Any ValeurVisitor::visitValTableau(ifccParser::ValTableauContext *context){
	int val = visit(context->expression());
	create_new_tempvar(val);
	return val;
}

/*
*	Visite d'un moins unaire.
*	Récupère le nom de la variable var obtenue par la visite de l'expression suivant le -.
*	Stock et retourne le nom du résultat dans une nouvelle variable temporaire
*/
antlrcpp::Any ValeurVisitor::visitOppose(ifccParser::OpposeContext *context){

	//récuparation du nom de la première variable
	int val1= visit(context->expression());

	int val = -val1;

	create_new_tempvar(val);

	return val;
}


/*
*	Visite d'un ! unaire qui signifie une négation boolean.
*	Récupère le nom de la variable var obtenue par la visite de l'expression suivant le !.
*	Stock et retourne le nom du résultat dans une nouvelle variable temporaire
*/
antlrcpp::Any ValeurVisitor::visitNegation(ifccParser::NegationContext *context){
	//récuparation du nom de la première variable
	int val1= visit(context->expression());

	int val = (int) (!val1);

	create_new_tempvar(val);

	return val;
}


/*
*	Visite d'un et logique.
*	Récupère le nom des variables var obtenues par la visite des expressions précédant et suivant le &.
*	Stock et retourne le nom du résultat dans une nouvelle variable temporaire
*/
antlrcpp::Any ValeurVisitor::visitAndlogiq(ifccParser::AndlogiqContext *context){

	//récuparation du nom de la première variable
	int val1= visit(context->expression(0));
	
	//récuparation du nom de la deuxieme variable
	int val2=visit(context->expression(1));	

	int val= (int) (val1&val2);

	create_new_tempvar(val);

	return val;
}

/*
*	Visite d'un xor logique.
*	Récupère le nom des variables var obtenues par la visite des expressions précédant et suivant le ^.
*	Stock et retourne le nom du résultat dans une nouvelle variable temporaire
*/
antlrcpp::Any ValeurVisitor::visitXorlogiq(ifccParser::XorlogiqContext *context){

	//récuparation du nom de la première variable
	int val1= visit(context->expression(0));
	
	//récuparation du nom de la deuxieme variable
	int val2=visit(context->expression(1));	

	int val = (int) (val1^val2);

	create_new_tempvar(val);

	return val;
}


/*
*	Visite d'un ou logique.
*	Récupère le nom des variables var obtenues par la visite des expressions précédant et suivant le |.
*	Stock et retourne le nom du résultat dans une nouvelle variable temporaire
*/
antlrcpp::Any ValeurVisitor::visitOrlogiq(ifccParser::OrlogiqContext *context){

	//récuparation du nom de la première variable
	int val1= visit(context->expression(0));
	
	//récuparation du nom de la deuxieme variable
	int val2=visit(context->expression(1));	

	int val = (int) (val1 | val2);

	create_new_tempvar(val);

	return val;
}


antlrcpp::Any ValeurVisitor::visitExprAffectation(ifccParser::ExprAffectationContext *context) {
	int val = visit(context->affectation());
	create_new_tempvar(val);
	return val;
}



/*
*	Visite d'une constante. 
*	Récupère sa valeur et stock la constante dans une nouvelle variable temporaire.
*	Retourne le nom de la nouvelle variable.
*/
antlrcpp::Any ValeurVisitor::visitConst(ifccParser::ConstContext *context)
{
	
	int val = stoi(context->CONST()->getText());

	create_new_tempvar(val);

	return val;
}


/*
*	Visite du return. Génère le code assembleur associé en utilisant le 
*	nom de la variable obtenue par la visite de l'expression dans le return.
*/
antlrcpp::Any ValeurVisitor::visitReturn_stmt(ifccParser::Return_stmtContext *context) 
{
	visit(context->expression());
	return 0;
}


string ValeurVisitor::create_new_tempvar(int val){
	string var = "_tmp"+to_string(nbNewVar);
	addValue(var,val);
	nbNewVar++;
	return var;
}


void ValeurVisitor::addValue(string name, int value){
    if(values.count(name)>0){
    }else{
        values.insert(make_pair(name,value));
    }    
}

int ValeurVisitor::getLastValForVar(string name){
	int val = 0;
	for(auto i : values){
		if(i.first.find(name)!=string::npos){
			val=i.second;
		}
	}
	return val;
}


bool ValeurVisitor::contains(string name){
	if(values.count(name)>0){
		return true;
	}
	return false;
}
