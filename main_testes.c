
#include <stdio.h>
#include <stdlib.h>
#include "deque.h"
/*
int main()
{
    int menu,x;
    Deque* dq;
    struct estacionamento est;
    do{
    printf("\t\t\t**Bem vindo ao programa deque**\n\n\n");
    printf("o que deseja fazer?\n");
    printf("1-criar deque\n");
    printf("2-inserir no comeco\n");
    printf("3-inserir no fim \n");
    printf("4-retirar do fim\n");
    printf("5-retirar do comeco\n");
    printf("6-O deque esta vazio?\n");
    printf("7-O deque esta cheio?\n");
    printf("8-Consulta no inicio do deque\n");
    printf("9-Consulta no fim do deque\n");
    printf("10-obter o tamanho do deque\n");
    printf("11-imprimir deque\n");
    printf("12-destruir deque\n");

    printf("0-SAIR |");
    scanf("%d",&menu);
    switch(menu){
        case 1:
            dq=cria();
            break;
        case 2:
            printf("entre com a placa");
            scanf("%d",&est.placa);
            printf("entre com a partida");
            scanf("%d",&est.P);
            printf("entre com a chegada");
            scanf("%d",&est.C);
            InsFrente(dq,est);
            if(x==1) printf("insercao feita com sucesso!");
            else printf("insercao falhou :( ");
            break;
        case 3:
             printf("entre com a placa");
            scanf("%d",&est.placa);
            printf("entre com a partida");
            scanf("%d",&est.P);
            printf("entre com a chegada");
            scanf("%d",&est.C);
            InsTras(dq,est);
            if(x==1) printf("insercao feita com sucesso!");
            else printf("insercao falhou :( ");
            break;
        case 4:
            RemFrente(dq);
            if(x==1) printf("remocao feita com sucesso!");
            else printf("remocao falhou :( ");
            break;
        case 5:
            RemTras(dq);
            if(x==1) printf("remocao feita com sucesso!");
            else printf("remocao falhou :( ");
            break;
        case 6:
            vazio(dq);
            break;
        case 7:
            cheio(dq);
            break;
        case 8:
            printf("entre com a placa");
            scanf("%d",&est.placa);
            printf("entre com a partida");
            scanf("%d",&est.P);
            printf("entre com a chegada");
            scanf("%d",&est.C);
            x=consultaIni(dq,&est);
            if(x==1) printf("consulta feita com sucesso!");
            else printf("consulta falhou :( ");
            break;
        case 9:
            printf("entre com a placa");
            scanf("%d",&est.placa);
            printf("entre com a partida");
            scanf("%d",&est.P);
            printf("entre com a chegada");
            scanf("%d",&est.C);
            x=consultaFim(dq,&est);
            break;
        case 10:
            tamanho(dq);
            break;
        case 11:
            //imprime();
            break;
        case 12:
            destroi(dq);
            break;
        default:
            printf("opcao invalida!!");
            break;


    }
    }
    while(menu!=0);
}

*/
