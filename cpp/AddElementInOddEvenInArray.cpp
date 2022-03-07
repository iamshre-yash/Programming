#include <iostream>
using namespace std;

int main (void)
{
	int  arr[10] = {1,2,3,4,5,6,7,8,9,10};
	int start = 0, end = 9;
	int flag = 0;
	int i = 0, sum;

	cout<<"Add Elements in the Odd/Even Plases in Array:\n 1 for Odd\n 2 for Even\n:";
	cin>>flag;

	if (flag==0)
	{
		for(;i<end;i++)
			sum+=arr[i];
	}
	if (flag==1)
	{
		
		if(start%2==0)
			i = start;
		else
			i=start+1;
		for(;i<=end;i+=2)
			sum+=arr[i];
	}
	if(flag==2)
	{
		if(start%2!=0)
			i= start;
		else
			i=start+1;
		for(;i<=end;i+=2)
			sum+=arr[i];
	}
	cout<<sum;
}
