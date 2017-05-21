#include <stdio.h>

int main (void)
{
	int Ia, Ib, Fa, Fb, i;

	scanf("%d %d %d %d\n", &Ia, &Ib, &Fa, &Fb);	
	
    if (Ib == Fb && Ia == Fa)
    {
    	i = 0;
    	printf("%d\n",i);
    }

    else if (Ia != Fa && Ib == Fb)
    {
    	i = 1;
    	printf("%d\n",i);
    }

    else if (Ia == Fa && Ib != Fb)
    {
    	i = 2;
    	printf("%d\n",i);
    }

    else 
    {
    	i = 1;
    	printf("%d\n",i);
    }

    
	return 0;
}