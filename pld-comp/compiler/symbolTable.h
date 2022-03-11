#pragma once

#include <map> 
#include <string>
#include <cstdio>

using namespace std;
class  symbolTable {
	public:
		symbolTable();
		void add(string name, size_t offset, string type, size_t line);
		void remove(string name);
		size_t getOffset(string name);
		int getValue(string name);

	private:

		map<string, size_t> offset;
		map<string, int> value;
		map<string, string> type;
		map<string, size_t> line;
		map<string, bool> used;

		size_t temp=0;

};