#include<iostream>
using namespace std;
int main()
{
    char cti;
    cout<<"Enter a character:";
    cin>>cti;
    if(cti>='a'&&cti<='z')
    {
        cout<<"Lowercase"<<endl;
    }
    else if(cti>='A'&&cti<='Z')
    {
        cout<<"Uppercase"<<endl;
    }
    else if(cti>='0'&&cti<='9')
    {
        cout<<"Digit"<<endl;
    }
    else
    {
        cout<<"Special Character"<<endl;
    }
    return 0;
}