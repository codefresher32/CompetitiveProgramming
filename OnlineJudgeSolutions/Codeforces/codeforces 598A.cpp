#include<bits/stdc++.h>
using namespace std;

typedef long long ll;



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll dp[35]={0};
    dp[0]=1;
    for(int i=1;i<=33;i++){
        dp[i]=2ll*dp[i-1];
    }
    ll t,n,s1,s2;
    cin>>t;
    while(t--){
        cin>>n;
        s1=n*(n+1)/(2*1ll);
        s2=0;
        for(int i=0;i<=33;i++){
            if(dp[i]<=n){
                s2+=dp[i];
            }
        }
        s2*=2ll;
        cout<<s1-s2<<endl;
    }
    return 0;
}


