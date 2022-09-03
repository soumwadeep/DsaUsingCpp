#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"a:";
    cin>>a;
    if(a==0||a>0)
    {
        cout<<"Positive"<<endl;
    }
    else
    {
        cout<<"Negative"<<endl;
    }
    return 0;
}