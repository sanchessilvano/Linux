#include <stdio.h>
#include <string>
#include <iostream>
#include "Linux.h"


using std::cout;
using std::string;


int main(int argc, char **argv[])
{   
cout<<"OLAAAAAAAAAAAAA\n";
    Linux tempoDeAtividade("Tempo de atividade do sistema");
    
    cout<< " Contador do tempo de atividade do sistema " << tempoDeAtividade.getHoras()
    <<endl;
	//<<"hello world\n";
    
    Linux maquina1, maquina2 ("Ubuntu",1401);
    maquina2.mensage();
    
    
    cout << " Distribuição: " << maquina2.distribuicao << endl;
    
	return 0;
}
