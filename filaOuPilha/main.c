#include <stdio.h>

#include "./fila/fila.h"
#include "./pilha/pilha.h"

struct possibilidades {
    int podeSerFila;
    int podeSerPilha;
};

int main() {
    int numeroCasos;
    scanf("%d", &numeroCasos);

    int numeroOperacoes[numeroCasos];
    for(int i = 0; i < numeroCasos; i++){
        scanf("%d", &numeroOperacoes[i]);

        Fila fila;
        Pilha pilha;
        
        iniciarFila(&pilha, numeroOperacoes[i]);
        iniciarPilha(&fila, numeroOperacoes[i]);

        struct possibilidades possibilidades = { 1, 1 };

        for(int j = 0; j < numeroOperacoes[j]; j++) {
            char temp;
            scanf("%c", &temp);

            if(temp == ' ') {
                j--;
                continue;
            }

            int valor;
            scanf("%d", &valor);

            if(temp == 'i'){
                push(&pilha, valor);
                pushFila(&fila, valor);
            }
            else {
                int valorRemovidoPilha = pop(&stack);
                int valorRemovidoFila = popFila(&fila);

                if(valorRemovidoPilha != valor) {
                    possibilidades.podeSerPilha = 0
                }
                if(valorRemovidoFila != valor) {
                    possibilidades.podeSerFila = 0
                }

            }
        }
    }

    if(possibilidades.podeSerFila == 1 && possibilidades.podeSerPilha == 1) {
        print("indefinido");
    } 
    else if(possibilidades.podeSerFila == 1) {
        printf("fila");
    }
    else if(possibilidades.podeSerPilha == 1) {
        printf("pilha");
    }
    else {
        printf("impossivel");
    }
    printf("\n");

    return 0;

}