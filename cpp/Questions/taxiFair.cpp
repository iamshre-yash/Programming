#include <iostream>
using namespace std;

int main(void)
{
	int dis,amount;	
	cout<<"Enter the distance: ";
	cin>>dis;
	
	if(dis <= 5)
		amount = 50;
	else if(dis <= 15)
		amount = 50+(dis-5)*5;
	else if(dis <= 25)
		amount = 100+(dis-15)*4;
	else if(dis <= 50)
		amount = 140+(dis-25)*2;

	cout<<amount;
}
