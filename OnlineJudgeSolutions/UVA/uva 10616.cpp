#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int n,m,d;
ll dp[210][15][25],ar[205];

ll kp(int i,int cnt,ll sum)
{
    if(cnt==m){
        if(sum==0){
            return 1;
        }
        else{
            return 0;
        }
    }
    if(i>=n){
        return 0;
    }
    if(dp[i][cnt][sum]!=-1){
        return dp[i][cnt][sum];
    }
    ll p1=0,p2=0;
    ll temp=sum+ar[i];
    temp%=d;
    if(temp<0){
        temp+=d;
    }
    p1=kp(i+1,cnt+1,temp);
    p2=kp(i+1,cnt,(sum)%d);
    return dp[i][cnt][sum]=p1+p2;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int q,s=0,qr;
    while(cin>>n>>q){
        if(n==0&&q==0){
            return 0;
        }
        for(int i=0;i<n;i++){
            cin>>ar[i];
        }
        printf("SET %d:\n",++s);
        qr=0;
        while(q--){
            cin>>d>>m;
            memset(dp,-1,sizeof(dp));
            printf("QUERY %d: %lld\n",++qr,kp(0,0,0));
        }
    }
    return 0;
}
