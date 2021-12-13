#include <stdio.h>
int main()
{
    FILE *ptr;
    int c = 0;
    char name [16];
    int salary;
    next:
    printf("Enter Name: ");
    scanf("%s" ,name);
    printf("Enter Salary: ");
    scanf("%d", &salary);
    ptr = fopen("output.txt","a");
    for(int i=0;i<1;i++){
        fprintf(ptr,"%s , %d\n",name,salary);
    }
    printf("Enter 1 to Continue\n Enter 0 to End ");
    scanf("%d",&c);
    if(c == 1){
        goto next;
    }
    else if(c == 0)
            return 0;
}