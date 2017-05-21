#include <stdio.h>

int main (void)
{
	double A,B,C,MEDIA,cont1,cont2,cont3;

	scanf("%lf\n",&A);

	scanf("%lf\n",&B);

	scanf("%lf\n",&C);

	cont1 = A*2;

	cont2 = B*3;

	cont3 = C*5;

	MEDIA = (cont1 + cont2 + cont3) / 10;

	printf("MEDIA = %.1lf\n",MEDIA);

	return 0;


}