#include <iostream>
using namespace std;

void display(int a[10], int size)
{
	for(int i=0;i<size;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<"\n";
}

void delete_item(int a[10],int size, int x)
{
	int i,flag=0;
	for(i=0;i<size;i++)
	{
		if(a[i] == x)
		{
			flag = 1;
			break;
		}
	}
	if(flag == 1)
	{
		for(int k=i;k<size-1;k++)
		{
			a[k] = a[k+1];
		}
		a[size-1]=0;
	}else{
		cout<<"Value is not Found!";
	}
}
int main (void)
{
	int x, a[10] = {1,2,3,4,5,6,7,8,9,10};
	display(a,10);
	cout<<"Enter the number to Remove: ";
	cin>>x;
	delete_item(a,10,x);
	display(a,10);
	
}
		
