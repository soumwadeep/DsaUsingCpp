#include<iostream>
using namespace std;
int main()
{
    double num1, num2;
    char choice;
    cout<<"Welcome To My Calculator!"<<endl;
    cout<<"Type 2 Nos With It's Operators In Between Them:"<<endl;
    cout<<"For Example: 1+2\n(Available:+,-,^,*,/)"<<endl;
    cin>>num1>>choice>>num2;
    switch(choice)
    {
        case '+':
            cout<<num1<<" + "<<num2<<" = "<<num1+num2<<endl;
            break;
        case '-':
            cout<<num1<<" - "<<num2<<" = "<<num1-num2<<endl;
            break;
        case '*':
            cout<<num1<<" * "<<num2<<" = "<<num1*num2<<endl;
            break;
        case '/':
            cout<<num1<<" / "<<num2<<" = "<<num1/num2<<endl;
            break;
        // case '^':
        //     cout<<num1<<" ^ "<<num2<<" = "<<num1**num2<<endl;
        //     break;
        default:
            cout<<"Invalid Choice"<<endl;
    }
    return 0;
}