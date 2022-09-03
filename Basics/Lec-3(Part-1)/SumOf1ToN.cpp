#include<iostream>
using namespace std;
int main()
{
    int i=1,n,s=0;
    cout<<"n=";
    cin>>n;
    while(i<=n)
    {
        s=s+i;
        i++;
    }
    cout<<"Sum="<<s<<endl;
    return 0;
}