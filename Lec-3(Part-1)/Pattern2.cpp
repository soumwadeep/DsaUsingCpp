#include<iostream>
using namespace std;
int main()
{
    /*
    111
    222
    333
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
            cout<<row;
            col++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}