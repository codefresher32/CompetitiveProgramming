#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,x,y,z,a,b;
    cin>>n;
    x=n;
    y=n+1;
    z=n*(n+1);
    a=n*(y*z+z*x+x*y);
    b=2*x*y*z;
    if(n==1)
    {
        cout<<-1<<endl;
        return 0;
    }
    cout<<x<<" "<<y<<" "<<z<<endl;
    return 0;
}
