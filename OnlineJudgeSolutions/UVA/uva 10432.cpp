#include<bits/stdc++.h>
using namespace std;

#define pi acos(-1)

int main()
{
   double r,n,a;
    while(cin>>r>>n)
    {
        a=r*r*sin(2.0*pi/n)*n/2;
        cout<<fixed<<setprecision(3)<<a<<endl;
    }
    return 0;
}
