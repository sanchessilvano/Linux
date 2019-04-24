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

private:
    int horas=0;
    int contado=0;
    string nomeDoUsuario="Raimundo";
    int aquiteturaDoSistema;
    string distribuicao;
    double build=0.0;    
    bool ligado;
    string nome;
    int id=9;
    static int numeroDeUsuarios;
    static double numeroDoKernel;
    const string checaIP="ifconfig";
    const static string dataDeCriacaoDoSistema;
    const static int SIZEVEROES=9;
    static double versoesLinux[SIZEVEROES];
    const static int SIZEUSUARIOS = 3;
    static string tipo_De_Usuarios[SIZEUSUARIOS];
    DistribuicoesLinux Distribuicao_Linux;
    Repositorio Contem_No_Respositorio;
    int *ptrBuil;
    
public:
    
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
    Linux(int numeroDeUsuarios,double numeroDoKernel,string &dataDeCriacaoDoSistema,string checaIP);
    //FIM CONSTRUTOR COM CONST E STATIC
    
    //CONSTRUTOR DE CÓPIA CONST E STATIC:
   Linux(const Linux&q,int,double,string,string);
   //FIM CONSTRUTOR DE CÓPIA CONST E STATIC:
   
   //CONSTRUTOR INFO DA CLASSE BASE
   Linux(string tipo_De_Usuarios[SIZEUSUARIOS]);
   //FFIMCONSTRUTOR INFO DA CLASSE BASE
    
    //----------------------------------FUNÇÕES----------------------------------------
    //FUNCAO 1: Da o booot no sistema
    void setLigado(int boot);
    
    bool getLigado();
    
    //FUNCAO 2: Define o tempo de atividade da máquina
    
    int tempoDeAtividade(int horas);
    
    void setTempo(int horas);
    
    int getTempo();
    
   
    //fim da funcao
    
    
    
    //FUNÇÕES DO CONSTRUTOR INFO
    void setNomeDoUsuario(string);
    string getNomeDoUsuario()const;//const adicionado para o construtor de cópia
    void setAquiteturaDoSistema(int);
    int getAquiteturaDoSistema()const;//const adicionado para o construtor de cópia
    //FIM FUNÇÕES DO CONSTRUTOR INFO
    
    //FUNÇÕES DO CONSTRUTOR DISTRIBUIÇÃO
    void setDistribuicao(string);
    string getDistribuicao();
    //FIM FUNÇÕES DO CONSTRUTOR DISTRIBUIÇÃO
    
    //FUNÇÕES CONSTRUTOR BUILD
    void setBuild(double);
    double getBuild();
    //FIMFUNÇÕES CONSTRUTOR BUILD
    
    
    //FUNCAO SOBRECARREGADA 1
    void checaUsuario();
    void checaUsuario(string nome);
    void checaUsuario(int id);
    string getNome();
    int getId();
    
    //FUNÇÕES CONSTRUTOR COM CONST E STATIC
    static void showNumeroDeUsuarios();//metodo static
    double getnumeroDoKernel();
    string getChecaIP()const;
    string getdataDeCriacaoDoSistema()const;
    //FIMFUNÇÕES CONSTRUTOR COM CONST E STATIC
   
   //FUNÇÃO MOSTRA ARRAY COM VERSÕES DO KERNEL LINUX
    double Mostra_versoes_Do_Linux() const;
    
    
   //string mostraUsuarios() const;
   
    static string infor();
    
    //Metodo ponteiro
    
    void caracteristicaFuncionario(const string *ptr1, string *ptr2);
    
    //função ponteiro private
    int recebePtr_Id();
    

    Linux();
    ~Linux();
   
    
    
    
    
//abc    

};

#endif // LINUX_H
