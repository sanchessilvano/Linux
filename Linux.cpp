#include "Linux.h"
#include <string.h>
#include <iostream>
using std::string;

//----------------------------------CONSTRUTORES----------------------------------------  
//Construtor padrão
Linux::Linux()
:Distribuicao_Linux(),programas_Do_Repositorio()
{
    this->Data_Da_Criacao="Data nao especificada";
    
    this->setBuild(0);
    
    
    
    
    ptrID=0;
    
}


//CONSTRUTOR INFO
Linux::Linux(const string &nomeDoSistema, int aquiteturaDoSistema)
:Distribuicao_Linux(),programas_Do_Repositorio()
{
    this->nomeDoSistema=nomeDoSistema;
        
    if(aquiteturaDoSistema<=0)
        this->aquiteturaDoSistema = 0;
    else
        this->aquiteturaDoSistema=aquiteturaDoSistema;
        
    
}
//end CONSTRUTOR info


//CONSTRUTOR SOBRECARREGADO 1
Linux::Linux(const string &Data_Da_Criacao)
:Distribuicao_Linux(),programas_Do_Repositorio()
{
    this->Data_Da_Criacao=Data_Da_Criacao;
    
    
        
}

    
//CONSTRUTOR SOBRECARREGADO 2
Linux::Linux(const double &build)
:Distribuicao_Linux(),programas_Do_Repositorio()
{
    if(build<=0)
        this->build=0;
    else
        this->build=build;
        
    
    
}
//FIM CONSTRUTOR SOBRECARREGADO 2
    

//CÓPIA DE CONSTRUTOR:
Linux::Linux(const Linux &p)
:Distribuicao_Linux(p.Distribuicao_Linux),programas_Do_Repositorio()
{
    this->nomeDoSistema=p.nomeDoSistema;

        
    if(aquiteturaDoSistema<=0)
        this->aquiteturaDoSistema = 0;
    else
        this->aquiteturaDoSistema=p.aquiteturaDoSistema;
        
    Distribuicao_Linux= 0;
    
    programas_Do_Repositorio=0;
}
    
    
//CONSTRUTOR COM CONST E STATIC
Linux::Linux(int numeroDeVersoesDoKernel,double versaoAtualDoDoKernelLinnux,string &dataDeCriacaoDoSistema,string COMANDOCHECAIP)
:Distribuicao_Linux(),programas_Do_Repositorio()
{
    numeroDeVersoesDoKernel++;
    
    
}
//CONSTRUTOR COM CONST E STATIC

//CONSTRUTOR DE CÓPIA COM CONST E STATIC
Linux::Linux(const Linux &p,const Linux &q)
:Distribuicao_Linux(),programas_Do_Repositorio()
{
    numeroDeVersoesDoKernel=p.numeroDeVersoesDoKernel;
    
    versaoAtualDoDoKernelLinnux=p.versaoAtualDoDoKernelLinnux;
    
    this->getChecaIP()=q.getChecaIP();
    
    this->getdataDeCriacaoDoSistema()=q.getdataDeCriacaoDoSistema();
    
    
   
}

//----------------------------------FIM CONSTRUTORES----------------------------------------  

//----------------------------------MÉTODOS STATIC---------------------------------------- 
    //FUNÇÕES CONSTRUTOR COM CONST E STATIC
    void Linux::showNumeroDeVersoesDoKernel()
{
    cout<<"Numero de versoes do Kernel Linux e ="<<numeroDeVersoesDoKernel<<endl;
}
    
//----------------------------------FIM MÉTODOS STATIC----------------------------------------


//FUNÇÃO 1
void Linux::setEstado_Do_Sistema(int boot)
{
    if(boot==1){
        this->ligado=true;
    }else if(boot==0){
        this->ligado=false;
    }
}



bool Linux::getEstado_Do_Sistema()const
{
    if(ligado==1){
        cout<<"\nSistema Operaccionnal Inicializado\n"<<endl;
        
    }else if(ligado==0){
        cout<<"\nSistema Operaccionnal nao Inicializado, falha no boot\n"<<endl;
        //exit(0);
        //return 0;
    }
}
//FIM FUNÇÃO 1


//FUNÇÃO 2

void Linux::setEscolhaAdministrador(int comandoDoAdministrador)
{
    if(comandoDoAdministrador==1){
        this->comandoDoAdministrador=true;
    }else if(comandoDoAdministrador!=1){
        this->comandoDoAdministrador=false;
    }
}
 
   
int Linux::getEscolhaAdministrador()const
{
     if(comandoDoAdministrador==1){
        cout<<"\nMostrando dados:\n";
        
    }else if (comandoDoAdministrador!=1){
        cout<<"\nEncerrando sessao\n";
      //exit(0);
    }
}

//FIMM FUNÇÃO 2


//FUNÇÕES DO CONNSTRUTOR INFO
void Linux::setNomeDoSistema(const string &nomeDoSistema_)
{
    this->nomeDoSistema = nomeDoSistema_;
}

