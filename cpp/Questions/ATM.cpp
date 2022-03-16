#include <iostream>
using namespace std;

struct ATM
{
    long long acNo;
    int ifsc;
    int pin;
    int bal;
    int name[25];
};

int checkPin(ATM*);
void welcome(ATM*);
 
int main(void){
    int check = 1;
    struct ATM user[2];
    user[0] = {10001, 1111, 3333, 2500};
    user[1] = {10002, 1111, 4444, 5000};
   
    do
    {
        int pin;
        cout << "Please Insert your Atm card.\n";
        cout << "ENTER YOUR SECRET PIN NUMBER: ";
        cin >> pin;
        for (int i = 0; i < 2; i++)
        {
            if (user[i].pin == pin)
            {
                welcome(&user[i]);
            }
            
        }
        break;
    } while (check);
    printf("\n\n THANKS FOR USING OUR ATM SERVICE\n"); 
}



void welcome(ATM *user){
    int choice;
    cout<<"********Welcome to ATM Service**************\n";
    cout<<"1. Check Balance\n2. Withdraw Cash\n3. Deposit Cash\n4. Quit\n";
    cout<<"******************?**************************?*\n\n";
	cout<<"Enter your choice: ";
    cin>>choice;

    switch (choice)
    {
    case 1:
        if(checkPin(user)){
        cout<<user->bal;}
        break;
    case 2:
        int withdraw;
        cout<<"ENTER THE AMOUNT TO WITHDRAW: ";
        cin>>withdraw;
        if (withdraw % 100 != 0)
			{
				cout<<"\n PLEASE ENTER THE AMOUNT IN MULTIPLES OF 100";
			}
		else if (withdraw >(user->bal - 500))
			{
				printf("\n INSUFFICENT BALANCE");
			}
        else
			{
                if(checkPin(user)){
                cout<<user->bal;
				user->bal -= withdraw;
				cout<<"\n\n PLEASE COLLECT CASH";
				cout<<"\n YOUR CURRENT BALANCE IS "<<user->bal;}
			}
        break;
    case 3:
        int deposit;
        if(checkPin(user)){
            cout<<"\n ENTER THE AMOUNT TO DEPOSIT: ";
            cin>>deposit;
            
            user->bal += deposit;
            cout<<"YOUR BALANCE IS "<<user->bal;}
        break;


    
    default:
        break;
    }

}

int checkPin(ATM *user){
    int pin;
    for (int i = 0; i < 3; i++)
    {
        cout << "ENTER YOUR SECRET PIN NUMBER: ";
        cin >> pin;
        if (user->pin == pin )
        {
            return 1;
        }
        cout << "Invalid pin.\nPlease Enter again:\n";
    }
    
    
    return 0;
}