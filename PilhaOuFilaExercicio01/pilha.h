#ifndef PILHA_H
#define PILHA_H

#define NO_VAZIO -2
#define ERRO_CHEIA -1
#define NAO_ENCONTROU 0
#define SUCESSO 1

typedef int t_chave;

typedef struct
{
	t_chave chave;
	char nome[50];
} t_elemento;

typedef struct t_no *t_apontador;
typedef struct t_no
{ // cada nó contém um objeto de determinado tipos e o endereço da célula seguinte
	t_elemento elemento;
	t_apontador proximo;
} t_no;

typedef struct
{
	t_apontador topo;
} t_pilha;

int criar(t_pilha *pilha);
int empilhar(t_pilha *pilha, t_elemento elemento);
int desempilhar(t_pilha *pilha);
t_no topo(t_pilha *pilha);
int vazia(t_pilha *pilha);
int cheia(t_pilha *pilha);
void imprimir(t_pilha *pilha);
int contar(t_pilha *pilha);

#endif