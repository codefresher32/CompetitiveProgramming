#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define pii pair<ll,ll>
#define pi pair<char,char>
#define F first
#define S second
#define pb push_back
#define pp pop_back
#define mod 100000007

int n,cases,rgb[25][5];
int dp[25][5];
int vis[25][5];

int call(int idx,int color)
{
    if(idx>n){
       return 0;
    }
    int p=0;
    int &ret=dp[idx][color];
    if(vis[idx][color]==cases) return ret;
    int mx=INT_MAX;
    for(int i=1;i<=3;i++){
        if(i==color) continue;
        p=rgb[idx][i]+call(idx+1,i);
        mx=min(mx,p);
    }
    vis[idx][color]=cases;
    return ret=mx;
}

int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int t,ans,id=0;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        for(int i=1;i<=n;i++){
            for(int j=1;j<=3;j++){
                scanf("%d",&rgb[i][j]);
            }
        }
        cases++;
        ans=call(1,0);
        printf("Case %d: %d\n",++id,ans);
    }
    return 0;
}
