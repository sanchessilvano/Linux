#include "DistribuicoesLinux.h"
#include <string.h>
#include <iostream>
using std::string;

DistribuicoesLinux::DistribuicoesLinux()
{
    nomesDistribuicoesLinux=0;
    sizenomesDistribuicoesLinux=0;
    string novaDistribuicao="";
}

DistribuicoesLinux::DistribuicoesLinux( string nomesDistri[], int SIZEDIST )
{
    nomesDistribuicoesLinux=0;
    sizenomesDistribuicoesLinux=0;
    setDistribuicoesLinux(nomesDistri,SIZEDIST);
    string novaDistribuicao="";
}
    
DistribuicoesLinux::DistribuicoesLinux(const DistribuicoesLinux &p)
{
    this->sizenomesDistribuicoesLinux=p.sizenomesDistribuicoesLinux;
    
    nomesDistribuicoesLinux=new string[this->sizenomesDistribuicoesLinux];
    for(int i=0;i<this->sizenomesDistribuicoesLinux;i++)
        this->nomesDistribuicoesLinux[i]=p.nomesDistribuicoesLinux[i];
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


bool DistribuicoesLinux::operator==( const DistribuicoesLinux &right)const
{
    if( sizenomesDistribuicoesLinux != right.sizenomesDistribuicoesLinux)
        return false;
    for(int i=0; i< sizenomesDistribuicoesLinux; i++)
        if( nomesDistribuicoesLinux[i] != right.nomesDistribuicoesLinux[i])
            return false;
    return true;
}


const DistribuicoesLinux &DistribuicoesLinux::operator=(const DistribuicoesLinux &right)
{
    if(&right != this)
    {
        //
        //
        if( sizenomesDistribuicoesLinux != right.sizenomesDistribuicoesLinux )
        {
            delete [] nomesDistribuicoesLinux;
            sizenomesDistribuicoesLinux = right.sizenomesDistribuicoesLinux;
            nomesDistribuicoesLinux = new string[sizenomesDistribuicoesLinux];
        }
    
        for(int i=0; i<sizenomesDistribuicoesLinux; i++)
            nomesDistribuicoesLinux[i] = right.nomesDistribuicoesLinux[i];
    }
     return *this;   
}

string &DistribuicoesLinux::operator[] (int subscript)
{
    if(subscript< 0 || subscript>= sizenomesDistribuicoesLinux)
    {
        cerr<<"\nError: subscript " <<subscript
            <<"out of range"<<endl;
        exit(1);
    }
    return nomesDistribuicoesLinux[subscript];
}



string DistribuicoesLinux::operator[] (int subscript)const
{
    if(subscript< 0 || subscript>= sizenomesDistribuicoesLinux)
    {
        cerr<<"\nError: subscript " <<subscript
            <<"out of range CONST DISTRIBUICOES"<<endl;
        exit(1);
    }
    return nomesDistribuicoesLinux[subscript];
}


bool DistribuicoesLinux::operator<(const DistribuicoesLinux &right)
{
    int i;
    return nomesDistribuicoesLinux[i]<right.nomesDistribuicoesLinux[i];
} 




void DistribuicoesLinux::infoDistribuicoes() const
{
    cout<<"Distribuicoes: \n";
    for(int i=0;i<sizenomesDistribuicoesLinux;i++)
        cout<<nomesDistribuicoesLinux[i]<<"\n";
    
}


//FUNÇÃO PONTEIRO DINÂMICO
void DistribuicoesLinux::adicionaDistribuicao(string &novaDistribuicao)
{
    int i=0;
    string *aux = new string[sizenomesDistribuicoesLinux];
       
    //if( nomesDistribuicoesLinux != 0 )
    //{
        for(i=0;i<sizenomesDistribuicoesLinux;i++)
            aux[i]=nomesDistribuicoesLinux[i];
        
        delete [] nomesDistribuicoesLinux;
          
        nomesDistribuicoesLinux = new string [++sizenomesDistribuicoesLinux];
         
        for(int i = 0; i<sizenomesDistribuicoesLinux-1; i++)
        {
            nomesDistribuicoesLinux[ i ] = aux[i];
            nomesDistribuicoesLinux[sizenomesDistribuicoesLinux - 1] = novaDistribuicao;
        }
        delete [] aux;
        
}

void DistribuicoesLinux::exibe()const
{
    int i=0;
    cout<<"vetor com acrescimo de elementos: \n";
    for(i=0;i<sizenomesDistribuicoesLinux;i++)
    {
        cout<<nomesDistribuicoesLinux[i]<<"\n";   
    }
        
}

ostream &operator<<( ostream &output, const DistribuicoesLinux &p)
{
    cout<<"Estado da copia do vetor de idstribuicoes Linux apos insercoes VIA SOBRECARGA DO OPERADOR <<"<<endl;
    for(int i=0;i<p.sizenomesDistribuicoesLinux;i++)
    output<<p.nomesDistribuicoesLinux[i]<<endl;
    
    return output;
}

//FIM FUNÇÃO PONTEIRO DINÂMICO
    

void DistribuicoesLinux::alocar(int quantDist)
{
    if( nomesDistribuicoesLinux == 0 )
    {
        if( quantDist> 0 )
        {
            nomesDistribuicoesLinux= new string [ quantDist ];
            sizenomesDistribuicoesLinux = quantDist;
        }
            
            for(int i = 0; i < sizenomesDistribuicoesLinux; i++)
                nomesDistribuicoesLinux[ i ] = "";
    } 
}
  

  
void DistribuicoesLinux::desalocar( )
{
    if( nomesDistribuicoesLinux != 0 )
        delete [ ] nomesDistribuicoesLinux;
}


DistribuicoesLinux::~DistribuicoesLinux()
{
    
    
}

