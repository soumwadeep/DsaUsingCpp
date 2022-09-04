#include<iostream>
using namespace std;
int main()
{
    /*
    4321
    4321
    4321
    4321
    */
    int n;
    cout<<"Upto?"<<endl;
    cin>>n;
    int row=1;
    while(row<=n)
    {
        int col=1;//Col starts with 1
        while(col<=n)
        {
            cout<<n-col+1;//Lets Print Col Value Only For 4321
            col++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}