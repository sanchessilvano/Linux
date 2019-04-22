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
Linux::Linux():Distribuicao_Linux(),Contem_No_Respositorio()
{
    this->setDistribuicao("Distribuicao nao espececificada");
    
    this->setBuild(0);
    
    DistribuicoesLinux * novaDistribuicao1 = new DistribuicoesLinux();
}

//CONSTRUTOR INFO
Linux::Linux(const string &nomeDoUsuario, int aquiteturaDoSistema):Distribuicao_Linux()
{
    this->nomeDoUsuario=nomeDoUsuario;
        
    if(aquiteturaDoSistema<=0)
        this->aquiteturaDoSistema = 0;
    else
        this->aquiteturaDoSistema=aquiteturaDoSistema;
    
    
    DistribuicoesLinux * novaDistribuicao2 = new DistribuicoesLinux();
        
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
Linux::Linux(const string &distribuicao):Distribuicao_Linux(),Contem_No_Respositorio()
    {
        this->distribuicao=distribuicao;
        
        
        
        DistribuicoesLinux * novaDistribuicao3 = new DistribuicoesLinux();
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
Linux::Linux(const double &build):Distribuicao_Linux(),Contem_No_Respositorio()
    {
        if(build<=0)
            this->build=0;
        else
        this->build=build;
        
        
        
        DistribuicoesLinux * novaDistribuicao4 = new DistribuicoesLinux();
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

Linux::Linux(const Linux &p):Distribuicao_Linux(),Contem_No_Respositorio()
    {
       this->nomeDoUsuario=p.nomeDoUsuario;
        
    if(aquiteturaDoSistema<=0)
        this->aquiteturaDoSistema = 0;
    else
        this->aquiteturaDoSistema=p.aquiteturaDoSistema;
        
        
    }
    
    
    //CONSTRUTOR COM CONST E STATIC
    Linux::Linux(int numeroPessoas,double numeroDoKernel,string &dataDeCriacaoDoSistema,string checaIP):Distribuicao_Linux()
    {
        numeroDeUsuarios++;
        
        
       
        DistribuicoesLinux * novaDistribuicao6 = new DistribuicoesLinux();
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
    Linux::Linux(const Linux &q,int r, double s,string t,string v):Distribuicao_Linux(),Contem_No_Respositorio()
    {
        numeroDeUsuarios=q.numeroDeUsuarios;
        numeroDoKernel=q.numeroDoKernel;
        this->getChecaIP()=q.getChecaIP();
        this->getdataDeCriacaoDoSistema()=q.getdataDeCriacaoDoSistema();
        
        
        
        DistribuicoesLinux * novaDistribuicao7 = new DistribuicoesLinux();
    }
    
    //FUNÇÃO MOSTRA ARRAY COM VERSÕES DO KERNEL LINUX
    
    double Linux::versoesLinux[SIZEVEROES]={1.0,1.2,2.0,2.2,2.4,2.6,3.0,3.1,3.2};
    double Linux::Mostra_versoes_Do_Linux()const    
    {
        for(int i=0;i<SIZEVEROES;i++)
        {
            
            cout<<"versao: "<<versoesLinux[i]<<'\n';
        
        }
    }
    
    //CONSTRUTOR DO ARRAY
    //Linux::Linux(string tipo_De_Usuarios[SIZEUSUARIOS])
    //{
        
    //}
    string Linux::tipo_De_Usuarios[SIZEUSUARIOS]={"administrador","comum","ok"};
    string Linux::mostraUsuarios()const
    {
        for(int j=0;j<SIZEUSUARIOS;j++)
        {
            cout<<"Tipos de Usuarios: "<<tipo_De_Usuarios[j]<<'\n';
            
        }
    }
    
    
    //FUNÇÃO INFO DA CLASSE BASE
    static string infor()
    {
        DistribuicoesLinux * obj1 = new DistribuicoesLinux();
        
        obj1->info_Tabela_De_Distribuicoes();
        
        cout<<obj1->info_Tabela_De_Distribuicoes()<<'\t';
        
        Repositorio * obj2 = new Repositorio();
        
        obj2->info_respositorio();
        
        cout<<obj2->info_respositorio()<<'\n';
    }
    

    
Linux::~Linux()
{
}
