#include<bits/stdc++.h>
using namespace std;

#define pi acos(-1)

int main()
{
    int t;
    double d,l,a,b,x;
    cin>>t;
    while(t--)
    {
        cin>>d>>l;
        a=l/2;
        b=sqrt(pow(l/2,2)-pow(d/2,2));
        x=a*b*pi;
        cout<<fixed<<setprecision(3)<<x<<endl;
    }
    return 0;
}
