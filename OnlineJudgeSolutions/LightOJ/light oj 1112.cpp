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

int ar[100005];
int tree[400005];

void build(int node,int s,int e)
{
    if(s==e){
        tree[node]=ar[s];
        return ;
    }
    int mid=(s+e)/2;
    build(2*node,s,mid);
    build(2*node+1,mid+1,e);
    tree[node]=tree[2*node]+tree[2*node+1];
}

int query(int node,int s,int e,int i,int j)
{
    if(s>j||e<i) return 0;
    if(s>=i&&e<=j) return tree[node];
    int mid=(s+e)/2;
    return (query(2*node,s,mid,i,j)+query(2*node+1,mid+1,e,i,j));
}

void update(int node,int s,int e,int i,int val,int type)
{
    if(i<s||i>e) return ;
    if(s==e&&s==i){
        if(type==1) tree[node]=val;
        else tree[node]+=val;
        return ;
    }
    int mid=(s+e)/2;
    update(2*node,s,mid,i,val,type);
    update(2*node+1,mid+1,e,i,val,type);
    tree[node]=tree[2*node]+tree[2*node+1];
}


int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int t,n,q,l,r,x,id=0;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&n,&q);
        for(int i=0;i<n;i++){
            scanf("%d",&ar[i]);
        }
        build(1,0,n-1);
        printf("Case %d:\n",++id);
        int val,idx,l,r;
        while(q--){
            scanf("%d",&x);
            if(x==1||x==2){
                scanf("%d",&idx);
                if(x==1) val=0,printf("%d\n",ar[idx]),ar[idx]=0;
                else scanf("%d",&val),ar[idx]+=val;
                update(1,0,n-1,idx,val,x);
            }
            else{
                scanf("%d %d",&l,&r);
                printf("%d\n",query(1,0,n-1,l,r));
            }
        }
    }
    return 0;
}

