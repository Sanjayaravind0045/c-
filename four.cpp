#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float a,b,c,d,e,f;
    cin>>a>>b>>c>>d>>e>>f;
    cout<<fixed<<setprecision(1)<<((a+c+e)/3)<<"\n";
    cout<<fixed<<setprecision(1)<<((b+d+f)/3);
}