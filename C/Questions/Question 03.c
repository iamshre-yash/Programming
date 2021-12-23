#include <stdio.h>
int main()
{
    int age;
    printf("Enter Your Age:");
    scanf("%d", &age);
    (age >= 18) ? printf("You age is %d You are eligible for voting.",age) : printf(" You age is %d You are Not eligible for Voting.",age);
    return 0;
}
