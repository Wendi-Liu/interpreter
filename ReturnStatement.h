#ifndef RETURN_STATEMENT_INCLUDED
#define RETURN_STATEMENT_INCLUDED
#include "Statement.h"
#include "ProgramState.h"

class ReturnStatement :public Statement
{

public:

	virtual void execute(ProgramState* state, std::ostream &outf);
};


#endif