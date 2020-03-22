#include<bits/stdc++.h>

using namespace std;

typedef long long ll;


#define pii pair<int,int>
#define pi pair<char,char>
#define F first
#define S second
#define pb push_back
#define pp pop_back
#define eps 10E-10
#define mod 10000019

struct data
{
    int r0,r1,r2,lazy;
}tree[400005];

void changenum(int node,int r)
{
    r%=3;
    int t0=tree[node].r0;
    int t1=tree[node].r1;
    int t2=tree[node].r2;
    if(r==1){
        tree[node].r0=t2;
        tree[node].r1=t0;
        tree[node].r2=t1;
    }
    else if(r==2){
        tree[node].r0=t1;
        tree[node].r1=t2;
        tree[node].r2=t0;
    }
    return ;
}

void updsum(int node)
{
    tree[node].r0=tree[2*node].r0+tree[2*node+1].r0;
    tree[node].r1=tree[2*node].r1+tree[2*node+1].r1;
    tree[node].r2=tree[2*node].r2+tree[2*node+1].r2;
    return ;
}

void propagate(int node)
{
    tree[2*node].lazy+=tree[node].lazy;
    tree[2*node+1].lazy+=tree[node].lazy;
    changenum(2*node,tree[node].lazy);
    changenum(2*node+1,tree[node].lazy);
    tree[node].lazy=0;
    return ;
}

void build(int node,int s,int e)
{
    if(s==e){
        tree[node].r0=1;
        return ;
    }
    int mid=(s+e)/2;
    build(2*node,s,mid);
    build(2*node+1,mid+1,e);
    updsum(node);
}

void update(int node,int s,int e,int l,int r)
{

    if(s>r||e<l) return ;
    if(s>=l&&e<=r){
        changenum(node,1);
        tree[node].lazy+=1;
        return ;
    }
    if(tree[node].lazy) propagate(node);
    int mid=(s+e)/2;
    update(2*node,s,mid,l,r);
    update(2*node+1,mid+1,e,l,r);
    updsum(node);
}

int query(int node,int s,int e,int l,int r)
{
    if(s>r||e<l) return 0;
    if(s>=l&&e<=r) return tree[node].r0;
    if(tree[node].lazy) propagate(node);
    int mid=(s+e)/2;
    return query(2*node,s,mid,l,r)+query(2*node+1,mid+1,e,l,r);
}

int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int n,q,l,r,ty,k,t,id=0;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&n,&q);
        build(1,1,n);
        printf("Case %d:\n",++id);
        while(q--){
            scanf("%d %d %d",&ty,&l,&r);
            l++,r++;
            if(!ty) update(1,1,n,l,r);
            else{
                printf("%d\n",query(1,1,n,l,r));
            }
        }
        memset(tree,0,sizeof tree);
    }
    return 0;
}
