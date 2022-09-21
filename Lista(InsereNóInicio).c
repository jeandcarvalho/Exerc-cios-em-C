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



int main() 
{

}