#include "Linux.h"
#include <iostream>

using std::cout;

Linux::Linux()
{
    horas=0;
}

Linux::~Linux()
{
}
void Linux::uptime()
{
    cout<<"Tempo de atividade da maquina:"<<horas<< '\n';   
    
}

