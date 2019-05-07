#include "Linux.h"
#include <string.h>
#include <iostream>
using std::string;

//----------------------------------CONSTRUTORES----------------------------------------  
//Construtor padrão
Linux::Linux()
:Distribuicao_Linux(),Contem_No_Respositorio(), quantUsuarios( 0 )
{
    this->distribuicao="Distribuicao nao especificada";
    
    this->setBuild(0);
    
    DistribuicoesLinux * novaDistribuicao1 = new DistribuicoesLinux();
    
    delete novaDistribuicao1;
    
    nomesUsuarios = 0;
    
}


//CONSTRUTOR INFO
Linux::Linux(const string &nomeDoUsuario, int aquiteturaDoSistema)
:Distribuicao_Linux()
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
Linux::Linux(const string &distribuicao)
:Distribuicao_Linux(),Contem_No_Respositorio()
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
//FIM CONSTRUTOR SOBRECARREGADO 2
    

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
        
    nomesUsuarios = 0;
}

   
//CONSTRUTOR COM CONST E STATIC
Linux::Linux(const Linux &p,const Linux &q):Distribuicao_Linux(),Contem_No_Respositorio()
{
    numeroDeUsuarios=p.numeroDeUsuarios;
    
    numeroDoKernel=p.numeroDoKernel;
    
    this->getChecaIP()=q.getChecaIP();
    
    this->getdataDeCriacaoDoSistema()=q.getdataDeCriacaoDoSistema();
    
    DistribuicoesLinux * novaDistribuicao7 = new DistribuicoesLinux();
        
    delete novaDistribuicao7;
}

    
//CONSTRUTOR DO ARRAY
Linux::Linux(string tipo_De_Usuarios[SIZEUSUARIOS])
{
        
}

//----------------------------------FIM CONSTRUTORES----------------------------------------  

//----------------------------------MÉTODOS STATIC---------------------------------------- 
    //FUNÇÕES CONSTRUTOR COM CONST E STATIC
    void Linux::showNumeroDeUsuarios()
{
    cout<<"Numero de usuarios de Linux e ="<<numeroDeUsuarios<<endl;
}
    
//----------------------------------FIM MÉTODOS STATIC----------------------------------------


//FUNÇÃO 1
void Linux::setLigado(int boot)
{
    if(boot==1){
        ligado=true;
    }else if(boot==0){
        ligado=false;
    }
}



bool Linux::getLigado()const
{
    if(ligado==1){
        cout<<"\nSistema Operaccionnal Inicializado\n"<<endl;
        
    }else if(ligado==0){
        cout<<"\nSistema Operaccionnal nao Inicializado, deligando computador\n"<<endl;
        exit(0);
    }
    //return printf("\nSistema Operaccionnal Inicializado\n");    
}
//FIM FUNÇÃO 1


//FIM FUNÇÃO 2
int Linux::tempoDeAtividade(int horas) const
{
    cout<<"Bem vindo\nA maquina desligara em: "<<horas<<" minutos!"<<endl;
}
    

void Linux::setTempo(int horas_)
{
    horas=horas_;
}
 
   
int Linux::getTempo()const
{
    return horas;
}

//FIMM FUNÇÃO 2


//FUNÇÕES DO CONNSTRUTOR INFO
void Linux::setNomeDoUsuario(string &nomeDoUsuario)
{
    this->nomeDoUsuario=nomeDoUsuario;
}

string Linux::getNomeDoUsuario()const
{
    return nomeDoUsuario;
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
void Linux::setDistribuicao(string &distribuicao_)
{
    distribuicao=distribuicao_;
}
    
string Linux::getDistribuicao()const
{
    return distribuicao;
}
//FIM FUNÇÕES CONSTRUTOR SOBRECARREGADO 1

    
//FUNÇÕES CONSTRUTOR SOBRECARREGADO 2
void Linux::setBuild(double build_)
{
    build=build_;
}
 
   
double Linux::getBuild()const
{
    return build;
}
//FIMFUNÇÕES CONSTRUTOR SOBRECARREGADO 2


//FUNCAO SOBRRECARREGAda 1
void Linux::checaUsuario(string &nome)
{
    if(nome=="")
        this->nome="Usuario nao especificado";
    else
        this-> nome=nome;
}


string Linux::getNome()const
{
    return nome;
}


int Linux::checaUsuario(int id)
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
int Linux::numeroDeUsuarios=25000;
   
double Linux::numeroDoKernel=5.0;

const string Linux::DATADECRIACAODOSISTEMA="1991";
   
   
double Linux::getnumeroDoKernel()const
{
    return numeroDoKernel;
}

string Linux::getChecaIP()const
{
    return CHECAIP;
}


string Linux::getdataDeCriacaoDoSistema()const
{
    return DATADECRIACAODOSISTEMA;
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

//FIM FUNÇÕES CONSTRUTOR COM CONST E STATIC
    


/*string Linux::tipo_De_Usuarios[SIZEUSUARIOS]={"administrador","comum","ok"};
 * 
 * 
string Linux::mostraUsuarios()const
{
    for(int j=0;j<SIZEUSUARIOS;j++)
    {
        cout<<"Tipos de Usuarios: "<<tipo_De_Usuarios[j]<<'\n';
    }
}*/
    
    
//FUNÇÃO INFO DA CLASSE PRINCIPAL
string Linux::info_Principal()const
{
    cout<<"-------------Saida do Info da classe principal que recebe o info das outras duas classes-----------\n";
    
    cout<<"Saida do array da classe Distribuicao Linux\n";
    DistribuicoesLinux * distribuicoes = new DistribuicoesLinux();
        
    distribuicoes->info_Tabela_De_Distribuicoes();
        
    cout<<"\n";
    //delete obj1;
    
    cout<<"Saida do array da classe Repositorio Linux\n";    
    Repositorio * programas = new Repositorio();
        
    programas->info_Respositorio();
    
    cout<<"-------------Fim do Info da classe principal-----------\n";
    //delete obj2;
}

    
//Metodo ponteiro
    
void Linux::caracteristicaFuncionario(const string *ptr1 ,string *ptr2)const
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
     
     
//Ponteiros

//Linux *ptrClassLinux1 = new Linux();
     
//Linux *ptrClassLinux2 = new Linux();
    
//codigo adiciona usaurio


void Linux::adicionaUsurio(const string &nomeDoUsuario)
{
    string *aux = new string[quantUsuarios];
       
    if( nomesUsuarios != 0 )
    {
        for(int i=0;i<quantUsuarios;i++)
            aux[i]=nomesUsuarios[i];
           
        delete [] nomesUsuarios;
           
        nomesUsuarios = new string [++quantUsuarios];
           
        for(int i = 0; i<quantUsuarios-1; i++)
        
            nomesUsuarios[ i ] = aux[i];
            nomesUsuarios[quantUsuarios - 1] = nomeDoUsuario;
            
        delete [] aux;
    }
       
}

    
void Linux::alocar(int quntUsers)
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
    
void Linux::desalocar( )
{
    if( nomesUsuarios != 0 )
        delete [ ] nomesUsuarios;
}



Linux::~Linux()
{
    //if( nomesUsuarios != 0 )
        //delete [ ] nomesUsuarios;
}
