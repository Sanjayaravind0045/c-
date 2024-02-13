#include<iostream>
#include<string>
using namespace std;
int main()
{
    int b,c,e,f;
    string a;
    string d;
    cout<<"Team 1:";
    cout<<"\nTeam Name:";
    getline(cin,a);
    cout<<"\nScore:";
    cin>>b;
    cout<<"\nOvers played:";
    cin>>c;
    cin.ignore();
    cout<<"\nTeam 2:";
    cout<<"\nTeam Name:";
    getline(cin,d);
    cout<<"\nScore:";
    cin>>e;
    cout<<"\nOvers played:";
    cin>>f;
    cin.ignore();
    cout<<"\nMatch Details:\nTeam 1:\nName: "<<a<<"\nScore: "<<b<<"\nOvers played: "<<c<<"\nTeam 2:\nName: "<<d<<"\nScore: "<<e<<"\nOvers played: "<<f;
    return 0;
    
    
}