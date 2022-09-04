#include<iostream>
using namespace std;
int main()
{
    /*
    1234
    1234
    1234
    1234
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
            cout<<col;//Lets Print Col Value Only For 1234
            col++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}