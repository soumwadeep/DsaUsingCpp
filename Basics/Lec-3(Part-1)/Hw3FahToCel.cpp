#include<iostream>
using namespace std;
int main()
{
    double fah,cel;
    cout<<"Enter The Temp. In oF:";
    cin>>fah;
    cel=(fah-32.0)*5.0/9.0;
    cout<<"Temperature In Celsius:"<<cel<<endl;
    return 0;
}