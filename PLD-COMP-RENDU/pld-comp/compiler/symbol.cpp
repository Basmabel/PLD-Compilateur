
#include "symbol.h"


//Constructeur
symbol::symbol(string name, size_t offset, string type, size_t line){
    this->name=name;
    this->offset=offset;
    this->type=type;
    this->line=line;
    this->used=false;
}

//Getters

string symbol::getName(){
    return this->name;
}

size_t symbol::getOffset(){
    return this->offset;
}

string symbol::getType(){
    return this->type;
}

size_t symbol::getLine(){
    return this->line;
}

bool symbol::isUsed(){
    return this->used;
}

//Setters

void symbol::setUsed(bool used){
    this->used=used;
}