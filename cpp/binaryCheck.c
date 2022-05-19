#include <iostream>
#include <string>
using namespace std;

class Binary{
    private:
    string s;
    public:
    void read(void);
    void chk_bin(void);
    void ones (void);
    void Display (void);
};

void Binary :: read(void){
    cout<<"Enter num: "<<endl;
    cin>>s;
}
void Binary :: chk_bin(void){
    for(int i=0; i<s.length();i++){
        if(s.at(i)!='0' && s.at(i)!='1')
        {
            cout<<"Not a binary number"<<endl;
            exit(1);
        }
    }
}
void Binary :: ones(void){
    for(int i=0;i<s.length();i++){
        if(s.at(i)=='0')
         s.at(i) = '1';
        else if
(s.at(i)=='1')
        s.at(i)='0';
    }
}
void Binary :: Display (void)
{
    for(int i=0;i<s.length();i++){
        cout<<s.at(i);
    }
    cout<<endl;
}
    

int main(int argc, char *argv[])
{
	Binary one;
	one.read();
	one.chk_bin();
	one.Display();
	one.ones();
	one.Display();
	
}
