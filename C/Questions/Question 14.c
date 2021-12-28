#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of arr:");
    scanf("%d", &n);
    int arr[n], sum = 0;
    for (int i = 0; i < n; i++)
    {
        printf("Enter arr[%d]:", i);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("Sum of arr[]: %d" ,sum);

    return 0;
}