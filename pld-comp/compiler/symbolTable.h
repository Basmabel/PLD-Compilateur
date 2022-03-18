#pragma once

#include <map> 
#include <string>
#include <cstdio>
#include "symbol.h"

using namespace std;
class  symbolTable {
	public:
		symbolTable();
		void add(string name, string type, size_t line);
		void setUsed(string name,bool used);
		void remove(string name);
		bool isUsed(string name);
		size_t getOffset(string name);
		string getType(string name);
		bool contains(string name);
		map<string,size_t> checkIfSymbolsUsed();


	private:

		map<string,symbol*> symbols;

		size_t temp=0;

};