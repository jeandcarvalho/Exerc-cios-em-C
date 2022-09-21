#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct No
{
int chave;
struct No *prox;
}No;


void crialista(No **p)
{
  No *novo = (No *)malloc (sizeof(No));
  novo->chave=0;
  novo->prox=NULL;
  *p=novo;
}


void insereInicio(No *p, int k)
{
  No *novo = (No*) malloc(sizeof(No));

  if(novo)
  {
    novo->chave=k;
    novo->prox=p->prox;
    p->prox=novo;
  }
  else
  {
    printf("Erro ao alocar");
  }
}



int main() 
{
 No *p;

  crialista(&p);
  insereInicio(p, 2);
  insereInicio(p, 4);
  insereInicio(p, 1);

   

  limpar(&p);
  imprimir(p);
}



int main() 
{

}