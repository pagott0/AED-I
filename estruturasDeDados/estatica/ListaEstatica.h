#ifndef LISTAESTATICA_H
#define LISTAESTATICA_H

#define MAXTAM 1000

#define SEM_ERRO 0
#define POS_INVALIDA -1
#define NAO_ENCONTROU -2
#define LISTA_CHEIA -3

typedef int TipoChave;
typedef int TipoApontador;

typedef struct {
  TipoChave chave;
  //char nome[50]
} TipoItem;

typedef struct{
  TipoItem itens[MAXTAM];
  TipoApontador ultimo;
} TipoLista;

void CriaLista(TipoLista *L); //passa como referencia pq vai alterar ele
int Insere(TipoLista *L, TipoItem I);
int Remove(TipoLista *L, TipoChave C);
int Pesquisa(TipoLista *L, TipoChave C);

char ListaVazia(TipoLista *L);
char ListaCheia(TipoLista *L);

void ImprimeLista(TipoLista *L);

#endif