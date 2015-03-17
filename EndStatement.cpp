
#include "EndStatement.h"
using namespace std;


void EndStatement::execute(ProgramState * state, ostream &outf)
{

	state->endProgram();

}
