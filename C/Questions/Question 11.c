#include <stdio.h>
void swap(int *num1, int *num2);
int main()
{
        int x,y;
    printf("Enter first number:");
    scanf("%d",&x);
    printf("Enter Second number :");
    scanf("%d",&y);
    printf("Inside main Before swap\n First number:%d\n Second number:%d\n",x,y);
    swap(&x,&y);
    printf("Inside main After swap function\n First number:%d\n Second number:%d\n",x,y);
    
    
    return 0;
}
void swap(int *num1,int *num2){
    int temp=0;
    temp= *num1;
    *num1= *num2;
    *num2= temp;
}