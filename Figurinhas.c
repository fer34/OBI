#include <stdio.h>

int main (void)
{
	int qtd, i, f1, f2, r;

	scanf("%d", &qtd);

	for(i=0; i<qtd; i++)
	{
		scanf("%d%d", &f1, &f2);
		
		if(f1 > f2)
		{
			while(f2!=0)
			{
				r = f1%f2;
				f1 = f2;
				f2 = r;
			}
			printf("%d\n",f1);
		}
		else
		{
			while(f1!=0)
			{
				r = f2%f1;
				f2 = f1;
				f1 = r;
			}
			printf("%d\n",f2);
		}

	}
	return 0;
}