#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a,b,x,y,g,ans;
    cin>>a>>b>>x>>y;
    g=__gcd(x,y);
    x/=g;
    y/=g;
    a/=x;
    b/=y;
    ans=min(a,b);
    cout<<ans<<endl;
    return 0;
}
