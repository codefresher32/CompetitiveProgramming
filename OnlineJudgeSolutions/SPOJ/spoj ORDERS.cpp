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
#define mod 1000000000
#define pai acos(-1)
#define mx 1000000000
#define N 200005

int n,ar[N],tree[N],ans[N];

void update(int idx,int val){
    for(int i=idx;i<=n;i+=(i&-i)) tree[i]+=val;
    return ;
}

int query(int idx){
    int ret=0;
    for(int i=idx;i>=1;i-=(i&-i)) ret+=tree[i];
    return ret;
}

int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    int t,id=0;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        for(int i=1;i<=n;i++){
            scanf("%d",&ar[i]);
            update(i,1);
        }
        int lo,hi,mid,val,now;
        for(int i=n;i>=1;i--){
            val=i-ar[i];
            lo=1,hi=n;
            while(lo<=hi){
                mid=(lo+hi)/2;
                now=query(mid);
                if(now>=val) hi=mid-1;
                else lo=mid+1;
            }
            ans[i]=lo,update(lo,-1);
        }
        //printf("Case %d: %d\n",++id,ans[1]);
        for(int i=1;i<=n;i++) printf("%d ",ans[i]);
        for(int i=1;i<=n;i++) tree[i]=0;
        printf("\n");
    }

    return 0;
}
