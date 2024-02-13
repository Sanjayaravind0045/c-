#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float t,w,v,p;
    cin>>t>>v;
    p=pow(v,0.16);
    w=35.74+(0.6215*t)+((0.4275*t)-35.75)*p;
    
    cout<<w;
}