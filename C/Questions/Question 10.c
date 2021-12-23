#include <stdio.h>
void swap(int,int);
int main()
{
    int x,y;
    printf("Enter first number:");
    scanf("%d",&x);
    printf("Enter Second number :");
    scanf("%d",&y);
    printf("Outside Swap function\n Before swap first number:%d\n Before swap second number:%d\n",x,y);
    swap(x,y);
    
    
    
    return 0;
}
void swap(int num1,int num2){
    int temp=0;
    temp= num1;
    num1= num2;
    num2= temp;
     printf("Inside Swap function\n After swap first number:%d\n After swap second number:%d",num1,num2);
}