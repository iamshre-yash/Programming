#include <stdio.h>

void table(int *arr ,int num){
    for(int i=1;i<=10;i++){
        arr[i] = num*i;
        printf("%d * %d = %d\n",num,i,arr[i]);
    }
}

int main()
{
    int num ,arr[10];
    a:
    printf("Enter the Number to Print the Table:\t");
    scanf("%d",&num);
    table (arr,num);
    goto a;
    return  0;
}