#include "ReturnStatement.h"
#include <iostream>
using namespace std;


void ReturnStatement::execute(ProgramState* state, std::ostream &outf)
{
	if (state->getStack().empty())
	{
		outf << "Illegal return statement" << endl;
		exit(1);
	}

	int value = state->getStack().top();
	state->getStack().pop();
	state->changeCtr(value+1, outf);

}