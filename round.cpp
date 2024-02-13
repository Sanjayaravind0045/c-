#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float a;
    cin>>a;
    cout<<fixed<<setprecision(6)<<a<<"\n";
    cout<<setprecision(3)<<a<<"\n";
    cout<<setprecision(2)<<a<<"\n";
    cout<<setprecision(1)<<a;
}