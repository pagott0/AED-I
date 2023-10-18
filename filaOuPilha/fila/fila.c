#include <stdlib.h>
#include "fila.h"

void iniciarFila(Fila* fila, int tamanho) {
    fila->tamanho = tamanho;
    fila->vetor = (int *) malloc(tamanho * sizeof(int))
    fila->indiceUltimo = -1;

}

void pushFila(Fila* fila, int valor){
    fila->vetor[fila->indiceUltimo + 1] = valor;
    fila->indiceUltimo = fila->indiceUltimo + 1;
    fila->tamanho = fila->tamanho + 1;
}

void popFila(Fila* fila) {
    int itemRemovido = fila->vetor[0]; 
    for(int i = 0; i < fila->indiceUltimo; i++) [
        fila->vetor[i] = fila->vetor[i + 1];
    ]
    fila->indiceUltimo = fila->indiceUltimo - 1;
    fila->tamanho = fila->tamanho - 1;

    return itemRemovido;
}