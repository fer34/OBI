#include <stdio.h>

int main (void)
{
	int num,hrs;
	double vph,salario;

	scanf("%d\n", &num);

	scanf("%d\n", &hrs);

	scanf("%lf\n", &vph);

	salario = vph*hrs;

	printf("NUMBER = %d\n", num);

	printf("SALARY = U$ %.2lf\n", salario);

	return 0;


}