#include "EXT3.h"

EXT3::EXT3(const char* novoNomeDoSistema,int novoMaxCaractereNome,int novaCapacidadeDeArmazenamento,string journalingBlockDevice)
:SistemaDeArquivos(novoNomeDoSistema,novoMaxCaractereNome,novaCapacidadeDeArmazenamento)
{
    this->journalingBlockDevice = journalingBlockDevice;
}

EXT3::EXT3(const EXT3 &copia)
:SistemaDeArquivos( static_cast<SistemaDeArquivos>(copia) )
{
    this->journalingBlockDevice=copia.journalingBlockDevice;
}


//sobrecarga de operadores
ostream &operator<<( ostream &output, const EXT3 &copia) 
{
    output<<static_cast<SistemaDeArquivos>( copia )<<'\n';
    return output;
}


const EXT3 &EXT3::EXT3::operator= (const EXT3 &copia)
{
    if(this!=&copia)
    {
        *static_cast< SistemaDeArquivos * >( this ) = static_cast< SistemaDeArquivos >( copia );
        
        this->journalingBlockDevice=copia.journalingBlockDevice;
    }
    return *this;
}


bool EXT3::operator==(const EXT3 &right)const
{
    if(this!=&right)
        
        if(static_cast<SistemaDeArquivos>(*this) != static_cast<SistemaDeArquivos>(right)){       
            return false;
        }else{
            return true;
        }
        
}

bool EXT3::operator!=(const EXT3 &right)const
 {
    return! (*this==right);
 }

EXT3::~EXT3()
{
}

