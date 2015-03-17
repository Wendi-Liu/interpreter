
#ifndef ADD_STATEMENT_INCLUDED
#define ADD_STATEMENT_INCLUDED
#include "Statement.h"
#include "ProgramState.h"

class AddStatement :public Statement
{
private:
	char m_variableName;
	int m_value;

public:
	AddStatement(char variableName, int value);

	virtual void execute(ProgramState* state, std::ostream &outf);
};


#endif