#include<iostream>
using namespace std;
int main()
{
    /*
    123
    456
    789
    */
    int n;
    cout<<"Upto?"<<endl;
    cin>>n;
    int row=1;
    int count=1;
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