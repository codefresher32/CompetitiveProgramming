#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()

{
    int t,x,tc,n,ans,i;
    cin>>t;
    for(tc=1;tc<=t;tc++)
    {
        ans=0;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>x;
            ans=max(ans,x);
        }
        cout<<"Case "<<tc<<": "<<ans<<endl;
    }
    return 0;
}
