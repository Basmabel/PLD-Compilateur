
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

void fonction::setArgs(vector<pair<string,Type>> arguments){

    /*for(int i =0; i<arguments.size(); i++){
            args.push_back(arguments.at(i).first);
    }*/

    this->args = arguments;
}
