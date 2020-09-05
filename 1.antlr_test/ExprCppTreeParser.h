/** \file
 *  This C header file was generated by $ANTLR version 3.4
 *
 *     -  From the grammar source file : ExprCppTree.g
 *     -                            On : 2020-08-27 10:31:25
 *     -                for the parser : ExprCppTreeParserParser
 *
 * Editing it, at least manually, is not wise.
 *
 * C language generator and runtime by Jim Idle, jimi|hereisanat|idle|dotgoeshere|ws.
 *
 *
 * The parser 
ExprCppTreeParser

has the callable functions (rules) shown below,
 * which will invoke the code for the associated rule in the source grammar
 * assuming that the input stream is pointing to a token/text stream that could begin
 * this rule.
 *
 * For instance if you call the first (topmost) rule in a parser grammar, you will
 * get the results of a full parse, but calling a rule half way through the grammar will
 * allow you to pass part of a full token stream to the parser, such as for syntax checking
 * in editors and so on.
 *
 * The parser entry points are called indirectly (by function pointer to function) via
 * a parser context typedef pExprCppTreeParser, which is returned from a call to ExprCppTreeParserNew().
 *
 * The methods in pExprCppTreeParser are  as follows:
 *
 *  - 
 ExprCppTreeParser_expr_return
      pExprCppTreeParser->expr(pExprCppTreeParser)
 *  - 
 ExprCppTreeParser_multExpr_return
      pExprCppTreeParser->multExpr(pExprCppTreeParser)
 *  - 
 ExprCppTreeParser_atom_return
      pExprCppTreeParser->atom(pExprCppTreeParser)
 *  - 
 ExprCppTreeParser_defid_sub_return
      pExprCppTreeParser->defid_sub(pExprCppTreeParser)
 *  - 
 ExprCppTreeParser_defid_return
      pExprCppTreeParser->defid(pExprCppTreeParser)
 *  - 
 ExprCppTreeParser_block_return
      pExprCppTreeParser->block(pExprCppTreeParser)
 *  - 
 ExprCppTreeParser_block_stmt_return
      pExprCppTreeParser->block_stmt(pExprCppTreeParser)
 *  - 
 ExprCppTreeParser_stmt_return
      pExprCppTreeParser->stmt(pExprCppTreeParser)
 *  - 
 ExprCppTreeParser_prog_return
      pExprCppTreeParser->prog(pExprCppTreeParser)
 *
 * The return type for any particular rule is of course determined by the source
 * grammar file.
 */
// [The "BSD license"]
// Copyright (c) 2005-2009 Jim Idle, Temporal Wave LLC
// http://www.temporal-wave.com
// http://www.linkedin.com/in/jimidle
//
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions
// are met:
// 1. Redistributions of source code must retain the above copyright
//    notice, this list of conditions and the following disclaimer.
// 2. Redistributions in binary form must reproduce the above copyright
//    notice, this list of conditions and the following disclaimer in the
//    documentation and/or other materials provided with the distribution.
// 3. The name of the author may not be used to endorse or promote products
//    derived from this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
// IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
// OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
// IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
// INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
// NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
// THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
// THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

#ifndef	_ExprCppTreeParser_H
#define _ExprCppTreeParser_H
/* =============================================================================
 * Standard antlr3 C runtime definitions
 */
#include    <antlr3.h>

/* End of standard antlr 3 runtime definitions
 * =============================================================================
 */

