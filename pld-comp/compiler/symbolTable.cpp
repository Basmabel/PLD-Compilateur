#include "symbolTable.h"



	symbolTable::symbolTable(){}
	
	void symbolTable::add(string name, string typeStr, size_t lineSz)
	{
		size_t index =0;
		if(typeStr=="int"){
			index = sizeof(int)*(symbols.size()+1);
		}else if(typeStr=="char"){
			index = sizeof(char)*(symbols.size()+1);		
		}

		symbols.insert(make_pair(name, new symbol(name,index,typeStr,lineSz)));

	
	}
	void symbolTable::remove(string name)
	{
		symbols.erase(name);
	}

	void symbolTable::setUsed(string name, bool used){
		symbols.at(name)->setUsed(used);
	}

	bool symbolTable::isUsed(string name){
		return symbols.at(name)->isUsed();
	}

	size_t symbolTable::getOffset(string name){
		if(!this->contains(name)){
			return 0;
		}
		return symbols.at(name)->getOffset();
	}

	string symbolTable::getType(string name){
		if(!this->contains(name)){
			return 0;
		}
		return symbols.at(name)->getType();
	}

	size_t symbolTable::getLine(string name){
		if(!this->contains(name)){
			return 0;
		}
		return symbols.at(name)->getLine();
	}

	bool symbolTable::contains(string name){
		if(symbols.count(name)>0){
			return true;
		}
		return false;
	}

	map<string,size_t> symbolTable::checkIfSymbolsUsed(){
		map<string, size_t> ret;

		for(auto i : symbols){
			if(!i.second->isUsed()){
				ret.insert(make_pair(i.first,i.second->getLine()));
			}
		}

		return ret;
	}
