#include <stdio.h>
int main()
{
	int m, n, i, j, k, sum = 0;
	int first[10][10], second[10][10], product[10][10];
	printf("Enter the number of rows and columns of matrix\n");
	scanf("%d%d", &m, &n);

	printf("Enter the elements of first matrix\n");
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("first[%d] [%d] :", i, j);
			scanf("%d", &first[i][j]);
		}
		printf("\n");
	}

	printf("Enter the elements of second matrix\n");
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("second[%d] [%d] :", i, j);
			scanf("%d", &second[i][j]);
		}
		printf("\n");
	}

	printf("Multipication of Matrix:\n");
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			for(k=0; k<m; k++)
			{
				sum += first[i][k] * second[k][j];
			}
			product[i][j] = sum;
			sum=0;
		}
	}
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("%d\t",product[i][j]);
		}
		printf("\n");
	}
	
	
	
	return 0;
}
