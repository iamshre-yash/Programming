#include<stdio.h>
#include<conio.h>
int factorial (int);
int main()
{
int number, i, fact = 1;
printf("Enter the positive number to find the factorial: ");
scanf("%d",&number);
// if number is negative show the error
if (number < 0)
printf("Error! You have entered negative number and Factorial for negative number does not exist.");
else
{
for(i = 1; i <= number; ++i)
{
fact *= i;              // factorial = factorial*i;
}
printf("Factorial of the given number %d is %d", number, fact);
}
printf("Using function: %d",number);
return 0;
}
//using Function
int factorial (int x){
	if (x==1 || x==0){
		return 1;
	}
	else{
		return x * factorial (x-1);
	}
}