#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define pii pair<int,int>
#define pi pair<char,char>
#define F first
#define S second
#define pb push_back
#define pp pop_back
#define eps 10E-10
#define mod 1000000

int ans,ar[3],dp[3][10005];

int call1(int idx,int k)
{
    if(idx>2){
        if(ans>=k) ans=k;
        return 0;
    }
    int &ret=dp[idx][k];
    if(ret!=-1) return ret;
    int p=0,q=0;
    if(k-ar[idx]>=0) p=call1(idx,k-ar[idx]);
    q=call1(idx+1,k);
    return ret=max(p,q);
}

int call2(int idx,int k)
{
    if(idx>2){
        if(k==0) return 0;
        else return -100000;
    }
    int &ret=dp[idx][k];
    if(ret!=-1) return ret;
    int p=-100000,q=-100000;
    if(k-ar[idx]>=0) p=1+call2(idx,k-ar[idx]);
    q=call2(idx+1,k);
    return ret=max(p,q);
}

int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int k;
    while(scanf("%d %d %d",&ar[1],&ar[2],&k)!=EOF){
        memset(dp,-1,sizeof dp);
        ans=INT_MAX;
        if(ar[1]>ar[2]) swap(ar[1],ar[2]);
        call1(1,k);
        k-=ans;
        memset(dp,-1,sizeof dp);
        printf("%d",call2(1,k));
        if(ans) printf(" %d",ans);
        printf("\n");
    }
    return 0;
}

