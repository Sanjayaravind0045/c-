#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int main()
{
    int x,y,d;
    cin>>x>>y;
    d=pow(x-3,2)+pow(y-4,2);
    cout<<int(sqrt(d));
}