#include <iostream>
using namespace std;


void MAX(int arr[10])
{
	max = arr[0];
	for(int i=0;i<10;i++)
	{
		if(arr[i]>max)
		{
			max = arr[i];
		}
	}
	cout<<"MAX: "<<max;
}

oid MAX(int arr[10])
{
	max = arr[0];
	for(int i=0;i<10;i++)
	{
		if(arr[i]>max)
		{
			max = arr[i];
		}
	}
	cout<<"MAX: "<<max;
}






int main(void)
{
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	displal(arr);
	max(arr);
	min(arr);
}

