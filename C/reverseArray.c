#include <stdio.h>
void reverse(int *arr, int size)
{
    int temp;
    for (int i = 0; i < (size / 2); i++)
    {
        temp = arr[i]; //storing in temp
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }
    
}
void main()
{
    int arr[]={1,2,3,4,5,6,7,8,9};
    int size = sizeof(arr)/sizeof(int);
    reverse(arr, size); //calling Function
    for (int i = 0; i < size; i++)
    {
        printf("arr[%d] :\t %d",i, arr[i]);
        putchar('\n');
    }
}