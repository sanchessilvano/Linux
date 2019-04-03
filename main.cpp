#include <stdio.h>
#include <iostream>
#include "Linux.h"

using std::cout;
int main(int argc, char **argv)
{   
    Linux tempoDeAtividade("Tempo de atividade do sistema");
    
    cout<< " Contador do tempo de atividade do sistema " << tempoDeAtividade.getHoras()
    <<end1;
	//<<"hello world\n";
	return 0;
}
