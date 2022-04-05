#include "symbolTable.h"

#include <iostream>

	symbolTable::symbolTable(){}
	

	/*
	*	Permet d'ajouter un symbol dans la table avec son nom, sont type et sa ligne de déclaration
	*   La position dans la pile est calculé à partir de la type en octet du type.
	*/
	void symbolTable::add(string name, string typeStr, int lineSz, int length)
	{
		int index =0;
		if(typeStr=="int"){
			index = sizeof(int64_t)*(length+1);
		}else if(typeStr=="char"){
			index = sizeof(int64_t)*(length+1);
		}

		symbols.insert(make_pair(name, new symbol(name,index,typeStr,lineSz)));
	
	}

	/*
	*	Permet de supprimer le symbol nommé name de la table
	*/
	void symbolTable::remove(string name)
	{
		delete symbols.at(name);
		symbols.erase(name);

	}

	/*
	*	Renvoie vrai si la table contient le symbol nommé name
	*/
	bool symbolTable::contains(string name){
		if(symbols.count(name)>0){
			return true;
		}
		return false;
	}


	/*
	*	Renvoie tous les symbols qui n'ont pas été déclarés mais pas utilisés
	*/
	map<string,int> symbolTable::checkIfSymbolsUsed(){
		
		map<string, int> ret;

		for(auto i : symbols){
			if(!i.second->isUsed()){
				ret.insert(make_pair(i.first,i.second->getLine()));
			}
		}

		return ret;
	}


	// Getters


	bool symbolTable::isUsed(string name){
		return symbols.at(name)->isUsed();
	}

	bool symbolTable::isNull(string name){
		return symbols.at(name)->isNull();
	}

	int symbolTable::getOffset(string name){
		return symbols.at(name)->getOffset();
	}

	string symbolTable::getType(string name){
		return symbols.at(name)->getType();
	}

	int symbolTable::getLine(string name){
		return symbols.at(name)->getLine();
	}


	//Setters

	void symbolTable::setUsed(string name, bool used){
		symbols.at(name)->setUsed(used);
	}

	void symbolTable::setNull(string name, bool null){
		symbols.at(name)->setUsed(null);
	}

	void symbolTable::setType(string name, string type){
		symbols.at(name)->setType(type);
	}


	