#include<locale>
#include <stdio.h>
#include "Linux.h"
#include "DistribuicoesLinux.h"
#include "Repositorio.h"
#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::getline;
using namespace std;




int main(int argc, char **argv)
{
setlocale(LC_ALL,"portuguese");
    
    //FUNCAO 1
    cout<<"----------------Funcao 1: Boot do sistema--------------------\n"; 
    Linux *estado_Do_Sistema=new Linux(1);
    
    estado_Do_Sistema->setEstado_Do_Sistema(0);
    
    estado_Do_Sistema->getEstado_Do_Sistema();
    
    delete estado_Do_Sistema;
    
    cout<<"\n";
    //FIM DA FUNCAO 1
    
    //FUNCAO 2
    cout<<"----------------Funcao 2 --------------------\n"; 
    int contador=0;
    Linux tempo_De_Atividade;
    tempo_De_Atividade.tempoDeAtividade(120);
    string nome;
    cout<<"Inciciando o relogio\n"<<tempo_De_Atividade.getTempo()<<endl;
    
    cout<<"\nEscolha o tempo de atividade da maquina em minutos\n"<<endl;
    cin>>contador;
    tempo_De_Atividade.setTempo(contador);
    
    cout<<endl;
    tempo_De_Atividade.tempoDeAtividade(contador);
    cout<<"\n";
    //FIM DA FUNCAO 2
    
	cout<<"----------------Construtor Informacoes do sistema--------------------\n"; 
    //objeto do construtor
    
    Linux informacoes_Do_Sistema("Ubuntu",64);
    
    cout<<"\nInformacoes do sistema\n"<<endl;
    
    cout<<"Nome do sistema: "<<informacoes_Do_Sistema.getNomeDoSistema()<<endl;
    
    cout<<"Arquitetura do sistema: "<<informacoes_Do_Sistema.getAquiteturaDoSistema()<<" bits"<<endl;
    
    cout<<"\n";
    //cout<<"O tipo de usuario e: "<<info.mostra_Tipos_Usuarios()<<endl;
    //fiim objeto do construtor;
    
    cout<<"----------------Construtor Sobrecarregado 1--------------------\n"; 
    //OBJETO DO CONST SOBRRECARREGADO 1
    Linux build1;
    Linux build2(14.09);
    
    cout<<"\nInformacoes sobre a Build\n"<<endl;
    
    cout<<"Numero da Build 01 e: "<<build1.getBuild()<<endl;
    
    cout<<"Numero da Build 02 e: "<<build2.getBuild()<<endl;
    
    cout<<"\n";
    
    cout<<"----------------Construtor Sobrecarregado 2--------------------\n"; 
    //OBJETO DO CONST SOBRRECARREGADO 2
    Linux data_De_Criaccao_Build1;
    Linux data_De_Criaccao_Build2 ("copyright (C) 2018");
    
    cout<<"\nData de Criacao da Build\n "<<endl;
    
    cout<<"Data de Criacao:"<<data_De_Criaccao_Build1.getData_Da_Criacao()<<endl;
    
    cout<<"Data de Criacao:"<<data_De_Criaccao_Build2.getData_Da_Criacao()<<endl;
    
    cout<<"\n";
    
    cout<<"----------------Funcao Sobrecarregada 1--------------------\n"; 
    //SAIDA DDA FUNCAO SOBRRECARREGADA 1
    Linux sistema1;
    Linux sistema2;
    
    string nomeDoSistema;
    
    sistema1.checaSistema(nomeDoSistema="");
    sistema2.checaSistema(nomeDoSistema=" Ubuntu");
    
    cout<<"\nSAIDA DA FUNCAO SOBRECARREGADA 1\n"<<endl;
    
    cout<<"Nome do sistema 01 verificado e: "<<sistema1.getNomeDoSistema()<<endl;
    
    cout<<"Nome do sistema 02 verificado e: "<<sistema2.getNomeDoSistema()<<endl;
    
    sistema1.checaSistema(0);
    sistema2.checaSistema(37);
    
    cout<<"ID do sistema 01 verificado e: "<<sistema1.getId()<<endl;
    
    cout<<"ID do sistema 02 verificado e: "<<sistema2.getId()<<endl;
    
    cout<<"\n";
   
    cout<<"----------------Construtor de copia--------------------\n"; 
    //SAIDA DO CONSTRUTOR DE CÓPIA(COPIADO DO CONSTRUTOR INFO)
    cout<<"\nSAIDA DO CONSTRUTOR DE COPIA(COPIADO DO CONSTRUTOR INFO)\n"<<endl;
    Linux copia_Informacoes(informacoes_Do_Sistema);
    cout<<"Copia do nome distribuicao e: "<<copia_Informacoes.getNomeDoSistema()<<endl;
    
    cout<<"Copia da arquitetura do sistema e: "<<copia_Informacoes.getAquiteturaDoSistema()<<endl;
    
    cout<<"\n";
    
    //FIM SAIDA DO CONSTRUTOR DE CÓPIA
    
    cout<<"----------------Construtor com atributos static e const--------------------\n"; 
    //CONST E STATIC
    Linux propriedade_Linux;
    cout<<"\nSaida do construtor com atributos static e const\n"<<endl;
    cout<<"Vesao atual do kernel linux e: "<<propriedade_Linux.getversaoAtualDoDoKernelLinnux()<<'\n';
    cout<<"Para checar o ip digite: "<<propriedade_Linux.getChecaIP()<<'\n';
    cout<<"Data da criacao do Linux: "<<propriedade_Linux.getdataDeCriacaoDoSistema()<<'\n';
    Linux::showNumeroDeVersoesDoKernel();
   cout<<"\n";
    //FIM CONST E STATIC
    
    cout<<"----------------Copia do Construtor com atributos static e const--------------------\n"; 
    //SAÍDA DA CÓPIA DO CONSTRUTOR CONST E STATIC
    Linux copia_De_Propriedade=propriedade_Linux;
    cout<<"\nSaida da copia do construtor com atributos static e const\n"<<endl;
    cout<<"COPIA DE Vesao atual do kernel linux e: "<<copia_De_Propriedade.getversaoAtualDoDoKernelLinnux()<<'\n';
    cout<<"\n";
    cout<<"COPIA DE comando para checar o ip digite: "<<copia_De_Propriedade.getChecaIP()<<'\n';
    cout<<"\n";
    cout<<"COPIA DE Data da criacao do Linux: "<<copia_De_Propriedade.getdataDeCriacaoDoSistema()<<'\n';
    cout<<"\n";
    Linux::showNumeroDeVersoesDoKernel();
    
    cout<<"----------------Imprimindo array static--------------------\n"; 
    //IMPRIMINDO ARRAY STATIC
    Linux tabela_De_Versoes_Linux;
    cout<<"Tabela de versoes do linux:"<<'\n';
    cout<<tabela_De_Versoes_Linux.Mostra_versoes_Do_Linux()<<'\n';
    
    //Saida do metodo info da classe principal
    cout<<"\n";
    Linux recebe_Classes_De_Composicao;
    //recebe_Classes_De_Composicao=Distribuicao_Linux(nomesDistri,SIZEDIST);
    recebe_Classes_De_Composicao.info_Principal();
    cout<<"\n";
    
    
    //EXIBE ARRAY DA CLASSE DISTRIBUIÇÕES
    cout<<"----------------Exibindo array da classe Distribuicao Linux--------------------\n";
    const static int SIZEDIST=4;
    static string nomesDistri[SIZEDIST] = {"Linux","Ubuntu","Fedrora","Debian"};
    DistribuicoesLinux  Distribuicao_Linux(nomesDistri,SIZEDIST);
    
    Distribuicao_Linux.exibeArrayDistribuicoes();
    
    
    //FIM DISTRIBUIÇÕES
    
    //EXIBE CÓPIA ARRAY DA CLASSE DISTRIBUIÇÕES
    cout<<"----------------Exibindo copia do array da classe Distribuicao Linux--------------------\n"; 
    DistribuicoesLinux CopiaDistribuicao;
    CopiaDistribuicao=Distribuicao_Linux;
    CopiaDistribuicao.exibeArrayDistribuicoes();
    cout<<"\n";
    
    //EXIBE ARRAY DA CLASSE REPOSITORIO
    cout<<"----------------Exibindo array da classe Repositorio--------------------\n"; 
    const static int SIZEREPOSITORIO=3;
    static string repositorios_Linux[SIZEREPOSITORIO] = {"LibreOffice","VLC","Gimp"};
    Repositorio programas_Do_Repositorio(repositorios_Linux,SIZEREPOSITORIO);
    
    programas_Do_Repositorio.info_Respositorio();
    cout<<"\n";
    //Fim EXIBE ARRAY REPOSITORIO
    
    //EXIBE CÓPIA DO ARRAY DA CLASSE REPOSITÓRIO
    cout<<"----------------Exibindo copia do array da classe Repositorio Linux--------------------\n"; 
    Repositorio copia_Programas;
    copia_Programas=programas_Do_Repositorio;
    copia_Programas.info_Respositorio();
    cout<<"\n";
    
    //Fim EXIBE CÓPIA ARRAY REPOSITORIO
    
    cout<<"----------------Ponteiro da classe--------------------\n"; 
    //PONTEIRO DA CLASSE
    Linux *ptrLinux = &informacoes_Do_Sistema;//ponteiro aponta para o endereço do objeto info que esta localizado no contrutor info(nome do usuario)
    cout<<"Apontador da classe: \n";
    cout<<"Apontador para o nome do sistema retorna: "<<ptrLinux->getNomeDoSistema()<<'\n';
    cout<<"\n";
    //delete ptrLinux;
    
    cout<<"----------------Funcao com Ponteiro--------------------\n"; 
    //retorno da função ponteiro
    Linux Sistema02;
    
    const int tam=2;
    const string msg[tam]={"um nucleo para sistemas UNIX","nao e um nucleo para sistemas UNIX"};
    string recado="E verdade que\t";
    
    Sistema02.caracteristicaSistema(&msg[0],&recado);
    
    cout<<"\n";
    cout<<"Retorno da funcao com apontadores: \n";
    cout<<recado<<'\n';
    cout<<"\n";
    
    cout<<"----------------Funcao com ponteiro private e alocacao de memoria--------------------\n"; 
    //Retornno da função com ponteiro private e alocação de memória
    Linux *recebe_Ponteiro_Private;
    recebe_Ponteiro_Private = new Linux;
    cout<<"\n";
    cout<<"Id e: "<<recebe_Ponteiro_Private->recebePtr_Id()<<'\n';
    cout<<"\n";
    delete recebe_Ponteiro_Private;
    cout<<recado<<'\n';
    cout<<"\n";
    
   
    cout<<"----------------Saida do metodo que aumenta o vetor dinamicamente--------------------\n"; 
    int size=4;
    string nan[size]={"joao","maria"};
    DistribuicoesLinux obj(nan,size);
    
    //obj.adicionaUsurio(nan="joaso");
    obj.exibe();
    
    
    
return 0;
}//end main
