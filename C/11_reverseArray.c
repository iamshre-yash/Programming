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
    int arr1[size];
    for(int i= 0; i< size; i++) {//copying arr to arr1
      arr1[i] = arr[i];
   }
    reverse(arr, size); //calling Function
    for (int i = 0; i < size; i++)
    {
        printf("|~|arr[%d]: %d <•> arr[%d]:%d |~|",i, arr1[i],i,arr[i]);
        putchar('\n');
    }
}