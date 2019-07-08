#include "Fat32.h"
#include <string.h>
#include <iostream>
#include<stdlib.h>
using std::string;

Fat32::Fat32(const char* novoNomeDoSistema,int novoMaxCaractereNome,int novaCapacidadeDeArmazenamento,int tamanhoMaximoDoArquivo)
:SistemaDeArquivos(novoNomeDoSistema,novoMaxCaractereNome,novaCapacidadeDeArmazenamento)
{
     this->tamanhoMaximoDoArquivo = tamanhoMaximoDoArquivo;
}

Fat32::Fat32(const Fat32 &copia)
:SistemaDeArquivos(static_cast<SistemaDeArquivos>(copia) )
{
    this->tamanhoMaximoDoArquivo = copia.tamanhoMaximoDoArquivo;
}


//sobrecarga de operadores
ostream &operator<<( ostream &output, const Fat32 &copia) 
{
    output<<static_cast<SistemaDeArquivos>( copia )<<'\n';
    return output;
}


const Fat32 &Fat32::Fat32::operator= (const Fat32 &copia)
{
    if(this!=&copia)
    {
        *static_cast< SistemaDeArquivos * >( this ) = static_cast< SistemaDeArquivos >( copia );
        
       this->tamanhoMaximoDoArquivo = copia.tamanhoMaximoDoArquivo;
    }
    return *this;
}


bool Fat32::operator==(const Fat32 &right)const
{
    if(this!=&right)
        
        if(static_cast<SistemaDeArquivos>(*this) != static_cast<SistemaDeArquivos>(right)){       
            return false;
        }else{
            return true;
        }
        
}

bool Fat32::operator!=(const Fat32 &right)const
 {
    return! (*this==right);
 }

Fat32::~Fat32()
{
}

