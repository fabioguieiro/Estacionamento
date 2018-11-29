#ifndef DEQUE_H_INCLUDED
#define DEQUE_H_INCLUDED


struct estacionamento{
    int C,P,placa;
};
typedef struct Deque Deque;

/*struct auxiliar{
    int C,P,placa;
};
typedef struct pilha Pilha;
*/

//cabeçalho das funcoes
Deque* cria();
void destroi (Deque *dq);
int tamanho (Deque *dq);
int vazio (Deque *dq);
int cheio (Deque *dq);
int consultaIni(Deque* dq, int placa);
int consultaFim(Deque* dq, struct estacionamento *est);
int InsFrente(Deque* dq,struct estacionamento est);
int InsTras(Deque* dq,struct estacionamento est);
int RemFrente(Deque * dq);
int RemTras(Deque * dq);
int copia_pd (Deque *dq);
int copia_dp (Deque* dq);
int copia_pd2 (Deque *dq);

#endif // DEQUE_H_INCLUDED
