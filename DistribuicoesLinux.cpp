#include "DistribuicoesLinux.h"
#include <string>
#include <iostream>
using std::string;

DistribuicoesLinux::DistribuicoesLinux()
{
    nomesDistribuicoesLinux=0;
    sizenomesDistribuicoesLinux=0;
}

DistribuicoesLinux::DistribuicoesLinux(const string nomesDistri[], int SIZEDIST )
{
    nomesDistribuicoesLinux=0;
    sizenomesDistribuicoesLinux=0;
    setDistribuicoesLinux(nomesDistri,SIZEDIST);
}
    
DistribuicoesLinux::DistribuicoesLinux(const DistribuicoesLinux &p)
{
    int j=0;
    this->nomesDistribuicoesLinux[j]=p.nomesDistribuicoesLinux[j];
}

//----------------------------------FIM CONSTRUTORES----------------------------------------  
void DistribuicoesLinux::setDistribuicoesLinux(const string nomesDistri[], int SIZEDIST)
{
    if(nomesDistribuicoesLinux!=0)
    {
        delete [] nomesDistribuicoesLinux;
        nomesDistribuicoesLinux=0;
    }
    
    sizenomesDistribuicoesLinux=SIZEDIST;
    nomesDistribuicoesLinux = new string [sizenomesDistribuicoesLinux];
    for(int i=0;i<sizenomesDistribuicoesLinux;i++)
        nomesDistribuicoesLinux[i] = nomesDistri[i];
}


void DistribuicoesLinux::infoDistribuicoes() const
{
    cout<<"Distribuicoes: \n";
    for(int i=0;i<sizenomesDistribuicoesLinux;i++)
        cout<<nomesDistribuicoesLinux[i]<<"\n";
    
}


//FUNÇÃO PONTEIRO DINÂMICO
void DistribuicoesLinux::adicionaDistribuicao(const string &novaDistribuicao)
{
    string *aux = new string[sizenomesDistribuicoesLinux];
       
    if( nomesDistribuicoesLinux != 0 )
    {
        for(int i=0;i<sizenomesDistribuicoesLinux;i++)
            aux[i]=nomesDistribuicoesLinux[i];
           
        delete [] nomesDistribuicoesLinux;
           
        nomesDistribuicoesLinux = new string [++sizenomesDistribuicoesLinux];
           
        for(int i = 0; i<sizenomesDistribuicoesLinux-1; i++)
        
            nomesDistribuicoesLinux[ i ] = aux[i];
            nomesDistribuicoesLinux[sizenomesDistribuicoesLinux - 1] = novaDistribuicao;
             
            
        delete [] aux;
    }
       
}


void DistribuicoesLinux::exibe()const
{
    cout<<"vetor: \n";
    for(int i=0;i<sizenomesDistribuicoesLinux;i++)
        cout<<nomesDistribuicoesLinux[i]<<"\n";
}

//FIM FUNÇÃO PONTEIRO DINÂMICO
    

/*void DistribuicoesLinux::alocar(int quntUsers)
{
    if( nomesUsuarios == 0 ){
        if( quntUsers > 0 )
        {
            nomesUsuarios = new string [ quntUsers ];
            quantUsuarios = quntUsers;
        }
            
            for(int i = 0; i < quantUsuarios; i++)
                nomesUsuarios[ i ] = "";
    } 
}
    
void DistribuicoesLinux::desalocar( )
{
    if( nomesUsuarios != 0 )
        delete [ ] nomesUsuarios;
}*/


DistribuicoesLinux::~DistribuicoesLinux()
{
    
}

