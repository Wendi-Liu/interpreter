#ifndef IF_STATEMENT_INCLUDED
#define IF_STATEMENT_INCLUDED
#include "Statement.h"
#include "ProgramState.h"

class IfStatement :public Statement
{
private:
	char m_variableName;
	std::string m_rltOp;
	int m_value;
	int m_value2;
	int variable;

	bool judgeStatement();

public:
	IfStatement(char variableName, std::string rltOp, int value, int value2);

	virtual void execute(ProgramState* state, std::ostream &outf);
};


#endif