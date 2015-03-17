
#ifndef SUB_STATEMENT_INCLUDED
#define SUB_STATEMENT_INCLUDED
#include "Statement.h"
#include "ProgramState.h"

class SubStatement :public Statement
{
private:
	char m_variableName;
	int m_value;

public:
	SubStatement(char variableName, int value);

	virtual void execute(ProgramState* state, std::ostream &outf);
};


#endif