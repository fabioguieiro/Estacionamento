
/*#include <stdio.h>
#include <stdio.h>
#include "deque.h"
int main(){
    Deque *dq;
    dq=cria();
    struct estacionamento est;
    int menu,placa,c=0;
    do{
        printf("\t\t\t***Bem vindo ao Estacionamento***\n\n\n");
        if(vazio(dq)==1) printf("------No momento nosso estacionamento esta vazio-----\n");
        printf("digite 1 para estacionar\n");
        printf("digite 2 para retirar um carro\n");
        printf("digite 0 para sair da aplicacao  ");
        scanf("%d",&menu);
        switch(menu){
            case 1 :
                if(cheio(dq)==0){
                    printf("qual a placa do carro?");
                    scanf("%d",&est.placa);
                    printf("\n\n\n");
                    InsFrente(dq,est);
                }else{
                     printf("\nnao e possivel estacionar o seu carro, o nosso estacionamento esta lotado\n\n");
                     break;
                }
                printf("\no carro de placa %d acabou de estacionar \n\n",est.placa);
                break;
            case 2 :
                if(vazio(dq)==1) printf("\n\ndesculpe, mas o seu carro nao esta nesse estacionamento\n\n\n");
                else if(tamanho(dq)==1){
                    RemFrente(dq);
                    printf("\num carro acabou de sair do estacionamento\n\n");
                }else {
                    printf("Qual a placa do seu carro ? ");
                    scanf("%d",&placa);
                    while(consultaIni(dq,placa)!=1){
                        c++;
                        copia_dp(dq);
                        RemFrente(dq);
                    }
                    printf("depois de retirar %d carros, retiramos o seu carro, tenha uma boa noite!\n",c);

                    while(c!=0){
                        copia_pd(dq);
                        c--;
                    }
                    printf("\nos carros foram realocados\n\n\n");
                }

                break;
        }
    }while(menu!=0);
    destroi(dq);
}*/
