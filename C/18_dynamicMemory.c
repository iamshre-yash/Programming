#include <stdio.h>
#include <stdlib.h>
void malloc();
void calloc();
int main()
{
   // malloc();
    calloc();
    return 0;
}
void malloc()
{
    int *ptr;
    ptr = (int *)malloc(6 * sizeof(int));
    for (int i = 0; i < 6; i++)
    {
        printf("Enter the value Of %d elements:\n", i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < 6; i++)
    {
        printf("The Value of %d element is :%d\n", i, ptr[i]);
    }
    free(ptr);
}
void calloc()
{
    int *ptr;
    int n;
    printf("How many Value Do you want to enter:");
    scanf("%d", &n+1);
    ptr = (int *)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value Of %d elements:\n", i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("The Value of %d element is :%d\n", i, ptr[i]);
    }
   // ptr = realloc(ptr, 20);
    free(ptr);
}
