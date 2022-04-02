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
	 * Enter a parse tree produced by the {@code declarationInstr}
	 * labeled alternative in {@link ifccParser#instr}.
	 * @param ctx the parse tree
	 */
	void enterDeclarationInstr(ifccParser.DeclarationInstrContext ctx);
	/**
	 * Exit a parse tree produced by the {@code declarationInstr}
	 * labeled alternative in {@link ifccParser#instr}.
	 * @param ctx the parse tree
	 */
	void exitDeclarationInstr(ifccParser.DeclarationInstrContext ctx);
	/**
	 * Enter a parse tree produced by the {@code affectationInstr}
	 * labeled alternative in {@link ifccParser#instr}.
	 * @param ctx the parse tree
	 */
	void enterAffectationInstr(ifccParser.AffectationInstrContext ctx);
	/**
	 * Exit a parse tree produced by the {@code affectationInstr}
	 * labeled alternative in {@link ifccParser#instr}.
	 * @param ctx the parse tree
	 */
	void exitAffectationInstr(ifccParser.AffectationInstrContext ctx);
	/**
	 * Enter a parse tree produced by the {@code return_stmtInstr}
	 * labeled alternative in {@link ifccParser#instr}.
	 * @param ctx the parse tree
	 */
	void enterReturn_stmtInstr(ifccParser.Return_stmtInstrContext ctx);
	/**
	 * Exit a parse tree produced by the {@code return_stmtInstr}
	 * labeled alternative in {@link ifccParser#instr}.
	 * @param ctx the parse tree
	 */
	void exitReturn_stmtInstr(ifccParser.Return_stmtInstrContext ctx);
	/**
	 * Enter a parse tree produced by the {@code if_then_elseInstr}
	 * labeled alternative in {@link ifccParser#instr}.
	 * @param ctx the parse tree
	 */
	void enterIf_then_elseInstr(ifccParser.If_then_elseInstrContext ctx);
	/**
	 * Exit a parse tree produced by the {@code if_then_elseInstr}
	 * labeled alternative in {@link ifccParser#instr}.
	 * @param ctx the parse tree
	 */
	void exitIf_then_elseInstr(ifccParser.If_then_elseInstrContext ctx);
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
	 * Enter a parse tree produced by the {@code par}
	 * labeled alternative in {@link ifccParser#expression}.
	 * @param ctx the parse tree
	 */
	void enterPar(ifccParser.ParContext ctx);
	/**
	 * Exit a parse tree produced by the {@code par}
	 * labeled alternative in {@link ifccParser#expression}.
	 * @param ctx the parse tree
	 */
	void exitPar(ifccParser.ParContext ctx);
	/**
	 * Enter a parse tree produced by the {@code plusminus}
	 * labeled alternative in {@link ifccParser#expression}.
	 * @param ctx the parse tree
	 */
	void enterPlusminus(ifccParser.PlusminusContext ctx);
	/**
	 * Exit a parse tree produced by the {@code plusminus}
	 * labeled alternative in {@link ifccParser#expression}.
	 * @param ctx the parse tree
	 */
	void exitPlusminus(ifccParser.PlusminusContext ctx);
	/**
	 * Enter a parse tree produced by the {@code const}
	 * labeled alternative in {@link ifccParser#expression}.
	 * @param ctx the parse tree
	 */
	void enterConst(ifccParser.ConstContext ctx);
	/**
	 * Exit a parse tree produced by the {@code const}
	 * labeled alternative in {@link ifccParser#expression}.
	 * @param ctx the parse tree
	 */
	void exitConst(ifccParser.ConstContext ctx);
	/**
	 * Enter a parse tree produced by the {@code var}
	 * labeled alternative in {@link ifccParser#expression}.
	 * @param ctx the parse tree
	 */
	void enterVar(ifccParser.VarContext ctx);
	/**
	 * Exit a parse tree produced by the {@code var}
	 * labeled alternative in {@link ifccParser#expression}.
	 * @param ctx the parse tree
	 */
	void exitVar(ifccParser.VarContext ctx);
	/**
	 * Enter a parse tree produced by the {@code multdiv}
	 * labeled alternative in {@link ifccParser#expression}.
	 * @param ctx the parse tree
	 */
	void enterMultdiv(ifccParser.MultdivContext ctx);
	/**
	 * Exit a parse tree produced by the {@code multdiv}
	 * labeled alternative in {@link ifccParser#expression}.
	 * @param ctx the parse tree
	 */
	void exitMultdiv(ifccParser.MultdivContext ctx);
	/**
	 * Enter a parse tree produced by the {@code oppose}
	 * labeled alternative in {@link ifccParser#expression}.
	 * @param ctx the parse tree
	 */
	void enterOppose(ifccParser.OpposeContext ctx);
	/**
	 * Exit a parse tree produced by the {@code oppose}
	 * labeled alternative in {@link ifccParser#expression}.
	 * @param ctx the parse tree
	 */
	void exitOppose(ifccParser.OpposeContext ctx);
	/**
	 * Enter a parse tree produced by the {@code isequal}
	 * labeled alternative in {@link ifccParser#expression}.
	 * @param ctx the parse tree
	 */
	void enterIsequal(ifccParser.IsequalContext ctx);
	/**
	 * Exit a parse tree produced by the {@code isequal}
	 * labeled alternative in {@link ifccParser#expression}.
	 * @param ctx the parse tree
	 */
	void exitIsequal(ifccParser.IsequalContext ctx);
	/**
	 * Enter a parse tree produced by {@link ifccParser#if_then_else}.
	 * @param ctx the parse tree
	 */
	void enterIf_then_else(ifccParser.If_then_elseContext ctx);
	/**
	 * Exit a parse tree produced by {@link ifccParser#if_then_else}.
	 * @param ctx the parse tree
	 */
	void exitIf_then_else(ifccParser.If_then_elseContext ctx);
	/**
	 * Enter a parse tree produced by {@link ifccParser#block}.
	 * @param ctx the parse tree
	 */
	void enterBlock(ifccParser.BlockContext ctx);
	/**
	 * Exit a parse tree produced by {@link ifccParser#block}.
	 * @param ctx the parse tree
	 */
	void exitBlock(ifccParser.BlockContext ctx);
	/**
	 * Enter a parse tree produced by the {@code condition_affectation}
	 * labeled alternative in {@link ifccParser#condition}.
	 * @param ctx the parse tree
	 */
	void enterCondition_affectation(ifccParser.Condition_affectationContext ctx);
	/**
	 * Exit a parse tree produced by the {@code condition_affectation}
	 * labeled alternative in {@link ifccParser#condition}.
	 * @param ctx the parse tree
	 */
	void exitCondition_affectation(ifccParser.Condition_affectationContext ctx);
	/**
	 * Enter a parse tree produced by the {@code condition_expression}
	 * labeled alternative in {@link ifccParser#condition}.
	 * @param ctx the parse tree
	 */
	void enterCondition_expression(ifccParser.Condition_expressionContext ctx);
	/**
	 * Exit a parse tree produced by the {@code condition_expression}
	 * labeled alternative in {@link ifccParser#condition}.
	 * @param ctx the parse tree
	 */
	void exitCondition_expression(ifccParser.Condition_expressionContext ctx);
	/**
	 * Enter a parse tree produced by the {@code condition_comparison}
	 * labeled alternative in {@link ifccParser#condition}.
	 * @param ctx the parse tree
	 */
	void enterCondition_comparison(ifccParser.Condition_comparisonContext ctx);
	/**
	 * Exit a parse tree produced by the {@code condition_comparison}
	 * labeled alternative in {@link ifccParser#condition}.
	 * @param ctx the parse tree
	 */
	void exitCondition_comparison(ifccParser.Condition_comparisonContext ctx);
	/**
	 * Enter a parse tree produced by the {@code comparison_equal}
	 * labeled alternative in {@link ifccParser#comparison}.
	 * @param ctx the parse tree
	 */
	void enterComparison_equal(ifccParser.Comparison_equalContext ctx);
	/**
	 * Exit a parse tree produced by the {@code comparison_equal}
	 * labeled alternative in {@link ifccParser#comparison}.
	 * @param ctx the parse tree
	 */
	void exitComparison_equal(ifccParser.Comparison_equalContext ctx);
	/**
	 * Enter a parse tree produced by the {@code comparison_different}
	 * labeled alternative in {@link ifccParser#comparison}.
	 * @param ctx the parse tree
	 */
	void enterComparison_different(ifccParser.Comparison_differentContext ctx);
	/**
	 * Exit a parse tree produced by the {@code comparison_different}
	 * labeled alternative in {@link ifccParser#comparison}.
	 * @param ctx the parse tree
	 */
	void exitComparison_different(ifccParser.Comparison_differentContext ctx);
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
}