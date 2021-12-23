#include <stdio.h>
int main()
{
    int i, sum = 0;
    while (i <= 20)
    {
        sum += i;
        i++;
    }
    printf("sum of first 20 natural number is :%d\n", sum);
    return 0;
}