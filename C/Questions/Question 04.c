#include <stdio.h>
int main(){
    int num1,num2,num3;
     printf("Enter Three Number :");
    scanf("%d%d%d",&num1,&num2,&num3);
    if(num1>num2){
        if(num1>num3){
            printf("%d is largest among three numbers.",num1);
            
        }
    }
    else if(num2>num3){
        printf("%d is largest among three numbers",num2);
    }
    else{printf("%d is largest among three numbers",num3);
    }
    
    return 0;
}