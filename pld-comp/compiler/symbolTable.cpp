#include "symbolTable.h"


	symbolTable::symbolTable(){}
	void symbolTable::add(string name, size_t offsetsize, string typeStr, size_t lineSz)
	{
		offset.insert(make_pair(name, offsetsize));
		value.insert(make_pair(name, null));
		type.insert(make_pair(name, typeStr));
		line.insert(make_pair(name, lineSz));
		used.insert(make_pair(name, false));
	
	}
	void symbolTable::remove(string name)
	{
		offset.erase(name);
		value.erase(name);
		type.erase(name);
		line.erase(name);
		used.erase(name);
	}
	size_t symbolTable::getOffset(string name){
		return offset.at(name);
		
	}
	int symbolTable::getValue(string name){
		return value.at(name);
		
	}

	void symbolTable:: setValue(string name,int valueIn){
		value.at(name)= valueIn;
	}