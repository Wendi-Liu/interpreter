
#ifndef MULT_STATEMENT_INCLUDED
#define MULT_STATEMENT_INCLUDED
#include "Statement.h"
#include "ProgramState.h"

class MultStatement :public Statement
{
private:
	char m_variableName;
	int m_value;

public:
	MultStatement(char variableName, int value);

	virtual void execute(ProgramState* state, std::ostream &outf);
};


#endif