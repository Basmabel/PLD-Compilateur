#include "functionTable.h"

#include <iostream>
#include <algorithm>

	functionTable::functionTable(){}
	

	/*
	*	Ajoute la fonction à la table
    *
	*/
	fonction* functionTable::add(string name, Type returnType, size_t line)
	{
		fonction * function = new fonction(name,returnType, line);
		fonctions.insert(make_pair(name, function));

		return function;
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

	Type functionTable::getReturnType(string name){
		return fonctions.at(name)->getReturnType();
	}

    size_t functionTable::getLine(string name){
		return fonctions.at(name)->getLine();
    }

    int functionTable::getArgsSize(string name){
		return fonctions.at(name)->getArgsSize();
    }

	int functionTable::getSize(){
		return fonctions.size();
    }


    bool functionTable :: argsContains(string variable){
        if(count(args.begin(), args.end(),variable)>0){
			return true;
		}
		return false;
    }

    fonction* functionTable::getFonction(string name){
        return fonctions.at(name);
    }



	