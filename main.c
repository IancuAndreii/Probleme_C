#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main()
{
	int m, n,i,j;
	float v[10][40];
	float min[40];
	printf("m=");
	scanf("%i", &m);
	printf("n=");
	scanf("%i", &n);
	for (i=0; i<m; i++)
		for (j = 0; j < n; j++)
		{
			printf("v[%i][%i]=", i, j);
			scanf("%f", &v[i][j]);
		}
	for (j = 0; j < n; j++)
	{
		min[j] = v[0][j];
		for (i = 1; i < m; i++)
			if (v[i][j] < min[j])
				min[j] = v[i][j];
	}
	for (i = 0; i < n; i++)
		printf("%.2f ", min[i]);
}