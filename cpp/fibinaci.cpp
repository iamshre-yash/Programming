#include <iostream>
using namespace std;

int main (void)
{
	int first = 0, second = 1, next, num;

	cout << "Enter the num to print:";
	cin >> num;
	cout << first << " "<< second << " ";
	for (int i = 0;i<num;i++)
	{
		next = first + second;
		cout << next << "  ";
		first = second;
		second = next;
	}
}

