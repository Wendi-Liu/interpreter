#include "GosubStatement.h"
#include <iostream>

using namespace std;

GosubStatement::GosubStatement(int value)
:m_value(value)
{}

void GosubStatement::execute(ProgramState* state, std::ostream &outf)
{
	state->getStack().push(state->getCtr());
	state->changeCtr(m_value, outf);
}