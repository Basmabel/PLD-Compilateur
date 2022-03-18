// Generated from ifcc.g4 by ANTLR 4.9.2
import org.antlr.v4.runtime.tree.ParseTreeListener;

/**
 * This interface defines a complete listener for a parse tree produced by
 * {@link ifccParser}.
 */
public interface ifccListener extends ParseTreeListener {
	/**
	 * Enter a parse tree produced by {@link ifccParser#axiom}.
	 * @param ctx the parse tree
	 */
	void enterAxiom(ifccParser.AxiomContext ctx);
	/**
	 * Exit a parse tree produced by {@link ifccParser#axiom}.
	 * @param ctx the parse tree
	 */
	void exitAxiom(ifccParser.AxiomContext ctx);
	/**
	 * Enter a parse tree produced by {@link ifccParser#prog}.
	 * @param ctx the parse tree
	 */
	void enterProg(ifccParser.ProgContext ctx);
	/**
	 * Exit a parse tree produced by {@link ifccParser#prog}.
	 * @param ctx the parse tree
	 */
	void exitProg(ifccParser.ProgContext ctx);
	/**
	 * Enter a parse tree produced by {@link ifccParser#instr}.
	 * @param ctx the parse tree
	 */
	void enterInstr(ifccParser.InstrContext ctx);
	/**
	 * Exit a parse tree produced by {@link ifccParser#instr}.
	 * @param ctx the parse tree
	 */
	void exitInstr(ifccParser.InstrContext ctx);
	/**
	 * Enter a parse tree produced by {@link ifccParser#declaration}.
	 * @param ctx the parse tree
	 */
	void enterDeclaration(ifccParser.DeclarationContext ctx);
	/**
	 * Exit a parse tree produced by {@link ifccParser#declaration}.
	 * @param ctx the parse tree
	 */
	void exitDeclaration(ifccParser.DeclarationContext ctx);
	/**
	 * Enter a parse tree produced by {@link ifccParser#variables}.
	 * @param ctx the parse tree
	 */
	void enterVariables(ifccParser.VariablesContext ctx);
	/**
	 * Exit a parse tree produced by {@link ifccParser#variables}.
	 * @param ctx the parse tree
	 */
	void exitVariables(ifccParser.VariablesContext ctx);
	/**
	 * Enter a parse tree produced by {@link ifccParser#affectation}.
	 * @param ctx the parse tree
	 */
	void enterAffectation(ifccParser.AffectationContext ctx);
	/**
	 * Exit a parse tree produced by {@link ifccParser#affectation}.
	 * @param ctx the parse tree
	 */
	void exitAffectation(ifccParser.AffectationContext ctx);
	/**
	 * Enter a parse tree produced by {@link ifccParser#return_stmt}.
	 * @param ctx the parse tree
	 */
	void enterReturn_stmt(ifccParser.Return_stmtContext ctx);
	/**
	 * Exit a parse tree produced by {@link ifccParser#return_stmt}.
	 * @param ctx the parse tree
	 */
	void exitReturn_stmt(ifccParser.Return_stmtContext ctx);
	/**
	 * Enter a parse tree produced by {@link ifccParser#value}.
	 * @param ctx the parse tree
	 */
	void enterValue(ifccParser.ValueContext ctx);
	/**
	 * Exit a parse tree produced by {@link ifccParser#value}.
	 * @param ctx the parse tree
	 */
	void exitValue(ifccParser.ValueContext ctx);
}