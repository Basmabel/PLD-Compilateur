#include "functionTable.h"

#include <iostream>

	functionTable::functionTable(){}
	

	/*
	*	A DEFINIR
    *
	*/
	void functionTable::add(string name, string returnType, vector<pair<string,string>> args, size_t line)
	{
		/*size_t index =0;
		if(returnType=="int"){
			index = sizeof(int)*(functions.size()+1);
		}else if(returnType=="char"){
			index = sizeof(char)*(functions.size()+1);
		}else if(returnType=="void"){
			index = sizeof(void)*(functions.size()+1);
        }*/

		fonctions.insert(make_pair(name, new fonction(name,returnType,args, line)));
	}

	/*
	*	Permet de supprimer la fonction nommé name de la table
	*/
	void functionTable::remove(string name)
	{
		delete fonctions.at(name);
		fonctions.erase(name);

	}

	/*
	*	Renvoie vrai si la table contient la fonction nommé name
	*/
	bool functionTable::contains(string name){
		if(fonctions.count(name)>0){
			return true;
		}
		return false;
	}

	// Getters

	string functionTable::getReturnType(string name){
		return fonctions.at(name)->getReturnType();
	}

    size_t functionTable::getLine(string name){
		return fonctions.at(name)->getLine();
    }

    int functionTable::getArgsSize(string name){
		return fonctions.at(name)->getArgsSize();
    }

    fonction* functionTable::getFonction(string name){
        return fonctions.at(name);
    }



	