#include <stdio.h>

int v[10005];

int main()
{
	int n, maior = 0;

	scanf("%d",&n);
	for(int i=0; i<n; i++)
	{
		scanf("%d", &v[i]);
	}
	
	for(int i=0; i<n; i++)
	{
		if(v[i] > v[i-1])
			maior = v[i];
	}

	printf("%d", maior);

	return 0;
}