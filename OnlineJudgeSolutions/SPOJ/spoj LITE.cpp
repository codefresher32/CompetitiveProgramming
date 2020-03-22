#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define pi pair<char,int>
#define pii pair<int,int>
#define F first
#define S second
#define pb push_back
#define pp pop_back
#define mod 100000007

struct data
{
    int toggle,on;
}tree[400005];

void propagate(int node,int s,int e)
{
    tree[node].toggle^=1;
    tree[2*node].toggle^=1;
    tree[2*node+1].toggle^=1;
    int mid=(s+e)/2;
    tree[2*node].on=mid-s+1-tree[2*node].on;
    tree[2*node+1].on=e-mid-tree[2*node+1].on;
    return ;
}


void update(int node,int s,int e,int l,int r)
{
    if(s>r||e<l) return ;
    if(s>=l&&e<=r){
        tree[node].toggle^=1;
        tree[node].on=e-s+1-tree[node].on;
        return ;
    }
    if(tree[node].toggle) propagate(node,s,e);
    int mid=(s+e)/2;
    update(2*node,s,mid,l,r);
    update(2*node+1,mid+1,e,l,r);
    tree[node].on=tree[2*node].on+tree[2*node+1].on;
}

int query(int node,int s,int e,int l,int r)
{
    if(s>r||e<l) return 0;
    if(s>=l&&e<=r) return tree[node].on;
    if(tree[node].toggle) propagate(node,s,e);
    int mid=(s+e)/2;
    return query(2*node,s,mid,l,r)+query(2*node+1,mid+1,e,l,r);
}


int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int t,q,n,l,r,p;
    scanf("%d %d",&n,&q);
    while(q--){
        scanf("%d %d %d",&p,&l,&r);
        if(!p){
            update(1,1,n,l,r);
        }
        else{
            printf("%d\n",query(1,1,n,l,r));
        }
    }
    return 0;
}

