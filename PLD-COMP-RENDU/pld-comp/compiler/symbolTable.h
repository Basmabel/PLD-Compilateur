
/*************************************************************************
                           symbolTable  -  description
                             -------------------
    début                : 11/03/2022
    copyright            : (C) 2022 par GUILLEVIC Marie, BELAHCEN Basma, ALAMI Meryem, PREVOT Jade, CHELLAOUI Adam, M BARECK Aichetou, 
							AL ZAHABI Hanaa, WAQIF Salma, GREVAUD Paul
*************************************************************************/

#pragma once

#if ! defined ( SYMBOLTABLE_H )
#define SYMBOLTABLE_H

//--------------------------------------------------- Interfaces utilisées

#include <map> 
#include <string>
#include <cstdio>
#include "symbol.h"

using namespace std;

/* Rôle de la classe <symbolTable>
*  Joue le rôle de la table des symbole avec comme attribut une map stockant les Symbols. 
*  Ses fonctions permettent d'ajouter des symboles, d'en retirer ou encore d'accéder aux différents attributs d'un symbole
*/

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

};

#endif //SYMBOLTABLE_H