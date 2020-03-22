#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,p,w,ans;
    cin>>t;
    while(t--)
    {
        ans=0;
        int v[3655]={0};
        cin>>n>>p;
        for(int i=6;i<=n;i+=7)
        {
            v[i]=2;
        }
        for(int i=7;i<=n;i+=7)
        {
            v[i]=2;
        }
        while(p--)
        {
            cin>>w;
            for(int i=w;i<=n;i+=w)
            {
                if(v[i]!=2)
                    v[i]=1;
            }
        }
        for(int i=1;i<=n;i++){
                if(v[i]==1)
                    ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}


