// An Mult statement looks like this:
//				Mult A 5
#include "MultStatement.h"
using namespace std;


MultStatement::MultStatement(char variableName, int value)
:m_variableName(variableName), m_value(value)
{}


void MultStatement::execute(ProgramState * state, ostream &outf)
{
	int variable = state->getVariable(m_variableName);
	state->changeVariable(m_variableName, variable * m_value);
	state->incrementCtr();
}
