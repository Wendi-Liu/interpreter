// An Div statement looks like this:
//				DIV A 5
#include "DivStatement.h"
#include <iostream>
using namespace std;


DivStatement::DivStatement(char variableName, int value)
:m_variableName(variableName), m_value(value)
{}


void DivStatement::execute(ProgramState * state, ostream &outf)
{
	if (m_value == 0)
	{
		outf << "Divide by zero exception." << endl;
		exit(1);
	}
	
	int variable = state->getVariable(m_variableName);
	state->changeVariable(m_variableName, (int) (variable / m_value));
	state->incrementCtr();

}
