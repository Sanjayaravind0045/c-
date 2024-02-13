#include<iostream>
using namespace std;
int main()
{
    string a,b;
    cout<<"Name:\n";
    getline(cin,a);
    cout<<"Game:\n";
    getline(cin,b);
    cout<<"My name is "<<a<<" and I love to play "<<b<<"\n";
}