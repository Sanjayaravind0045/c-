#include<iostream>
#include<cmath>
#include<math.h>
#include<iomanip>
using namespace std;
int main()
{
    int a,l,b;
    float r,e;
    cin>>a>>l>>b>>r;
    cout<<a*a<<"\n"<<l*b<<"\n";
    e=3.14*r*r;
    cout<<fixed<<setprecision(2)<<e;
}