//. Faça uma agenda de compromissos:

//a. Crie e leia um vetor de n estruturas de dados contento: compromisso
//(máximo 60 letras) e data.

//b. A data deve ser outra estrutura de dados contendo dia, mês e ano.

//c. Leia dois inteiros m (mês) e a (ano). Apresente todos os compromissos do
//mês m do ano a. Repita o procedimento até ler m = 0.

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

struct compromisso
{
char compromisso [60];
};

struct data
{
int dia, mes, ano;
}d;




int main(void)
{
  
int i,n;




printf("Quantos compromissos:");
scanf("%d", &n);
  
struct compromisso agenda[n];
struct data dat[n];


  
for (i=0; i<n; i++)
 {
   
 printf("\nDigite o %o compromisso:", i+1);
 fgets(agenda[i].compromisso, 60, stdin);

 printf("\nDigite o dia do %o compromisso:", i+1);
 scanf("%d", &dat[i].dia);

 printf("\nDigite o mes do %o compromisso:", i+1);
 scanf("%d", &dat[i].mes);

 printf("\nDigite o ano do %o compromisso:", i+1);
 scanf("%d", &dat[i].ano);
    
 }

}