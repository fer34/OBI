#include <stdio.h>

int main (void)
{
	double A,B,MEDIA;

	scanf("%lf\n", &A);

	scanf("%lf\n", &B);

	MEDIA = (A * 3.5) + (B * 7.5) / 11;

	printf("MEDIA = %.5lf\n",MEDIA); 

	return 0;
}