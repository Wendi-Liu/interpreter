#include "PrintStatement.h"
#include <iostream>

using namespace std;

ProgramState::ProgramState(int numLines) :m_numLines(numLines) 
{
	for (int i = 0; i <= 25; i++)
	{
		variable[i] = 0;
	}
	counter = 1;
}

void ProgramState::changeVariable(char variableName, int value)
{
	int suffix = variableName - 'A';
	variable[suffix] = value;
}

int ProgramState::getVariable(char variableName) const
{
	int suffix = variableName - 'A';
	return variable[suffix];
}

int ProgramState::getCtr() const
{
	return counter;
}

void ProgramState::incrementCtr()
{
	counter++;
}

void ProgramState::changeCtr(int targetLine, std::ostream& outf)
{
	jumpValidation(targetLine, outf);
	counter = targetLine;
}


void ProgramState::jumpValidation(int targetLine, std::ostream& outf)
{
	if (targetLine > m_numLines || targetLine < 1)
	{
		outf << "Illegal jump instruction" <<endl;
		exit(1);
	}
}

Stack<int>& ProgramState::getStack()
{
	return s;
}

void ProgramState::endProgram()
{
	counter = 0;
}