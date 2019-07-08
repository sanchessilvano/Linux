#include "NTFS.h"
#include <string.h>
#include <iostream>
#include<stdlib.h>
using std::string;

NTFS::NTFS(const char* novoNomeDoSistema,int novoMaxCaractereNome,int novaCapacidadeDeArmazenamento,string senhaDoArquivo)
:SistemaDeArquivos(novoNomeDoSistema,novoMaxCaractereNome,novaCapacidadeDeArmazenamento)
{
    this->senhaDoArquivo = senhaDoArquivo;
}

NTFS::NTFS(const NTFS &copia)
:SistemaDeArquivos(static_cast<SistemaDeArquivos> (copia) )
{
      senhaDoArquivo = copia.senhaDoArquivo;         
}


//sobrecarga de operadores
ostream &operator<<( ostream &output, const NTFS &copia) 
{
    output<<static_cast<SistemaDeArquivos>( copia )<<'\n';
    return output;
}


const NTFS &NTFS::NTFS::operator= (const NTFS &copia)
{
    if(this!=&copia)
    {
        *static_cast< SistemaDeArquivos * >( this ) = static_cast< SistemaDeArquivos >( copia );
        
        senhaDoArquivo = copia.senhaDoArquivo;
    }
    return *this;
}


bool NTFS::operator==(const NTFS &right)const
{
    if(this!=&right)
        
        if(static_cast<SistemaDeArquivos>(*this) != static_cast<SistemaDeArquivos>(right)){       
            return false;
        }else{
            return true;
        }
        
}

bool NTFS::operator!=(const NTFS &right)const
 {
    return! (*this==right);
 }

NTFS::~NTFS()
{
}

