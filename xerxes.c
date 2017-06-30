#include <stdio.h>

int main (void)
{
	int n, d, x, i, contd = 0, contx = 0;

	scanf("%d\n",&n);

	for(i=0; i < n; i++)
	{
		scanf("%d %d",&d,&x);		
	
	if(x==d+1 || x==d+2 || d==x+3 || d==x+4)
		{ 
			contd++;
		}
		else
		{
			contx++;
		}
	}	

	if(contd > contx)		
		{
 			printf("dario");
 		}
 
	else
		{
			printf("xerxes");
		}

    return 0;
}
