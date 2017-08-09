#include <stdio.h>

int main (void)
{
	return 0;
}

double n;
scanf("%lf",&n);

int i;
scanf("%d",&i);

char c;
scanf("%c",&c);

char lugar[1000];

#define MAXN 1000
int nums[MAXN];

1- imprimir um valor de ponto flutuante com 3 casas decimais e pular uma linha

double d;
scanf("%lf",&d);
printf("%.3lf",d);

8- ler uma palavra do teclado

char palavra;
scanf("%s",&palavra);

10- coloque n números inteiros em um vetor;

int i;
int n[i];

11- ler uma frase

char frase;
scanf("%s",&c);
printf("%[^\n]",frase); // para comer a linha pulada >> "%[^\n]%*c"



