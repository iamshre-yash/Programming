#include <stdio.h>
int main()
{
	int m, n, i, j;
	int first[10][10], second[10][10], sum[10][10];
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

	printf("Sum of entered matrices:-\n");
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			sum[i][j] = first[i][j] + second[i][j];
			printf("%d\t", sum[i][j]);
		}
		printf("\n");
	}
	return 0;
}
