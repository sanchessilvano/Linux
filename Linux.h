#ifndef LINUX_H
#define LINUX_H
#include<iostream>
#include<string>
#include "DistribuicoesLinux.h"
#include "Repositorio.h"
using namespace std;
using std::string;
using std::getline;
using std::cout;
using std::endl;


class Linux
{

//----------------------------------CONSTRUTORES----------------------------------------    
public:
    Linux();
    ~Linux();
    
    //CONSTRUTOR INFO
    Linux(const string &,int);
    //fim do construtor info
    
    //SOBRECARGA DE CONSTRUTOR QUE MOSTRRA A DISTRIIBUIÇÃO
    Linux(const string &);
    //FIM SOBRECARGA DE CONSTRUTOR
    
    //2ª sobrecarrga BUILD
    Linux(const double &);
    //FIM 2ª sobrecarrga BUILD
    
    //CÓPIA DE CONSTRUTOR:
    Linux(const Linux&);
    //fim do const ccópia
    
    //CONSTRUTOR COM CONST E STATIC
    Linux(int numeroDeVersoesDoKernel,double versaoAtualDoDoKernelLinnux,string &dataDeCriacaoDoSistema,string checaIP);
    //FIM CONSTRUTOR COM CONST E STATIC
    
    //CONSTRUTOR DE CÓPIA CONST E STATIC:
    Linux(const Linux&p,const Linux &q);
    //FIM CONSTRUTOR DE CÓPIA CONST E STATIC:
   
    //CONSTRUTOR INFO DA CLASSE BASE
    Linux(string tipo_De_Usuarios[]);
    //FFIMCONSTRUTOR INFO DA CLASSE BASE

//----------------------------------FIM CONSTRUTORES----------------------------------------   
   
   //FUNCAO 1: Da o booot no sistema
    void setEstado_Do_Sistema(int boot);
    
    bool getEstado_Do_Sistema()const;
    
    //FUNCAO 2: Define o tempo de atividade da máquina
    
    int tempoDeAtividade(int horas)const;
    
    void setTempo(int horas);
    
    int getTempo()const;
    
   
    //fim da funcao
    
    
    //FUNÇÕES DO CONSTRUTOR INFO
    void setNomeDoSistema(const string &);
    
    string getNomeDoSistema()const;//const adicionado para o construtor de cópia
   
    void setAquiteturaDoSistema(int);
    
    int getAquiteturaDoSistema()const;//const adicionado para o construtor de cópia
    
    //FIM FUNÇÕES DO CONSTRUTOR INFO
    
    
    //FUNÇÕES DO CONSTRUTOR DISTRIBUIÇÃO
    void setData_Da_Criacao(const string &);
    string getData_Da_Criacao()const;
    //FIM FUNÇÕES DO CONSTRUTOR DISTRIBUIÇÃO
    
    
    //FUNÇÕES CONSTRUTOR BUILD
    void setBuild(double);
    double getBuild()const;
    //FIMFUNÇÕES CONSTRUTOR BUILD
    
    
    //FUNCAO SOBRECARREGADA 1
    //void checaUsuario();
    void checaSistema(string &nomeDoSistema);
    int checaSistema(int id);
    string getNomeDoSistema();
    int getId()const;
    
    
    //FUNÇÕES CONSTRUTOR COM CONST E STATIC
    static void showNumeroDeVersoesDoKernel();//metodo static
    
    double getversaoAtualDoDoKernelLinnux()const;
    
    string getChecaIP()const;
   
    string getdataDeCriacaoDoSistema()const;
    //FIM FUNÇÕES CONSTRUTOR COM CONST E STATIC
   
   //FUNÇÃO MOSTRA ARRAY COM VERSÕES DO KERNEL LINUX
    double Mostra_versoes_Do_Linux() const;
    
    //string mostraUsuarios() const;
   
   //FUNÇÃO INFO DA CLASSE PRINCIPAL
    void info_Principal()const;
    
    
    //Metodo ponteiro
    
    void caracteristicaSistema(const string *ptr1, string *ptr2)const;
    
    //função ponteiro private
    int recebePtr_Id();
    
    
private:
    const string COMANDOCHECAIP="ifconfig";
    const static string DATADECRIACAODOSISTEMA;
    const static int SIZEVERSOES=14;
    const static int SIZEUSUARIOS = 3;
    const static int QUANTIVERSION = 10;
    static double versoesLinux[SIZEVERSOES];
    static string tipo_De_Usuarios[SIZEUSUARIOS];
    static int numeroDeVersoesDoKernel;
    static double versaoAtualDoDoKernelLinnux;
    int horas=0;
    int contador;
    int id=9;
    int aquiteturaDoSistema=1;
    int *ptrBuil;
    int quantUsuarios;
    double build=0.0;    
    bool ligado;
    string Data_Da_Criacao;
    string nome;
    string nomeDoUsuario="Raimundo";
    string nomeDoSistema="Ubuntu 12";
    string version[QUANTIVERSION];
    string *nomesUsuarios;
    DistribuicoesLinux *Distribuicao_Linux;
    Repositorio Contem_No_Respositorio;
};

#endif // LINUX_H