string Linux::getNomeDoSistema()const
{
    return nomeDoSistema;
}


void Linux::setAquiteturaDoSistema(int aquiteturaDoSistema)
{
    if(aquiteturaDoSistema==64)
        this->aquiteturaDoSistema=aquiteturaDoSistema;
}

int Linux::getAquiteturaDoSistema()const
{
    if(aquiteturaDoSistema==64){
        return aquiteturaDoSistema;
    }else if (aquiteturaDoSistema==32){
        return aquiteturaDoSistema;
    }else if (aquiteturaDoSistema==86){
        return aquiteturaDoSistema;
    }else{
        return aquiteturaDoSistema==0;
    }
}

//end funcooes set e get de info
    
    
//FUNÇÕES CONSTRUTOR SOBRECARREGADO 1
void Linux::setData_Da_Criacao(const string &Data_Da_Criacao_)
{
    this->Data_Da_Criacao = Data_Da_Criacao_;
}
    
string Linux::getData_Da_Criacao()const
{
    return Data_Da_Criacao;
}
//FIM FUNÇÕES CONSTRUTOR SOBRECARREGADO 1

    
//FUNÇÕES CONSTRUTOR SOBRECARREGADO 2
void Linux::setBuild(double build_)
{
    this->build=build_;
}
 
   
double Linux::getBuild()const
{
    return build;
}
//FIMFUNÇÕES CONSTRUTOR SOBRECARREGADO 2


//FUNCAO SOBRRECARREGAda 1
void Linux::checaSistema(string &nomeDoSistema)
{
    if(nomeDoSistema=="")
        this->nomeDoSistema="Nome do sistema nao especificado";
    else
        this-> nomeDoSistema=nomeDoSistema;
}


string Linux::getNomeDoSistema()
{
    return nomeDoSistema;
}


int Linux::checaSistema(int id)
{
    if(id>=0)
        this->id=id;
    else
        this->id=0;
}


int Linux::getId()const
{
    return id;
}
//FIM FUNCAO SOBRRECARREGA 1


//FUNÇÕES CONSTRUTOR COM CONST E STATIC
int Linux::numeroDeVersoesDoKernel=14;
   
double Linux::versaoAtualDoDoKernelLinnux=5.2;

const string Linux::DATADECRIACAODOSISTEMA="1991";
   
   
double Linux::getversaoAtualDoDoKernelLinnux()const
{
    return versaoAtualDoDoKernelLinnux;
}

string Linux::getChecaIP()const
{
    return COMANDOCHECAIP;
}


string Linux::getdataDeCriacaoDoSistema()const
{
    return DATADECRIACAODOSISTEMA;
}


//FUNÇÃO MOSTRA ARRAY COM VERSÕES DO KERNEL LINUX
    
double Linux::versoesLinux[SIZEVERSOES]={1.0,1.2,2.0,2.2,2.4,2.6,3.0,3.1,3.2,4.1,4.2,5.0,5.1,5.2};

double Linux::Mostra_versoes_Do_Linux()const    
{
    for(int i=0;i<SIZEVERSOES;i++)
    {
            
        cout<<"versao: "<<versoesLinux[i]<<'\n';
        
    }
       
}

    
//FUNÇÃO INFO DA CLASSE PRINCIPAL
void Linux::info_Principal()const
{
    cout<<"-------------Saida do Info da classe principal que recebe o info das outras duas classes-----------\n";
    cout<<"Saida do array da classe Principal Linux\n";
    Linux versoesDoKernel;
    versoesDoKernel.Mostra_versoes_Do_Linux();
    cout<<"\n";
    
    
    cout<<"Saida do array da classe Distribuicao Linux\n";
    const static int SIZEDIST=4;
    string nomesDistri[SIZEDIST] = {"Linux","Ubuntu","Fedrora","Debian"};
    DistribuicoesLinux  Distribuicao_Linux(nomesDistri,SIZEDIST);
    
    Distribuicao_Linux.infoDistribuicoes();
    
    cout<<"\n";
    //delete obj1;
    
    cout<<"Saida do array da classe Repositorio Linux\n";    
    const static int SIZEREPOSITORIO=3;
    string repositorios_Linux[SIZEREPOSITORIO] = {"LibreOffice","VLC","Gimp"};
    Repositorio programas_Do_Repositorio(repositorios_Linux,SIZEREPOSITORIO);
    
    programas_Do_Repositorio.info_Respositorio();
    
    cout<<"-------------Fim do Info da classe principal-----------\n";
    //delete obj2;
}

    
//Metodo ponteiro
    
void Linux::caracteristicaSistema(const string *ptr1 ,string *ptr2)const
{
    ptr2 -> append(nomeDoSistema); 
    ptr2 -> append(" e ");
    ptr2 -> append(*ptr1);
}

    
//Funçao para ponteiro private
int Linux::recebePtr_Id()
{
    this->ptrID=&id;
    return *ptrID;
}
     

Linux::~Linux()
{
    
    
    
    
    delete [] versoesLinux;
    
    
    
    
    
}
