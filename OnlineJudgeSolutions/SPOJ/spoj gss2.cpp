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
//#define mx 1000000000
#define N 100005

struct nd{
    ll sum,ans,lazy,best_lazy;
}tree[3*N];

struct qr{
    int l,r,id;
    qr(int a,int b,int c){
        l=a,r=b,id=c;
    }
};

bool cmp(qr A,qr B){
    return A.r<B.r;
}

ll ar[N];

void propagate(int node){
    tree[2*node].best_lazy=max(tree[2*node].best_lazy,tree[2*node].lazy+tree[node].best_lazy);
    tree[2*node].lazy+=tree[node].lazy;
    tree[2*node].ans=max(tree[2*node].ans,tree[2*node].sum+tree[node].best_lazy);
    tree[2*node].sum+=tree[node].lazy;

    tree[2*node+1].best_lazy=max(tree[2*node+1].best_lazy,tree[2*node+1].lazy+tree[node].best_lazy);
    tree[2*node+1].lazy+=tree[node].lazy;
    tree[2*node+1].ans=max(tree[2*node+1].ans,tree[2*node+1].sum+tree[node].best_lazy);
    tree[2*node+1].sum+=tree[node].lazy;
    tree[node].lazy=tree[node].best_lazy=0;
    return ;
}

void update(int node,int b,int e,int i,int j,ll val){
    if(b>j||e<i) return ;
    if(b>=i&&e<=j){
        tree[node].best_lazy=max(tree[node].best_lazy,tree[node].lazy+val);
        tree[node].lazy+=val;
        tree[node].ans=max(tree[node].ans,tree[node].sum+val);
        tree[node].sum+=val;
        return ;
    }
    if(tree[node].lazy) propagate(node);
    int mid=(b+e)/2;
    update(2*node,b,mid,i,j,val);
    update(2*node+1,mid+1,e,i,j,val);
    tree[node].sum=max(tree[2*node].sum,tree[2*node+1].sum);
    tree[node].ans=max(tree[2*node].ans,tree[2*node+1].ans);
}

ll query(int node,int b,int e,int i,int j){
    if(b>j||e<i) return -INT_MAX;
    if(b>=i&&e<=j) return tree[node].ans;
    if(tree[node].lazy) propagate(node);
    int mid=(b+e)/2;
    ll p,q;
    p=query(2*node,b,mid,i,j);
    q=query(2*node+1,mid+1,e,i,j);
    return max(p,q);
}

int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    int n,q,l,r;
    scanf("%d",&n);
    for(int i=1;i<=n;i++) scanf("%lld",&ar[i]);
    scanf("%d",&q);
    vector<qr>vc;
    for(int i=1;i<=q;i++){
        scanf("%d %d",&l,&r);
        vc.pb(qr(l,r,i));
    }
    sort(vc.begin(),vc.end(),cmp);
    int id=0;
    map<int,ll>ans,pos;
    for(int i=1;i<=n;i++){
        l=pos[ar[i]]+1;
        update(1,1,n,l,i,ar[i]);
        pos[ar[i]]=i;
        while(id<vc.size()&&vc[id].r==i){
            ans[vc[id].id]=query(1,1,n,vc[id].l,vc[id].r);
            id++;
        }
    }
    for(auto it:ans) printf("%lld\n",it.S);
    return 0;
}

/*
8
-1 2 3 -4 5 1 -2 3
1
4 4

*/

