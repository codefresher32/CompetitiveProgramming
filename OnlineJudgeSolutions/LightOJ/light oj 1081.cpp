#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

//#include<ext/pb_ds/assoc_container.hpp>
//#include<ext/pb_ds/tree_policy.hpp>
//using namespace __gnu_pbds;
//typedef tree<ll,null_type,less<ll>,rb_tree_tag,tree_order_statistics_node_update>pb_ds;

#define pii pair<int,int>
#define pi pair<int,int>
#define F first
#define S second
#define pb push_back
#define pp pop_back
#define eps 10E-10
#define mod 1000000007
#define pai acos(-1)
#define mx 1000000000
//#define n 1429435

int ar[505][505],dp[505][505][20];

int call(int idx,int idy,int p){
    if(p==0) return ar[idx][idy];
    int &ret=dp[idx][idy][p];
    if(ret!=-1) return ret;
    int x1,x2,x3,x4;
    x1=call(idx,idy,p-1);
    x2=call(idx+(1<<p-1),idy,p-1);
    x3=call(idx,idy+(1<<p-1),p-1);
    x4=call(idx+(1<<p-1),idy+(1<<p-1),p-1);
    return ret=max(max(x1,x2),max(x3,x4));
}

int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int t,q,n,v,m,id=0;
    vector<int>pw;
    v=1;
    for(int i=1;i<=25;i++) pw.pb(v),v*=2;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&n,&q);
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++) scanf("%d",&ar[i][j]);
        }
        int l,r,s,k,ans,dx,dy;
        memset(dp,-1,sizeof dp);
        printf("Case %d:\n",++id);
        while(q--){
            scanf("%d %d %d",&l,&r,&s);
            dx=l+s-1,dy=r+s-1;
            k=lower_bound(pw.begin(),pw.end(),s)-pw.begin();
            if(pw[k]>s) k--;
            dx=dx-(1<<k)+1,dy=dy-(1<<k)+1;
            ans=max(max(call(l,r,k),call(dx,r,k)),max(call(l,dy,k),call(dx,dy,k)));
            printf("%d\n",ans);
        }
    }
    return 0;
}
