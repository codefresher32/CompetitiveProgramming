#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,e,f,c,sum,d,r;
    cin>>t;
    while(t--)
    {
        cin>>e>>f>>c;
        sum=0;
        d=e+f;
        while(d>=c)
        {
            r=d%c;
            d/=c;
            sum+=d;
            d+=r;
        }
        cout<<sum<<endl;
    }
    return 0;
}
