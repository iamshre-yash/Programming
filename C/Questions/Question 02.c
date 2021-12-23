#include <stdio.h>
int main(){
    int num;
    printf("Enter a Number To check Odd/Even: ");
    scanf("%d",&num);
    (num%2==0) ? printf("%d is Even number",num) : printf("%d is Odd Number",num);
    return 0;
}