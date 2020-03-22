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
#define mx 1000000000
#define N 105

int n,ar[100005],dp[100005][25];

int call(int idx,int p)
{
    if(p==0) return ar[idx];
    int &ret=dp[idx][p];
    if(ret!=-1) return ret;
    int x1=0,x2=0;
    x1=call(idx,p-1);
    x2=call(idx+(1<<p-1),p-1);
    return ret=min(x1,x2);
}


int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);

    int x=1,t,q,l,r,id=0;
    vector<int>pw;
    for(int i=1;i<=22;i++){
        pw.pb(x);
        x*=2;
    }
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&n,&q);
        for(int i=1;i<=n;i++) scanf("%d",&ar[i]);
        printf("Case %d:\n",++id);
        int a,b;
        memset(dp,-1,sizeof dp);
        while(q--){
            scanf("%d %d",&l,&r);
            a=lower_bound(pw.begin(),pw.end(),r-l+1)-pw.begin();
            if(r-l+1<pw[a]) a--;
            b=min(call(l,a),call(r-pw[a]+1,a));
            printf("%d\n",b);
        }
    }
    return 0;
}

