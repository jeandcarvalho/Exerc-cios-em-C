#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct No
{
int chave;
struct No *prox;
}No;



void insereInicio(No **p, int k)
{
  No *novo = (No*) malloc(sizeof(No));

  if(novo)
  {
    novo->chave=k;
    novo->prox=*p;
  }
  else
  {
    printf("Erro ao alocar");
  }
}


No *remover(No **p, int k)
{
No *aux, *novo = NULL;

  if(*p)
  {
    if((*p)->chave == k)
    {
      novo = *p;
      *p = novo->prox;
    }
    else
    {
      aux = *p;
      while(aux->prox && aux->prox->chave != k)
        {
          aux = aux->prox;
        }
      if(aux->prox)
      {
        novo = aux->prox;
        aux->prox = novo->prox;
      }
    }
  }
  return novo;
}



int main() 
{

}