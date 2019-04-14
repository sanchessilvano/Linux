#include "Linux.h"
#include <string>
#include <iostream>
using std::string;

void Linux::setLigado(int boot)
{
    if(boot==1){
        ligado=true;
    }else if(boot==0){
        ligado=false;
    }
}

bool Linux::getLigado()
{
    return ligado;
}


//Construtor padrão
Linux::Linux()
{
    this->setDistribuicao("Distribuicao nao espececificada");
    
    this->setBuild(0);
    
}

//CONSTRUTOR INFO
Linux::Linux(const string &nomeDoUsuario, int aquiteturaDoSistema)
{
    this->nomeDoUsuario=nomeDoUsuario;
        
    if(aquiteturaDoSistema<=0)
        this->aquiteturaDoSistema = 0;
    else
        this->aquiteturaDoSistema=aquiteturaDoSistema;
        
}
    //end CONSTRUTOR info
    void Linux::setNomeDoUsuario(string nomeDoUsuario_)
    {
        nomeDoUsuario=nomeDoUsuario_;
    }
    
    string Linux::getNomeDoUsuario()const
    {
        return nomeDoUsuario;
    }
    
    void Linux::setAquiteturaDoSistema(int aquiteturaDoSistema_)
    {
        aquiteturaDoSistema=aquiteturaDoSistema_;
    }
    
    int Linux::getAquiteturaDoSistema()const
    {
        return aquiteturaDoSistema;
    }
    //end funcooes set e get de info
    
    
    //CONSTRUTOR SOBRECARREGADO 1
Linux::Linux(const string &distribuicao)
    {
        this->distribuicao=distribuicao;
    }
    //FIM CONSTRUTOR SOBRECARREGADO 1
    
    void Linux::setDistribuicao(string distribuicao_)
    {
        distribuicao=distribuicao_;
    }
    
    string Linux::getDistribuicao()
    {
        return distribuicao;
    }

    //CONSTRUTOR SOBRECARREGADO 2
Linux::Linux(const double &build)
    {
        if(build<=0)
            this->build=0;
        else
        this->build=build;
    }
    
    void Linux::setBuild(double build_)
    {
        build=build_;
    }
    
    double Linux::getBuild()
    {
        return build;
    }
    

//FUNCAO SOBRRECARREGAda 1
void Linux::checaUsuario()
{
    this->nome="Usuarrio nao localizado";
    
    this ->id=0;
}

void Linux::checaUsuario(string nome)
{
    this->nome=nome;
}

string Linux::getNome()
{
    return nome;
}

void Linux::checaUsuario(int id)
{
    if(id>=0)
        this->id=id;
    else
        this->id=0;
}

int Linux::getId()
{
    return id;
}
//FIM FUNCAO SOBRRECARREGA 1


//CÓPIA DE CONSTRUTOR:

Linux::Linux(const Linux &p)
    {
       this->nomeDoUsuario=p.nomeDoUsuario;
        
    if(aquiteturaDoSistema<=0)
        this->aquiteturaDoSistema = 0;
    else
        this->aquiteturaDoSistema=p.aquiteturaDoSistema;
    }
    
    
    //CONSTRUTOR COM CONST E STATIC
    Linux::Linux(int numeroPessoas,double numeroDoKernel,string &dataDeCriacaoDoSistema,string checaIP)
    {
        numeroDeUsuarios++;
    }
        
   int Linux::numeroDeUsuarios=25000;
   double Linux::numeroDoKernel=5.0;
   const string Linux::dataDeCriacaoDoSistema="1991";
   
   
   void Linux::showNumeroDeUsuarios()
   {
       cout<<"Numero de usuarios de Linux e ="<<numeroDeUsuarios<<endl;
    }
    
    double Linux::getnumeroDoKernel()
    {
        return numeroDoKernel;
    }
    string Linux::getdataDeCriacaoDoSistema()const
    {
        return dataDeCriacaoDoSistema;
    }
    
    string Linux::getChecaIP()const
    {
        return checaIP;
    }
    //CONSTRUTOR COM CONST E STATIC
    Linux::Linux(const Linux &q,int r, double s,string t,string v)
    {
        numeroDeUsuarios=q.numeroDeUsuarios;
        numeroDoKernel=q.numeroDoKernel;
        this->getChecaIP()=q.getChecaIP();
        this->getdataDeCriacaoDoSistema()=q.getdataDeCriacaoDoSistema();
    }
    

    
Linux::~Linux()
{
}
