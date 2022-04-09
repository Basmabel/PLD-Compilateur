
/*************************************************************************
                           functionTable  -  description
                             -------------------
    début                : 11/03/2022
    copyright            : (C) 2022 par GUILLEVIC Marie, BELAHCEN Basma, ALAMI Meryem, PREVOT Jade, CHELLAOUI Adam, M BARECK Aichetou, 
							AL ZAHABI Hanaa, WAQIF Salma, GREVAUD Paul
*************************************************************************/

#pragma once

#if ! defined (FUNCTIONTABLE_H )
#define FUNCTIONTABLE_H

//--------------------------------------------------- Interfaces utilisées

#include <map> 
#include <string>
#include <cstdio>
#include "fonction.h"

using namespace std;

/* Rôle de la classe <functionTable>
*  Joue le rôle de la table des fonctions avec comme attribut une map stockant les Fonctions. 
*  Ses fonctions permettent d'ajouter des fonctions, d'en retirer ou encore d'accéder aux différents attributs d'une fonction
*/

class  functionTable {
	public:
		functionTable();

		fonction* add(string name, Type returnType,size_t line);
		void remove(string name);
		
		Type getReturnType(string name);
        int getArgsSize(string name);
        bool argsContains (string variable);
		bool contains(string name);
        size_t getLine(string name);
		int getSize();
        fonction* getFonction(string name);

	private:

	//------------------------------------------------------------------ Attributes
	map<string,fonction*> fonctions;
    vector<string> args;

};

#endif //FUNCTIONTABLE_H