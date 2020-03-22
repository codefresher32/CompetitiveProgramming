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

int ar[200005],tree[600005];

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

void update(int node,int s,int e,int idx,int val)
{
    if(s>idx||e<idx) return ;
    if(s>=idx&&e<=idx){
        tree[node]=val;
        return ;
    }
    int mid=(s+e)/2;
    update(2*node,s,mid,idx,val);
    update(2*node+1,mid+1,e,idx,val);
    tree[node]=tree[2*node]+tree[2*node+1];
}

int query(int node,int s,int e,int l,int r)
{
    if(s>r||e<l) return 0;
    if(s>=l&&e<=r) return tree[node];
    int mid=(s+e)/2;
    return query(2*node,s,mid,l,r)+query(2*node+1,mid+1,e,l,r);
}


int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int t,n,m,q,l,r,id=0;
    char s[10];
    while(scanf("%d",&n),n){
        if(id) printf("\n");
        for(int i=1;i<=n;i++){
            scanf("%d",&ar[i]);
        }
        build(1,1,n);
        printf("Case %d:\n",++id);
        while(scanf("%s",&s)!=EOF){
            if(s[0]=='E'){
                break;
            }
            scanf("%d %d",&l,&r);
            if(s[0]=='S') update(1,1,n,l,r);
            else printf("%d\n",query(1,1,n,l,r));
        }
    }
    return 0;
}

