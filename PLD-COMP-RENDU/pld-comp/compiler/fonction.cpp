
#include "fonction.h"


//Constructeur
fonction::fonction(string name, Type returnType,  size_t line){
    this->name=name;
    this->type=returnType;
    this->line=line;
}

//Getters

string fonction::getNameFonction(){
    return this->name;
}


Type fonction::getReturnType(){
    return this->type;
}

size_t fonction::getLine(){
    return this->line;
}

int fonction::getArgsSize(){
    return this->args.size();
}

vector<pair<string,Type>> fonction::getArgs(){
    return this->args;
}

//Setters

void fonction::setArgs(vector<pair<string,Type>> arguments){
    this->args = arguments;
}
