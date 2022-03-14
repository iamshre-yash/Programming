#include <iostream>
using namespace std;
int factorial(int n);

int main(void)
{
    int n, r = 3;
    cin >> n;
    int ncr = factorial(n) / (factorial(r) * factorial(n - r));

    cout << factorial(n);
}

int factorial(int n)
{
    int sum = 1;
    for (int i = 2; i <= n; i++)
    {
        sum *= i;
    }

    return sum;
}