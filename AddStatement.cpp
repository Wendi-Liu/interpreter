// An Add statement looks like this:
//				ADD A 5
#include "AddStatement.h"
using namespace std;


AddStatement::AddStatement(char variableName, int value)
	:m_variableName(variableName), m_value(value)
{}


void AddStatement::execute(ProgramState * state, ostream &outf)
{
	int variable = state->getVariable(m_variableName);
	state->changeVariable(m_variableName, variable + m_value);
	state->incrementCtr();
}
