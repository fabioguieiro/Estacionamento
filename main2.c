#include <stdio.h>
#include <stdio.h>
#include "deque.h"
int main()
{
    Deque *dq; //declara o deque
    dq=cria(); //cria o deque
    struct estacionamento est; //estrutura auxiliar para operacoes de insercao
    int menu,placa,c=0; //variaveis auxiliares
    do
    {
        printf("\t\t\t***Bem vindo ao Estacionamento***\n\n\n");
        if(vazio(dq)==1) printf("------No momento nosso estacionamento esta vazio-----\n"); //se o deque esta vazio, exibe essa mensagem ao usuario
        printf("digite 1 para estacionar\n");
        printf("digite 2 para retirar um carro\n");
        printf("digite 0 para sair da aplicacao  ");
        scanf("%d",&menu);
        switch(menu) //de acordo com a resposta do usuario faremos insercao ou remocao no deque
        {
        case 1 : //INSERCAO
            if(cheio(dq)==0)  //confere se o deque pode receber mais um elemento
            {
                printf("qual a placa do carro?");
                scanf("%d",&est.placa);
                printf("\n\n\n");
                InsFrente(dq,est); // insere elemento
            }
            else //caso o deque esteja cheio, exibe a seguinte mensagem
            {
                printf("\nnao e possivel estacionar o seu carro, o nosso estacionamento esta lotado\n\n");
                break;
            }
            printf("\no carro de placa %d acabou de estacionar \n\n",est.placa); //mensagem de aviso que um carro estacionou
            break;
        case 2 : //REMOCAO
            if(vazio(dq)==1) printf("\n\ndesculpe, mas o seu carro nao esta nesse estacionamento\n\n\n"); //confere se o deque nao esta vazio
            else if(tamanho(dq)==1) //caso o deque tenha apenas um elemento, estiramos ele sem maiores dificuldades
            {
                RemFrente(dq);
                printf("\num carro acabou de sair do estacionamento\n\n");
            }
            else //caso tenhamos mais de um elemento no deque, é possivel que aconteca rearranjo
            {
                printf("Qual a placa do seu carro ? ");
                scanf("%d",&placa);
                while(consultaIni(dq,placa)!=1) //consulta pela variavel placa, para saber qual carro retirar
                {
                    c++; //contador de quantos carros foram rearranjados
                    copia_dp(dq); //copiamos o elemento que esta impedindo o carro selecionado de sair
                    RemFrente(dq); //removemos do deque
                }
                printf("depois de retirar %d carros, retiramos o seu carro, tenha uma boa noite!\n",c);
                while(c!=0) //de acordo com o numero de carros que foram realocados, sabemos quantos carros reinserir no deque
                {
                    copia_pd2(dq); //copia do vetor para o deque
                    c--; //decremento do contador
                }
                printf("\nos carros foram realocados\n\n\n");
            }
            c=0; //set da variavel contadora para uma possivel proxima iteracao

            break;
        }
        system("pause");
        system("cls");
    }
    while(menu!=0);
    destroi(dq); //libera memoria do deque
}


