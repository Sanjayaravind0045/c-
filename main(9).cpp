#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float a,b,c,d;
    cin>>a>>b>>c>>d;
    cout<<fixed<<setprecision(1);
    cout<<"Binoy's house is located at ("<<(a+c)/2<<","<<(b+d)/2<<")";
}