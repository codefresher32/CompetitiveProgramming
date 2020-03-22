#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,a,m,x,ans;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ans=0;
        while(n--)
        {
            cin>>a>>m>>x;
            ans+=a*x;
        }
        cout<<ans<<endl;
    }
    return 0;
}
