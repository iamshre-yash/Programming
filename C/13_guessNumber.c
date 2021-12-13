#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int number, guess, num=1;
    srand(time(0));
    number = rand()%50 +1;
    
    do{
        printf("Guess the number 1 to 50\v");
        scanf ("%d",&guess);
        if (guess>number)
        printf ("\tlower Number\n");
        else if(guess<number)
        printf ("\thigher Number\n");
        else printf ("You Guess it in %d Attempt\n",num);
        num++;
    } while (guess!=number);
    return  0;
}