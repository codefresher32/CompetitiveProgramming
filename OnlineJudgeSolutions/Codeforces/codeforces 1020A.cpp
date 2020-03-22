#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,m,h,a,b,q,ta,fa,tb,fb;
    long long x,y,p;
    cin>>n>>h>>a>>b>>q;
    while(q--)
    {
       cin>>ta>>fa>>tb>>fb;

        if(ta==tb)
            cout<<abs(fa-fb)<<endl;
        else if(fa>=a&&fa<=b)
            cout<<abs(fb-fa)+abs(ta-tb)<<endl;
        else
        {
            x=abs(fa-a)+abs(tb-ta)+abs(a-fb);
            y=abs(fa-b)+abs(tb-ta)+abs(b-fb);
            p=min(x,y);
            cout<<p<<endl;
        }
    }
    return 0;
}
