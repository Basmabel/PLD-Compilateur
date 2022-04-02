
#include "symbol.h"


//Constructeur
symbol::symbol(string name, int offset, string type, int line){
    this->name=name;
    this->offset=offset;
    this->type=type;
    this->line=line;
    this->used=false;
    this->null=true;
}

//Getters

string symbol::getName(){
    return this->name;
}

int symbol::getOffset(){
    return this->offset;
}

string symbol::getType(){
    return this->type;
}

int symbol::getLine(){
    return this->line;
}

bool symbol::isUsed(){
    return this->used;
}

bool symbol::isNull(){
    return this->null;
}

//Setters

void symbol::setUsed(bool used){
    this->used=used;
}

void symbol::setNull(bool null){
    this->null=null;
}

void symbol::setType(string type) {
    this->type=type;
}