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


No *ordemCrescente(No *p) {

    No *paux = p;
    No *t;
    int c;

    if (p == NULL || p->prox == NULL)
        return NULL;

    while (paux != NULL) {
        t = paux->prox;
        while (t != NULL) {
            if (paux->chave > t->chave) {
                c = paux->chave;
                paux->chave = t->chave;
                t->chave = c;
            }
            t = t->prox;
        }
        paux = paux->prox;
    }

    return p;
}


int main() 
{

}