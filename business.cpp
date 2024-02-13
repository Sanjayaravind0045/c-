#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float p,n,r,i,d;
    cin>>p>>n>>r;
    i=((p*n*r)/100);
    cout<<fixed<<setprecision(2)<<i<<"\n";
    cout<<fixed<<setprecision(2)<<p+i<<"\n";
    d=((i*2)/100);
    cout<<fixed<<setprecision(2)<<d<<"\n";
    cout<<fixed<<setprecision(2)<<p+i-d;
}
