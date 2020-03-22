#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    double l,a,b;
    cin>>t;
    while(t--)
    {
        cin>>l;
        a=acos(-1)*(l*l/25.0);
        b=(l*(l*6.0/10.0))-a;
        cout<<fixed<<setprecision(2)<<a<<" "<<b<<endl;
    }
    return 0;
}
