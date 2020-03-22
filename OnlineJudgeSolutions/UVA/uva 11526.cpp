#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,t,ans,x;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ans=0;
        ans+=n/2;
        x=n/2;
        if(n&1)
            x++;
        for(long long i=1;i<=x;i++)
            ans+=(n/i);
        cout<<ans<<endl;
    }
    return 0;
}
