#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

//#include<ext/pb_ds/assoc_container.hpp>
//#include<ext/pb_ds/tree_policy.hpp>
//using namespace __gnu_pbds;
//typedef tree<ll,null_type,less<ll>,rb_tree_tag,tree_order_statistics_node_update>pb_ds;

#define pii pair<ll,ll>
#define pi pair<int,int>
#define F first
#define S second
#define pb push_back
#define pp pop_back
#define eps 10E-10
#define mod 1000000007
#define pai acos(-1)
//#define mx 1000000000

vector<int>coin[25];
int n,k,dp[25][1005];

int call(int idx,int make)
{
    if(make>k) return -1000;
    if(idx>n) return make;
    int &ret=dp[idx][make];
    if(ret!=-1) return ret;
    int p,mx=-1;
    for(int i=0;i<coin[idx].size();i++){
        p=call(idx+1,make+coin[idx][i]);
        mx=max(p,mx);
    }
    return ret=mx;
}



int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);

    int t,m,a;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&k,&n);
        for(int i=1;i<=n;i++){
            scanf("%d",&m);
            for(int j=1;j<=m;j++){
                scanf("%d",&a);
                coin[i].pb(a);
            }
        }
        memset(dp,-1,sizeof dp);
        int ans=call(1,0);
        if(ans<0) printf("no solution\n");
        else printf("%d\n",ans);
        for(int i=1;i<=n;i++) coin[i].clear();
    }

    return 0;
}

