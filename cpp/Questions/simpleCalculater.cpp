#include <iostream>
using namespace std;

int main (void)
{
	int fnum,snum,sum;
	char opt;

	cout<<"Enter first number: ";
	cin>>fnum;
	cout<<"Enter Operater (+,-,*,/) :";
	cin>>opt;
	cout<<"Enter second num: ";
	cin>>snum;

	switch(opt)
	{
		case '+':
			{
				sum = fnum+snum;
				cout<<sum;
				break;
			}
		case '-':
			{
				sum = fnum-snum;
				cout<<sum;
				break;
			}
		case '*':
			{
				sum= fnum*snum;
				cout<<sum;
				break;
			}
		case '/':
			{
				if (snum == 0){
					cout<<"Divisor cannot be zero. Please enter another value ";
                			cin>>snum;
				}
				sum = fnum/snum;
				cout<<sum;
				break;
			}
		default:
			cout<<"Wronge Operter...";

	}
}
