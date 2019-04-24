#include "Linux.h"
#include <string>
#include <iostream>
using std::string;

//Construtor padrão
Linux::Linux():Distribuicao_Linux(),Contem_No_Respositorio()
{
    this->setDistribuicao("Distribuicao nao espececificada");
    
    this->setBuild(0);
    
    DistribuicoesLinux * novaDistribuicao1 = new DistribuicoesLinux();
    
    delete novaDistribuicao1;
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
    
    delete novaDistribuicao2; 
        
}
//end CONSTRUTOR info

//CONSTRUTOR SOBRECARREGADO 1
Linux::Linux(const string &distribuicao):Distribuicao_Linux(),Contem_No_Respositorio()
    {
        this->distribuicao=distribuicao;
        
        DistribuicoesLinux * novaDistribuicao3 = new DistribuicoesLinux();
        
        delete novaDistribuicao3;
    }
    
//CONSTRUTOR SOBRECARREGADO 2
Linux::Linux(const double &build):Distribuicao_Linux(),Contem_No_Respositorio()
    {
        if(build<=0)
            this->build=0;
        else
        this->build=build;
        
        DistribuicoesLinux * novaDistribuicao4 = new DistribuicoesLinux();
        
        delete novaDistribuicao4;
    }
    //FIM CONSTRUTOR SOBRECARREGADO 1
    
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
        
        delete novaDistribuicao6;
    }
    
//CONSTRUTOR COM CONST E STATIC
    Linux::Linux(const Linux &q,int r, double s,string t,string v):Distribuicao_Linux(),Contem_No_Respositorio()
    {
        numeroDeUsuarios=q.numeroDeUsuarios;
        numeroDoKernel=q.numeroDoKernel;
        this->getChecaIP()=q.getChecaIP();
        this->getdataDeCriacaoDoSistema()=q.getdataDeCriacaoDoSistema();
        
        
        DistribuicoesLinux * novaDistribuicao7 = new DistribuicoesLinux();
        
        delete novaDistribuicao7;
    }
    
//CONSTRUTOR DO ARRAY
    Linux::Linux(string tipo_De_Usuarios[SIZEUSUARIOS])
    {
        
    }
//--------------------------------------FUNÇÕES
//FUNÇÃO 1
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
cout<<"\nSistema Operaccionnal Inicializado\n"<<endl;
    
    //return ligado;
}
//FIM FUNÇÃO 1

//FIM FUNÇÃO 2
int Linux::tempoDeAtividade(int horas)
    {
        //cout<<"\nSaida da funcao"<<endl;
        cout<<"Bem vindo\nA mauina desligara em: "<<horas<<" minutos!"<<endl;
    }
    
    void Linux::setTempo(int horas_)
    {
        horas=horas_;
    }
    
    int Linux::getTempo()
    {
        return horas;
    }

//FIMM FUNÇÃO 2


//FUNÇÕES DO CONNSTRUTOR INFO
    void Linux::setNomeDoUsuario(string nomeDoUsuario_)
    {
        this->nomeDoUsuario=nomeDoUsuario_;
    }
    
    string Linux::getNomeDoUsuario()const
    {
        return nomeDoUsuario;
    }
    
    void Linux::setAquiteturaDoSistema(int aquiteturaDoSistema_)
    {
        this->aquiteturaDoSistema=aquiteturaDoSistema_;
    }
    
    int Linux::getAquiteturaDoSistema()const
    {
        return aquiteturaDoSistema;
    }
    
//end funcooes set e get de info
    
    
//FUNÇÕES CONSTRUTOR SOBRECARREGADO 1
    void Linux::setDistribuicao(string distribuicao_)
    {
        distribuicao=distribuicao_;
    }
    
    string Linux::getDistribuicao()
    {
        return distribuicao;
    }
    //FIM FUNÇÕES CONSTRUTOR SOBRECARREGADO 1

    
    
    //FUNÇÕES CONSTRUTOR SOBRECARREGADO 2
    void Linux::setBuild(double build_)
    {
        build=build_;
    }
    
    double Linux::getBuild()
    {
        return build;
    }
    //FIMFUNÇÕES CONSTRUTOR SOBRECARREGADO 2

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

//FUNÇÕES CONSTRUTOR COM CONST E STATIC
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
    //FIM FUNÇÕES CONSTRUTOR COM CONST E STATIC
    
    //FUNÇÃO MOSTRA ARRAY COM VERSÕES DO KERNEL LINUX
    
    double Linux::versoesLinux[SIZEVEROES]={1.0,1.2,2.0,2.2,2.4,2.6,3.0,3.1,3.2};
    double Linux::Mostra_versoes_Do_Linux()const    
    {
        for(int i=0;i<SIZEVEROES;i++)
        {
            
            cout<<"versao: "<<versoesLinux[i]<<'\n';
        
        }
    }
    
    
    /*string Linux::tipo_De_Usuarios[SIZEUSUARIOS]={"administrador","comum","ok"};
    string Linux::mostraUsuarios()const
    {
        for(int j=0;j<SIZEUSUARIOS;j++)
        {
            cout<<"Tipos de Usuarios: "<<tipo_De_Usuarios[j]<<'\n';
            
        }
    }*/
    
    
    //FUNÇÃO INFO DA CLASSE BASE
    string Linux::infor()
    {
        DistribuicoesLinux * obj1 = new DistribuicoesLinux();
        
        obj1->info_Tabela_De_Distribuicoes();
        
        cout<<obj1->info_Tabela_De_Distribuicoes()<<'\n';
        
        delete obj1;
        
        Repositorio * obj2 = new Repositorio();
        
        obj2->info_respositorio();
        
        //cout<<obj2->info_respositorio()<<'\n';
        
        delete obj2;
    }
    
    //Metodo ponteiro
    
    void Linux::caracteristicaFuncionario(const string *ptr1 ,string *ptr2)
    {
        ptr2 -> append(nomeDoUsuario); 
        ptr2 -> append(" e ");
        ptr2 -> append(*ptr1);
    }
    
    //Funçao para ponteiro private
    int Linux::recebePtr_Id()
    {
        ptrBuil=&id;
        return *ptrBuil;
        
    }
    

   
Linux::~Linux()
{
}
