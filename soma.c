#include <stdio.h>

int soma(int x,int y);

int main (void)
{
	int a,b;

	scanf("%d%d", &a,&b);
	printf("%d\n", soma(a,b));

	return 0;
}
	int soma(int x,int y)
	{
		if(y==0) return x;
		else 
			return soma(x+1,y-1);
	}


