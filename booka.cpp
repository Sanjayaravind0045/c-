#include<iostream>
using namespace std;
int main()
{
    int d;
    cin>>d;
    cout<<(d/365)<<"\n";
    cout<<((d%365)/7)<<"\n";
    cout<<((d%365)%7);
    
}