#include<bits/stdc++.h>
using namespace std;
long long s[500005];

int main()
{
    int n,cnt=0,a,ans=0;
    long long x;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a;
        s[i]=s[i-1]+a;
    }
    if(s[n]%3!=0)
    {
        cout<<0<<endl;
        return 0;
    }
    x=s[n]/3;
    for(int i=1;i<=n;i++)
    {
       if(2*x==s[i])
        ans+=cnt;
       if(x==s[i])
        cnt++;
    }
    cout<<ans<<endl;
    return 0;
}
