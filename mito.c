#include <stdio.h>

int n, cont = 0;
int cdd[500][500];

int main(void)
{
	int i,j;

	scanf("%d", &n);

	for(i = 0; i <n; i++)
	{
		for(j = 0; j <n; j++)
		{
			scanf("%d", &cdd[i][j]);
		}
	}
	
	if (cdd[i][j] == cdd[i][j])
	{
	 	cont++;
	}
		
	printf("%d",cont);
	return 0; 
}