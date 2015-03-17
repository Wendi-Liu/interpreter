#include "GotoStatement.h"
#include <iostream>

using namespace std;

GotoStatement::GotoStatement(int value)
:m_value(value)
{}

void GotoStatement::execute(ProgramState* state, std::ostream &outf)
{
	state->changeCtr(m_value, outf);
}