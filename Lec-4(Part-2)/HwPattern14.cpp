#include<iostream>
using namespace std;
int main()
{
    /*
    ABC
    DEF
    GHI
    */
    int n;
    cout<<"Upto?"<<endl;
    cin>>n;
    int row=1;
    while(row<=n)
    {
        int col=1;
        while(col<=n)
        {
            char ch='A';
            cout<<ch;
            ch++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}