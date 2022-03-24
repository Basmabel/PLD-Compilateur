#pragma once
/*************************************************************************
                           symbolTable  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

#if ! defined ( SYMBOLTABLE_H )
#define SYMBOLTABLE_H

//--------------------------------------------------- Interfaces utilisées

#include <map> 
#include <string>
#include <cstdio>
#include "symbol.h"

using namespace std;

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types


class  symbolTable {
	public:
		symbolTable();
		void add(string name, string type, size_t line);
		void setUsed(string name,bool used);
		void remove(string name);
		bool isUsed(string name);
		size_t getOffset(string name);
		string getType(string name);
		size_t getLine(string name);
		bool contains(string name);
		map<string,size_t> checkIfSymbolsUsed();


	private:

	//------------------------------------------------------------------ Attributes

		map<string,symbol*> symbols;
		size_t temp=0;

};

#endif //SYMBOLTABLE_H