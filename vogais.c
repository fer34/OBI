#include <string.h>
#include <math.h>

int main (void)
{
	char frase;

	scanf("%c",&frase);

    int cont = 0;
    int i;

    for (i = 0; i < frase.leight; i++)
    {
      if (frase[i] == 'a' || frase[i] == 'e' || frase[i] == 'i' || frase[i] == 'o' || frase[i] == 'u')
      {
       cont++;
      }
    }
    printf("%d\n",cont);
	return 0;
}