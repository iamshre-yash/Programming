#include <iostream>
using namespace std;



int main (void)
{
	int a,b,temp;
	cout<<"Enter Two Numbers:";
	cin>>a>>b;
	cout<<"You Enter a: "<<a<<" b: "<<b<<endl;

	//Swap Two Numbers...
	temp = a;
	a = b;
	b = temp;
	
	cout<<"Swap with Temprary variable:\n a: "<<a<<" b: "<<b<<endl;
	
	//Swap without Temporary Variables
	a = a + b;
	b = a - b;
	a = a - b;
	
	cout<<"Swap without Temprary variable:\n a: "<<a<<" b: "<<b<<endl;

}
