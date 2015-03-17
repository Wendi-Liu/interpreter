// PrintStatement.cpp:
#include "PrintStatement.h"

PrintStatement::PrintStatement(char variableName)
	: m_variableName( variableName )
{}


void PrintStatement::execute(ProgramState * state, std::ostream &outf)
{
	int variable;
	variable = state->getVariable(m_variableName);
	state->incrementCtr();
	outf << variable<< std::endl;
}


