#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

//#include<ext/pb_ds/assoc_container.hpp>
//#include<ext/pb_ds/tree_policy.hpp>
//using namespace __gnu_pbds;
//typedef tree<ll,null_type,less<ll>,rb_tree_tag,tree_order_statistics_node_update>pb_ds;

#define pii pair<int,ll>
#define pi pair<int,int>
#define F first
#define S second
#define pb push_back
#define pp pop_back
#define eps 10E-10
#define mod 1000000007
#define pai acos(-1)
#define mx 1000000000
#define n 1429435

int tree[n*4];

void init(int node,int b,int e)
{
    if(b==e){
        tree[node]=b%2;
        return ;
    }
    int mid=(b+e)/2;
    init(2*node,b,mid);
    init(2*node+1,mid+1,e);
    tree[node]=tree[2*node]+tree[2*node+1];
}

void update(int node,int b,int e,int i)
{
    if(b==e&&i==1){
        tree[node]=0;
        return ;
    }
    int mid=(b+e)/2;
    if(i>tree[2*node]) update(2*node+1,mid+1,e,i-tree[2*node]);
    else update(2*node,b,mid,i);
    tree[node]=tree[2*node]+tree[2*node+1];
}

int query(int node,int b,int e,int i)
{
    if(b==e&&i==1) return b;
    int mid=(b+e)/2;
    if(i>tree[2*node]) query(2*node+1,mid+1,e,i-tree[2*node]);
    else query(2*node,b,mid,i);
}


int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int t,x,l,id=0;
    init(1,1,n);
    for(int i=2;i<=100000;i++){
        l=x=query(1,1,n,i);
        while(x<tree[1]){
            update(1,1,n,x);
            x+=(l-1);
        }
    }
    scanf("%d",&t);
    while(t--){
        scanf("%d",&l);
        printf("Case %d: %d\n",++id,query(1,1,n,l));
    }
    return 0;
}


