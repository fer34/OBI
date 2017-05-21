#include <stdio.h>

int main (void)
{
	int cod1, qtd1, cod2, qtd2;
	double v1, v2, valor;

	scanf("%d %d %lf\n", &cod1, &qtd1, &v1);
	scanf("%d %d %lf\n", &cod2, &qtd2, &v2);

	valor = (qtd1 * v1) + (qtd2 * v2);
	
	printf("VALOR A PAGAR: R$ %.2lf\n",valor);


	return 0;
}
