#include "Linux.h"
#include <iostream>

using std::cout;

Linux::Linux( int horas_ )
{    
        
    setHoras( horas_ );
    
}

Linux::~Linux()
{
}

void Linux::upTime()
{
    cout<<"Tempo de atividade da maquina:"<<horas<< '\n';   
    
}

void Linux::setHoras( int horas_ )
{
    if (horas_ > 0 )
        horas = horas_;
    else
        horas = 0;   
}

int Linux::getHoras()
{
    return Horas;
}
    

