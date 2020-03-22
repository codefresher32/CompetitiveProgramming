#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int n,a[105],dp[105][50001];

int kp(int i,int cp)
{
    int p1=0,p2=0;
    if(i==n){
        return 0;
    }
    if(dp[i][cp]!=-1){
        return dp[i][cp];
    }
    if(cp-a[i]>=0){
        p1=a[i]+kp(i+1,cp-a[i]);
    }
    p2=kp(i+1,cp);
    return dp[i][cp]=max(p1,p2);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,sum,v1,v2,cp;
    cin>>t;
    while(t--){
        sum=0;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        cp=sum/2;
        memset(dp,-1,sizeof(dp));
        v1=kp(0,cp);
        v2=sum-v1;
        cout<<abs(v1-v2)<<endl;
    }
    return 0;
}
