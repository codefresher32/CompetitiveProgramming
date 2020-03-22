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
#define N 100005

int tree[N*4];
deque<int>dq[N];
vector<int>prime;
bool vis[N];

void sieve(int n){
    prime.pb(2);
    for(int i=3;i*i<=n;i+=2){
        for(int j=i*i;j<=n;j+=2*i) vis[j]=1;
    }
    for(int i=3;i<=n;i+=2){
        if(!vis[i]) prime.pb(i);
    }
    return ;
}

void prime_div(int i,int n){
    for(int j=0;j<prime.size()&&prime[j]*prime[j]<=n;j++){
        if(n%prime[j]==0){
            while(n%prime[j]==0){
                dq[i].pb(prime[j]);
                n/=prime[j];
            }
        }
    }
    if(n>1) dq[i].pb(n);
    dq[i].pb(1);
    return ;
}

void init(int node,int b,int e){
    if(b==e){
        tree[node]=dq[b].front();
        return ;
    }
    int mid=(b+e)/2;
    init(2*node,b,mid);
    init(2*node+1,mid+1,e);
    tree[node]=max(tree[2*node],tree[2*node+1]);
}

void update(int node,int b,int e,int i,int j){
    if(b>j||e<i||tree[node]==1) return ;
    if(b==e){
        dq[b].pop_front();
        tree[node]=dq[b].front();
        return ;
    }
    int mid=(b+e)/2;
    update(2*node,b,mid,i,j);
    update(2*node+1,mid+1,e,i,j);
    tree[node]=max(tree[2*node],tree[2*node+1]);
}

int query(int node,int b,int e,int i,int j){
    if(b>j||e<i) return 0;
    if(b>=i&&e<=j) return tree[node];
    int mid=(b+e)/2;
    return max(query(2*node,b,mid,i,j),query(2*node+1,mid+1,e,i,j));
}

int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    sieve(10005);
    int t,ar,n,m,id=0;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&n,&m);
        for(int i=1;i<=n;i++){
            scanf("%d",&ar);
            dq[i].clear();
            prime_div(i,ar);
        }
        init(1,1,n);
        int l,r,ty;
        vector<int>ans;
        while(m--){
            scanf("%d %d %d",&ty,&l,&r);
            if(!ty) update(1,1,n,l,r);
            else ans.pb(query(1,1,n,l,r));
        }
        printf("%d",ans[0]);
        for(int i=1;i<ans.size();i++) printf(" %d",ans[i]);
        printf("\n");
    }
    return 0;
}


