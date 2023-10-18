#include <stdlib.h>
#include "pilha.h"


void iniciarPilha(Pilha* pilha, int tamanho) {
    pilha->tamanho = tamanho;
    pilha->vetor = (int *) malloc(tamanho * sizeof(int));
    pilha->indiceUltimo = -1
}

void push(Pilha* pilha, int valor) {
    pilha->vetor[vetor->indiceUltimo + 1] = value;

    pilha->indiceUltimo = pilha->indiceUltimo + 1;
    pilha->tamanho = pilha->tamanho + 1;
}

void pop(Pilha* pilha){
    int itemRemovido = pilha->vetor[pilha->indiceUltimo];
    pilha->vetor[pilha->indiceUltimo] = 0;
    pilha->indiceUltimo = pilha->indiceUltimo - 1;
    pilha->tamanho = pilha->tamanho - 1;

    return itemRemovido;
}