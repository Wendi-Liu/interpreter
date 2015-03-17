//A if statement looks like this:
//		IF A < 4 THEN 5
#include "IfStatement.h"
#include <iostream>

using namespace std;

IfStatement::IfStatement(char variableName, string rltOp, int value, int value2)
:m_variableName(variableName), m_rltOp(rltOp), m_value(value), m_value2(value2)
{}

void IfStatement::execute(ProgramState* state, std::ostream &outf)
{
	variable = state->getVariable(m_variableName);
	if (judgeStatement())
		state->changeCtr(m_value2, outf);
	else
		state->incrementCtr();
}


bool IfStatement::judgeStatement()
{
	if (m_rltOp == "<")
		return (variable < m_value);
	if (m_rltOp == "<=")
		return (variable <= m_value);
	if (m_rltOp == ">")
		return (variable > m_value);
	if (m_rltOp == ">=")
		return (variable >= m_value);
	if (m_rltOp == "=")
		return (variable == m_value);
	if (m_rltOp == "<>")
		return (variable != m_value);
	
	return false;
}