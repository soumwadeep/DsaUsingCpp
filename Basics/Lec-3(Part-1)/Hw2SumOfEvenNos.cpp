#include<iostream>
using namespace std;
int main()
{
    int n,i=0,s=0;
    cout<<"n=";
    cin>>n;
    while(i<=n)
    {
        s=s+i;
        i=i+2;// 0 2 4 6 ....
    }
    cout<<"Sum="<<s<<endl;
    return 0;
}