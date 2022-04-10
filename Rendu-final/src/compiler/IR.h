/*************************************************************************
                           IR  -  description
                             -------------------
    début                : 11/03/2022
    copyright            : (C) 2022 par GUILLEVIC Marie, BELAHCEN Basma, ALAMI Meryem, PREVOT Jade, CHELLAOUI Adam, M BARECK Aichetou, 
							AL ZAHABI Hanaa, WAQIF Salma, GREVAUD Paul
*************************************************************************/

#pragma once

#if ! defined ( IR_H )
#define IR_H

//--------------------------------------------------- Interfaces utilisées
#include <vector>
#include <string>
#include <iostream>
#include <initializer_list>


#include "symbolTable.h"
#include "functionTable.h"
#include "fonction.h"

using namespace std;


class BasicBlock;
class CFG;
class DefFonction;


//! The class for one 3-address instruction
class IRInstr {
 
   public:
	/** The instructions themselves -- feel free to subclass instead */
	typedef enum {
		ldconst,
		neg,
		setz,
		copy,
		add,
		sub,
		mul,
		mov,
		movb,
		ret,
		div,
		andq,
		orq,
		xorq,
		rmem,
		wmem,
		call, 
		cmp_eq,
		cmp_ineq,
		cmp_lt,
		cmp_gt
	} Operation;


	/**  constructor */
	IRInstr(BasicBlock* bb_, Operation op, vector<string> params);
	
	/** Actual code generation */
	void gen_asm(ostream &o); /**< x86 assembly code generation for this IR instruction */
	
 private:
	BasicBlock* bb; /**< The BB this instruction belongs to, which provides a pointer to the CFG this instruction belong to */
	Operation op;
	vector<string> params; /**< For 3-op instrs: d, x, y; for ldconst: d, c;  For call: label, d, params;  for wmem and rmem: choose yourself */
	// if you subclass IRInstr, each IRInstr subclass has its parameters and the previous (very important) comment becomes useless: it would be a better design. 
};






/**  The class for a basic block */

/* A few important comments.
	 IRInstr has no jump instructions.
	 cmp_* instructions behaves as an arithmetic two-operand instruction (add or mult),
	  returning a boolean value (as an int)

	 Assembly jumps are generated as follows:
	 BasicBlock::gen_asm() first calls IRInstr::gen_asm() on all its instructions, and then 
		    if  exit_true  is a  nullptr, 
            the epilogue is generated
        else if exit_false is a nullptr, 
          an unconditional jmp to the exit_true branch is generated
				else (we have two successors, hence a branch)
          an instruction comparing the value of test_var_name to true is generated,
					followed by a conditional branch to the exit_false branch,
					followed by an unconditional branch to the exit_true branch
	 The attribute test_var_name itself is defined when converting 
  the if, while, etc of the AST  to IR.

Possible optimization:
     a cmp_* comparison instructions, if it is the last instruction of its block, 
       generates an actual assembly comparison 
       followed by a conditional jump to the exit_false branch
*/

class BasicBlock {
 public:
	BasicBlock(CFG* cfg, string entry_label);
	void gen_asm(ostream &o); /**< x86 assembly code generation for this basic block (very simple) */

	void add_IRInstr(IRInstr::Operation op, vector<string> params);

	// No encapsulation whatsoever here. Feel free to do better.
	BasicBlock* exit_true;  /**< pointer to the next basic block, true branch. If nullptr, return from procedure */ 
	BasicBlock* exit_false; /**< pointer to the next basic block, false branch. If null_ptr, the basic block ends with an unconditional jump */
	string label; /**< label of the BB, also will be the label in the generated code */
	CFG* cfg; /** < the CFG where this block belongs */
	vector<IRInstr*> instrs; /** < the instructions themselves. */
  	string test_var_name;  /** < when generating IR code for an if(expr) or while(expr) etc,
													 store here the name of the variable that holds the value of expr */
 protected:

 
};




/** The class for the control flow graph, also includes the symbol table */

/* A few important comments:
	 The entry block is the one with the same label as the AST function name.
	   (it could be the first of bbs, or it could be defined by an attribute value)
	 The exit block is the one with both exit pointers equal to nullptr.
     (again it could be identified in a more explicit way)

 */
class CFG {
 public:
	CFG(string functionName);


	/****Gestion des  basics blocks ****/
	
	void add_bb(BasicBlock* bb); 
	string new_BB_name(string name);
	BasicBlock* current_bb;
	BasicBlock* return_bb;
	int nextBBnumber; 


	/****Gestion de l'asm ****/

	// x86 code generation: could be encapsulated in a processor class in a retargetable compiler
	void gen_asm(ostream& o);
	string IR_reg_to_asm(int index); /**< helper method: inputs a IR reg or input variable, returns e.g. "-24(%rbp)" for the proper value of 24 */
	void gen_asm_prologue(ostream& o);
	void gen_asm_epilogue(ostream& o);

	/****Gestion de la table des symboles *****/
	void add_to_symbol_table(string name, Type t, int line,int nbAlloc=1);

	void redeclarationError(int linectr, string name);
	void erreurVariableNonDeclare(string name, int linectr);
	void erreurNegativeTabSize(string name, int linectr);
	void erreurScalarObject(string name, int linectr);
	void erreurInvalidInitializer(int linectr);
	void errorlvalMisPlaced(int currentLine);
	void warningVarNotUsed();

	string create_new_tempvar(Type t, string blockName, int line,int nbAlloc=1);
	string create_new_tempvar_function(Type t, string var, size_t line, int nbAlloc=1);

	int get_var_index(string name);
	Type get_var_type(string name);
	void set_var_used(string name, bool used);
	void set_var_type(string name, Type type);

	
	/****Gestion de la fonction du CFG *****/
		
	fonction *getFonction();

	//return called
	bool get_returnCalled();
	void set_returnCalled(bool val);

	//setters
	void setFonction(fonction *fonction);

	void warningReturnVoid(int linectr);

	
	
 protected:
	symbolTable* symboleTable;
	int nextFreeSymbolIndex; /**< to allocate new symbols in the symbol table */
	
	fonction *function;


	bool returnCalled = false; //savoir si un return a été fait au milieu du programme
	
	vector <BasicBlock*> bbs; /**< all the basic blocks of this CFG*/
	
};


#endif