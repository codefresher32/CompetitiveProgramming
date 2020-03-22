#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll dp[35][35];

ll ncm(int n,int m)
{
    if(m==1||m==0){
        return n;
    }
    if(n==m){
        return 1;
    }
    if(dp[n][m]!=-1){
        return dp[n][m];
    }
    return dp[n][m]=ncm(n-1,m)+ncm(n-1,m-1);
}

int main()
{
    ll n,m,t,ans=0;
    cin>>n>>m>>t;
    memset(dp,-1,sizeof(dp));
    for(int i=n;i>=4;i--){
        if(t-i>=1&&t-i<=m){
            ans+=ncm(n,i)*ncm(m,t-i);
        }
    }
    cout<<ans<<endl;
    return 0;
}
