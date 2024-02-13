#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float a,b,c,d;
    cin>>a>>b>>c;
    cout<<fixed<<setprecision(2)<<(a+b)<<"\n";
    d=((a+b)*(c/100));
    cout<<fixed<<setprecision(2)<<(a+b-d)<<"\n";
    cout<<fixed<<setprecision(2)<<(d);
}