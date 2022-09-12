#include<iostream>
using namespace std;
int main()
//Not Done
{
    /*
    ABC
    BCD
    CDE
    */
   int n;
    cout<<"Upto?"<<endl;
    cin>>n;
    int row=1;
    char count='A';
    while(row<=n)
    {
        int col=1;//Col starts with 1
        while(col<=n)
        {
            cout<<count<<" ";
            count++;
            col++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}