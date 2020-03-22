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
#define mx 1000005
#define N 100005

int tree[N];
int past_cnt[N];

void update(int idx,int val){
    for(int i=idx;i<N;i+=(i&-i)) tree[i]+=val;
    return ;
}

int query(int idx){
    int ret=0;
    for(int i=idx;i>0;i-=(i&-i)) ret+=tree[i];
    return ret;
}

int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    int q,l,r;
    scanf("%d",&q);
    while(q--){
        scanf("%d %d",&l,&r);
        int q1,q2,ans;
        q1=query(l),q2=query(r);
        ans=q1+q2-past_cnt[l]-past_cnt[r];
        printf("%d\n",ans);
        past_cnt[l]=q1,past_cnt[r]=q2;
        update(l+1,1);
        update(r,-1);
    }
    return 0;
}
