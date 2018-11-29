
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "deque.h"
int Q=0;
struct Deque{ //estrutura do deque
    int inicio,fim,qtd;
    struct estacionamento dados[10];
};
struct estacionamento vetor[10];
/*
struct pilha{ //estrutura da pilha
    int qtd;
    struct estacionamento dados[10];
};



 Pilha* cria_pilha(){
    Pilha *pi;
    pi = (Pilha*)malloc(sizeof(struct pilha));
    return pi;
}

void destroi_pilha (Deque *dq){
    free(dq);
}
int vazio_pilha(Pilha * pi){
    if(pi==NULL || pi->qtd==0) return 1;
    return 0;
}
int insere_pilha (Pilha* pi,struct estacionamento aux){
    printf("\npassou aqui O\n");
    if(pi==NULL) return 0;
    printf("\npassou aqui P\n");
    pi->dados[pi->qtd]=aux;
    printf("\npassou aqui Q\n");
    pi->qtd++;
    printf("\npassou aqui R\n");
    return 1;
}
int remove_pilha(Pilha *pi){
    if(pi==NULL || pi->qtd==0) return 0;
pi->qtd--;
return 1;
}
*/
int copia_pd (Deque *dq){ //copia o deque para vetor temporario
     struct estacionamento est;
     est= vetor[Q];
     InsFrente(dq,est);
     Q--;
     return 1;
}
int copia_pd2 (Deque *dq){ //passa do vetor pro FIM do deque
     struct estacionamento est;
     est= vetor[Q];
     InsTras(dq,est);
     Q--;
     return 1;
}
int copia_dp (Deque* dq){ // copia do vetor pro inicio do deque
    int i;
    if(Q==0){
        for(i=0;i<10;i++){
            vetor[i].placa = -1;
        }
    }
    vetor[Q]= dq->dados[dq->inicio];
    Q++;
    return 1;
}

Deque* cria(){ //criador do deque
    Deque *dq;
    dq = (Deque*)malloc(sizeof(struct Deque));
    if(dq!=NULL){
    dq->inicio=0;
    dq->fim=0;
    dq->qtd=0;
    }
    return dq;
}
void destroi (Deque *dq){ //libera a memoria alocada pelo deque
    free(dq);
}
int tamanho (Deque *dq){ //obtem o tamanho do deque
    if(dq==NULL) return 0;
    else return dq->qtd;
}
int vazio (Deque *dq){ // retorna 1 se o deque esta vazio
    if(dq==NULL||dq->qtd==0) return 1;
    else return 0;
}
int cheio (Deque *dq){ //retorna 1 se o deque esta cheio
    if(dq->qtd==10) return 1;
    else return 0;
}
int consultaIni(Deque* dq, int placa){ //consulta a variavel placa no inicio do deque
    if(dq == NULL || dq->qtd == 0)
        return 0;
    if(dq->dados[dq->inicio].placa==placa) return 1;
    return 0;

}

int InsFrente(Deque* dq,struct estacionamento est){ //insere elemento no inicio do deque
    if(dq==NULL || dq-> qtd ==10)
        return 0;
    dq->inicio--;
    if(dq->inicio < 0)
        dq->inicio = 10-1;
    dq->dados[dq->inicio] = est;
    dq->qtd++;
    return 1;
}
int InsTras(Deque* dq,struct estacionamento est){ //insere elemento no fim do deque
    if(dq == NULL || dq-> qtd == 10)
        return 0;
    dq -> dados[dq->fim] = est;
    dq -> fim = (dq->fim+1)%10;
    dq->qtd++;
    return 1;
}
int RemFrente(Deque * dq){ //remove elemento da frente do deque
    if(dq==NULL || dq->qtd ==0)
        return 0;
    dq-> inicio = (dq->inicio+1)%10;
    dq->qtd--;
    return 1;
}
int RemTras(Deque * dq){ //remove elemento do fim do deque
    if(dq==NULL || dq->qtd ==0)
        return 0;
    dq -> fim--;
    if(dq->fim<0)
        dq->fim = 10-1;
    dq -> qtd--;
    return 1;
}
