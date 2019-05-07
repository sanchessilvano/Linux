#include<locale.h>
#include <stdio.h>
#include "Linux.h"
#include "DistribuicoesLinux.h"
#include "Repositorio.h"
#include <iostream>
//#include"Linux.h"
using std::cout;
using std::getline;
using namespace std;




int main(int argc, char **argv)
{
setlocale(LC_ALL,"portuguese");
    
    //FUNCAO 1
    cout<<"----------------Funcao 1: Boot do sistema--------------------\n"; 
    Linux *estado_Do_Sistema=new Linux(1);
    
    estado_Do_Sistema->setLigado(1);
    
    estado_Do_Sistema->getLigado();
    
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
    
	cout<<"----------------Construtor Informacoes do usuario--------------------\n"; 
    //objeto do construtor;
    Linux informacoes_Usuario("Joao",32);
    
    cout<<"\nSaida do Contsrutor\n"<<endl;
    
    cout<<"Nome do Usuario: "<<informacoes_Usuario.getNomeDoUsuario()<<endl;
    
    cout<<"Arquitetura do sistema: "<<informacoes_Usuario.getAquiteturaDoSistema()<<" bits"<<endl;
    
    cout<<"\n";
    //cout<<"O tipo de usuario e: "<<info.mostra_Tipos_Usuarios()<<endl;
    //fiim objeto do construtor;
    
    cout<<"----------------Construtor Sobrecarregado 1--------------------\n"; 
    //OBJETO DO CONST SOBRRECARREGADO 1
    Linux pc1("Ubuntu");
    Linux pc2;
    
    cout<<"\nSaida do construtor 1 sobrecarregado\n "<<endl;
    
    cout<<"Esta distribuicao e:"<<pc1.getDistribuicao()<<endl;
    
    cout<<"Esta distribuicao e:"<<pc2.getDistribuicao()<<endl;
    
    cout<<"\n";
    
    cout<<"----------------Construtor Sobrecarregado 2--------------------\n"; 
    //OBJETO DO CONST SOBRRECARREGADO 2
    Linux build1;
    Linux build2(14.09);
    
    cout<<"\nSaida do construtor 2 sobrecarregado \n"<<endl;
    
    cout<<"Numero da Build 01 e: "<<build1.getBuild()<<endl;
    
    cout<<"Numero da Build 02 e: "<<build2.getBuild()<<endl;
    
    cout<<"\n";
    
    cout<<"----------------Funcao Sobrecarregada 1--------------------\n"; 
    //SAIDA DDA FUNCAO SOBRRECARREGADA 1
    Linux usuario1;
    Linux usuario2;
    
    usuario1.checaUsuario(nome="");
    usuario2.checaUsuario(nome="Raimundo");
    
    cout<<"\nSAIDA DA FUNCAO SOBRECARREGADA 1\n"<<endl;
    
    cout<<"Nome do Usuario 01 verificado e: "<<usuario1.getNome()<<endl;
    
    cout<<"Nome do Usuario 02 verificado e: "<<usuario2.getNome()<<endl;
    
    usuario1.checaUsuario(0);
    usuario2.checaUsuario(37);
    
    cout<<"ID do Usuario 01 verificado e: "<<usuario1.getId()<<endl;
    
    cout<<"ID do Usuario 02 verificado e: "<<usuario2.getId()<<endl;
    
    cout<<"\n";
   
    cout<<"----------------Construtor de copia--------------------\n"; 
    //SAIDA DO CONSTRUTOR DE CÓPIA(COPIADO DO CONSTRUTOR INFO)
    cout<<"\nSAIDA DO CONSTRUTOR DE COPIA(COPIADO DO CONSTRUTOR INFO)\n"<<endl;
    Linux copia_Informacoes(informacoes_Usuario);
    cout<<"Copia do nome e: "<<copia_Informacoes.getNomeDoUsuario()<<endl;
    
    cout<<"Copia da arquitetura do sistema e: "<<copia_Informacoes.getAquiteturaDoSistema()<<endl;
    
    cout<<"\n";
    
    //FIM SAIDA DO CONSTRUTOR DE CÓPIA
    
    cout<<"----------------Construtor com atributos static e const--------------------\n"; 
    //CONST E STATIC
    Linux propriedade_Linux;
    cout<<"\nSaida do construtor com atributos static e const\n"<<endl;
    cout<<"Vesao atual do kernel linux e: "<<propriedade_Linux.getnumeroDoKernel()<<'\n';
    cout<<"Para checar o ip diggite: "<<propriedade_Linux.getChecaIP()<<'\n';
    cout<<"Data da criacao do Linux: "<<propriedade_Linux.getdataDeCriacaoDoSistema()<<'\n';
    Linux::showNumeroDeUsuarios();
   cout<<"\n";
    //FIM CONST E STATIC
    
    cout<<"----------------Copia do Construtor com atributos static e const--------------------\n"; 
    //SAÍDA DA CÓPIA DO CONSTRUTOR CONST E STATIC
    Linux copia_De_Propriedade=propriedade_Linux;
    cout<<"\nSaida da copia do construtor com atributos static e const\n"<<endl;
    cout<<"COPIA DE Vesao atual do kernel linux e: "<<copia_De_Propriedade.getnumeroDoKernel()<<'\n';
    cout<<"\n";
    cout<<"COPIA DE Para checar o ip diggite: "<<copia_De_Propriedade.getChecaIP()<<'\n';
    cout<<"\n";
    cout<<"COPIA DE Data da criacao do Linux: "<<copia_De_Propriedade.getdataDeCriacaoDoSistema()<<'\n';
    cout<<"\n";
    Linux::showNumeroDeUsuarios();
    
    cout<<"----------------Imprimindo array static--------------------\n"; 
    //IMPRIMINDO ARRAY STATIC
    Linux tabela_De_Versoes_Linux;
    cout<<"Tabela de versoes do linux:"<<'\n';
    cout<<tabela_De_Versoes_Linux.Mostra_versoes_Do_Linux()<<'\n';
    
    //Saida do metodo info da classe principal
    cout<<"\n";
    Linux *recebe_Classes_De_Composicao = new Linux();
    recebe_Classes_De_Composicao->info_Principal();
    cout<<"\n";
    
    //SAIDA DAS CLASSES DE COMPOSIÇÃO
    //Linux adf;
    //cout<<"Usuarios: "<<'\n';
    //cout<<adf.mostraUsuarios()<<'\n';
    //Linux *LC;
    //cout<<LC->infor();
    
    //EXIBE ARRAY DA CLASSE DISTRIBUIÇÕES
    cout<<"----------------Exibindo array da classe Distribuicao Linux--------------------\n";
    DistribuicoesLinux * Distribuicao_Linux = new DistribuicoesLinux();
    Distribuicao_Linux->info_Tabela_De_Distribuicoes();
    cout<<"\n";
    //FIM DISTRIBUIÇÕES
    
    //EXIBE CÓPIA ARRAY DA CLASSE DISTRIBUIÇÕES
    cout<<"----------------Exibindo copia do array da classe Distribuicao Linux--------------------\n"; 
    DistribuicoesLinux *CopiaDistribuicao = new DistribuicoesLinux();
    CopiaDistribuicao=Distribuicao_Linux;
    CopiaDistribuicao->info_Tabela_De_Distribuicoes();
    cout<<"\n";
    
    //EXIBE ARRAY DA CLASSE REPOSITORIO
    cout<<"----------------Exibindo array da classe Repositorio--------------------\n"; 
    Repositorio * programas = new Repositorio();
    programas->info_Respositorio();
    cout<<"\n";
    //Fim EXIBE ARRAY REPOSITORIO
    //EXIBE CÓPIA DO ARRAY DA CLASSE REPOSITÓRIO
    cout<<"----------------Exibindo copia do array da classe Repositorio Linux--------------------\n"; 
    Repositorio * copia_Programas = new Repositorio();
    
    copia_Programas=programas;
    
    copia_Programas->info_Respositorio();
    cout<<"\n";
    
    //Fim EXIBE CÓPIA ARRAY REPOSITORIO
    
    cout<<"----------------Ponteiro da classe--------------------\n"; 
    //PONTEIRO DA CLASSE
    Linux *ptrLinux = &informacoes_Usuario;//ponteiro aponta para o endereço do objeto info que esta localizado no contrutor info(nome do usuario)
    cout<<"Apontador da classe: \n";
    
    cout<<"Apontador para o nome do Usuario retorna: "<<ptrLinux->getNomeDoUsuario()<<'\n';
    cout<<"\n";
    //delete ptrLinux;
    
    cout<<"----------------Funcao com Ponteiro--------------------\n"; 
    //retorno da função ponteiro
    Linux funcionario1;
    const int tam=2;
    const string msg[tam]={"bom funcionario","mal funcionario"};
    string recado="E verdade que\t";
    funcionario1.caracteristicaFuncionario(&msg[0],&recado);
    
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
    
    
    
return 0;
}//end main
