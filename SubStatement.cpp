// An Sub statement looks like this:
//				Sub A 5
#include "SubStatement.h"
using namespace std;


SubStatement::SubStatement(char variableName, int value)
:m_variableName(variableName), m_value(value)
{}


void SubStatement::execute(ProgramState * state, ostream &outf)
{
	int variable = state->getVariable(m_variableName);
	state->changeVariable(m_variableName, variable - m_value);
	state->incrementCtr();
}
