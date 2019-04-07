
#include "Linux.h"
#include "main.cpp"
#include <iostream>
#include <string>

using std::cout;

Linux::Linux( int horas_ )
{    
        
    setHoras( horas_ );
    
}

int Linux::setHoras( int horas_ )
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

Linux::Linux()
{
    this->distribuicao = "Distribuição não especificada";
    this->build = 0;
}

Linux::Linux(const string  &distribuicao)
{
    this->distribuicao = distribuicao;
    this->build = 0;
}


Linux::Linux(const string  &distribuicao, int build)
{
    this->distribuicao = distribuicao;
    if(build>0)
        this->build = build;
    else
        this->build =0;
}



Linux::~Linux()
{
}

int Linux::upTime()
{
    cout<<"Tempo de atividade da maquina:"<<horas<< '\n';   
    
}

void checaUsuario( const string & );

void checaUsuario( int );

void Linux::checaUsuario (const string &nome)
{
    this->nome = nome;
}

Linux::checaUsuario (int idUsuario)
{
    if (idUsuario>0)
        this->idUsuario = idUsuario;
    else
        this->idUsuario = 0;
}
