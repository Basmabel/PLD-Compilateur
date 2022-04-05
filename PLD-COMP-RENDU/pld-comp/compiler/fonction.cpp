
#include "fonction.h"


//Constructeur
fonction::fonction(string name, string returnType, vector<pair<string,string>> args, size_t line){
    this->name=name;
    this->type=returnType;
    this->args=args;
    this->line=line;
}

//Getters

string fonction::getNameFonction(){
    return this->name;
}


string fonction::getReturnType(){
    return this->type;
}

size_t fonction::getLine(){
    return this->line;
}

int fonction::getArgsSize(){
    return this->args.size();
}
vector<pair<string,string>> fonction::getArgs(){
    return this->args;
}