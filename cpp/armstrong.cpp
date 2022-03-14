#include <iostream>
#include <math.h>
using namespace std;

int main(void)
{
    int n, sum = 0;
    cin >> n;
    int newn = n;
    while (n > 0)
    {
        sum += pow(n % 10, 3);
        n = n / 10;
    }

    if (sum == newn)
    {
        cout << "Armstrong Number!";
    }
    else
    {
        cout << "Not a Armstrong Number";
    }
}