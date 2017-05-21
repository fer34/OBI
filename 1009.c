#include <stdio.h>

int main (void)
{
	char nome;
	double salfixo,totvendas,juros,total;

	scanf("%s\n", &nome);

	scanf("%lf\n", &salfixo);

	scanf("%lf\n", &totvendas);

	juros = totvendas * 15 / 100;
    total = salfixo + juros;

    printf("TOTAL = R$ %.2lf\n",total);

    return 0;






}