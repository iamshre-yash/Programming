#include <stdio.h>
int add(int i, int j)
{
    return i+j;
}

    int main()
    {
        int a,b,sum;
        printf("Enter two number:");
        scanf("%d %d",&a,&b);
        sum = add(a,b);
        printf("Sum of %d and %d is %d",a,b,sum);
        return 0;
    }