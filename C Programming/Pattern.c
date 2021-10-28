#include <stdio.h>
#include <conio.h>
void main()
{
    int i, j, k;
    clrscr();
  //  printf("Pattern 1\n");
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf(" * ");
        }
        printf("\n");
    }
   // printf("Pattern 2\n");
    for (i = 1; i <= 5; i++)
    {
        for (j = 5; j >= i; j--)
        {
            printf(" ");
        }
        for (k = 1; k <= i; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    //printf("Pattern 3");"
    for (i = 1; i <= 5; i++)
    {
        for (j = 5; j >= i; j--)
        {
            printf("*");
        }
        for (k = 1; k <= i; k++)
        {
            printf(" ");
        }
        printf("\n");
    }

    getch();
}