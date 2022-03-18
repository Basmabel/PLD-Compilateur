#pragma once

#include <string>

using namespace std;

class  symbol{
	public:
		symbol(string name, size_t offset, string type, size_t line);

                string getName();
                size_t getOffset();
                string getType();
                size_t getLine();
                bool isUsed();
                
                void setUsed(bool used);

	private:

        string name;
        size_t offset;
        string type;
        size_t line;
        bool used;

};