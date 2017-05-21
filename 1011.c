#include <stdio.h>

int main (void)
{
	double raio, raio2, volume;

	scanf("%lf\n", &raio);

    raio2 = raio * raio * raio;
	volume = (4.0 / 3) * 3.14159 * raio2;

	printf("VOLUME = %.3lf\n",volume);


	return 0;
}