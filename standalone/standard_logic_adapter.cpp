#include <iostream>
#include <string>
#include <vector>



#include "standard_logic_node.h"
#include "standard_logic_tree.h"
#include "parser/lexer.h"
#include "parser/syntax_parser.h"
#include "logical_grammar.h"


int main(int argc, char **argv) {
	std::string line;
	std::getline(std::cin, line);

	Lexer lexer;
	LogicalGrammar grammar;
	SLRSyntaxParser parser(&grammar);
	std::vector<TokenPtr> tokens;


	lexer.Analyse(line, tokens);
	parser.Parse(tokens);
	
	StandardLogicTree tree(parser.Root());

	std::cout << tree << std::endl;
}