#ifdef __cplusplus
extern "C" {
#endif

// Forward declare the context typedef so that we can use it before it is
// properly defined. Delegators and delegates (from import statements) are
// interdependent and their context structures contain pointers to each other
// C only allows such things to be declared if you pre-declare the typedef.
//
typedef struct ExprCppTreeParser_Ctx_struct ExprCppTreeParser, * pExprCppTreeParser;



    #include <assert.h>


#ifdef	ANTLR3_WINDOWS
// Disable: Unreferenced parameter,							- Rules with parameters that are not used
//          constant conditional,							- ANTLR realizes that a prediction is always true (synpred usually)
//          initialized but unused variable					- tree rewrite variables declared but not needed
//          Unreferenced local variable						- lexer rule declares but does not always use _type
//          potentially unitialized variable used			- retval always returned from a rule
//			unreferenced local function has been removed	- susually getTokenNames or freeScope, they can go without warnigns
//
// These are only really displayed at warning level /W4 but that is the code ideal I am aiming at
// and the codegen must generate some of these warnings by necessity, apart from 4100, which is
// usually generated when a parser rule is given a parameter that it does not use. Mostly though
// this is a matter of orthogonality hence I disable that one.
//
#pragma warning( disable : 4100 )
#pragma warning( disable : 4101 )
#pragma warning( disable : 4127 )
#pragma warning( disable : 4189 )
#pragma warning( disable : 4505 )
#pragma warning( disable : 4701 )
#endif
typedef struct ExprCppTreeParser_expr_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    ExprCppTreeParser_expr_return;



typedef struct ExprCppTreeParser_multExpr_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    ExprCppTreeParser_multExpr_return;



typedef struct ExprCppTreeParser_atom_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    ExprCppTreeParser_atom_return;



typedef struct ExprCppTreeParser_defid_sub_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    ExprCppTreeParser_defid_sub_return;



typedef struct ExprCppTreeParser_defid_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    ExprCppTreeParser_defid_return;



typedef struct ExprCppTreeParser_block_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    ExprCppTreeParser_block_return;



typedef struct ExprCppTreeParser_block_stmt_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    ExprCppTreeParser_block_stmt_return;



typedef struct ExprCppTreeParser_stmt_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    ExprCppTreeParser_stmt_return;



typedef struct ExprCppTreeParser_prog_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    ExprCppTreeParser_prog_return;




/** Context tracking structure for 
ExprCppTreeParser

 */
struct ExprCppTreeParser_Ctx_struct
{
    /** Built in ANTLR3 context tracker contains all the generic elements
     *  required for context tracking.
     */
    pANTLR3_PARSER   pParser;

     ExprCppTreeParser_expr_return
     (*expr)	(struct ExprCppTreeParser_Ctx_struct * ctx);

     ExprCppTreeParser_multExpr_return
     (*multExpr)	(struct ExprCppTreeParser_Ctx_struct * ctx);

     ExprCppTreeParser_atom_return
     (*atom)	(struct ExprCppTreeParser_Ctx_struct * ctx);

     ExprCppTreeParser_defid_sub_return
     (*defid_sub)	(struct ExprCppTreeParser_Ctx_struct * ctx);

     ExprCppTreeParser_defid_return
     (*defid)	(struct ExprCppTreeParser_Ctx_struct * ctx);

     ExprCppTreeParser_block_return
     (*block)	(struct ExprCppTreeParser_Ctx_struct * ctx);

     ExprCppTreeParser_block_stmt_return
     (*block_stmt)	(struct ExprCppTreeParser_Ctx_struct * ctx);

     ExprCppTreeParser_stmt_return
     (*stmt)	(struct ExprCppTreeParser_Ctx_struct * ctx);

     ExprCppTreeParser_prog_return
     (*prog)	(struct ExprCppTreeParser_Ctx_struct * ctx);
    // Delegated rules

    const char * (*getGrammarFileName)();
    void            (*reset)  (struct ExprCppTreeParser_Ctx_struct * ctx);
    void	    (*free)   (struct ExprCppTreeParser_Ctx_struct * ctx);
/* @headerFile.members() */
pANTLR3_BASE_TREE_ADAPTOR	adaptor;
pANTLR3_VECTOR_FACTORY		vectors;
/* End @headerFile.members() */
};

// Function protoypes for the constructor functions that external translation units
// such as delegators and delegates may wish to call.
//
ANTLR3_API pExprCppTreeParser ExprCppTreeParserNew         (
pANTLR3_COMMON_TOKEN_STREAM
 instream);
ANTLR3_API pExprCppTreeParser ExprCppTreeParserNewSSD      (
pANTLR3_COMMON_TOKEN_STREAM
 instream, pANTLR3_RECOGNIZER_SHARED_STATE state);

/** Symbolic definitions of all the tokens that the 
parser
 will work with.
 * \{
 *
 * Antlr will define EOF, but we can't use that as it it is too common in
 * in C header files and that would be confusing. There is no way to filter this out at the moment
 * so we just undef it here for now. That isn't the value we get back from C recognizers
 * anyway. We are looking for ANTLR3_TOKEN_EOF.
 */
#ifdef	EOF
#undef	EOF
#endif
#ifdef	Tokens
#undef	Tokens
#endif
#define EOF      -1
#define T__16      16
#define T__17      17
#define T__18      18
#define T__19      19
#define T__20      20
#define T__21      21
#define ASSIGN      4
#define BLOCK      5
#define DEF      6
#define DIV      7
#define ID      8
#define INT      9
#define MINUS      10
#define MOD      11
#define NEWLINE      12
#define PLUS      13
#define TIMES      14
#define WS      15
#ifdef	EOF
#undef	EOF
#define	EOF	ANTLR3_TOKEN_EOF
#endif

#ifndef TOKENSOURCE
#define TOKENSOURCE(lxr) lxr->pLexer->rec->state->tokSource
#endif

/* End of token definitions for ExprCppTreeParser
 * =============================================================================
 */
/** } */

#ifdef __cplusplus
}
#endif

#endif

/* END - Note:Keep extra line feed to satisfy UNIX systems */
