#include<iostream>
using namespace std;
int main()
{
    /*
    xxxx
    xxxx
    xxxx
    xxxx
    */
    int n;
    cout<<"Of How Many Stars?"<<endl;
    cin>>n;
    int row=1;
    while(row<=n)
    {
        int col=1;
        while(col<=n)
        {
            cout<<"*";
            col++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}