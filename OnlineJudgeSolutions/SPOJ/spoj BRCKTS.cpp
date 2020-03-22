#include<bits/stdc++.h>

using namespace std;

typedef long long ll;


#define pii pair<ll,ll>
#define pi pair<int,int>
#define F first
#define S second
#define pb push_back
#define pp pop_back
#define eps 10E-10
#define mod 10000019

char ss[30005];
pi tree[100005];

void build(int node,int s,int e)
{
    if(s==e){
        tree[node].F=(ss[s]=='(')?1:-1;
        tree[node].S=tree[node].F;
        return ;
    }
    int mid=(s+e)/2;
    build(2*node,s,mid);
    build(2*node+1,mid+1,e);
    tree[node].F=tree[2*node].F+tree[2*node+1].F;
    tree[node].S=min(tree[2*node].S,tree[2*node].F+tree[2*node+1].S);
}

void update(int node,int s,int e,int idx)
{
    if(s>idx||e<idx) return ;
    if(s>=idx&&e<=idx){
        tree[node].F=tree[node].S=-tree[node].F;
        return ;
    }
    int mid=(s+e)/2;
    update(2*node,s,mid,idx);
    update(2*node+1,mid+1,e,idx);
    tree[node].F=tree[2*node].F+tree[2*node+1].F;
    tree[node].S=min(tree[2*node].S,tree[2*node].F+tree[2*node+1].S);
}


int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int t,n,q,m,id=0;
    t=10;
    while(t--){
        scanf("%d %s %d",&n,&ss,&q);
        build(1,0,n-1);
        printf("Test %d:\n",++id);
        while(q--){
            scanf("%d",&m);
            if(m) update(1,0,n-1,m-1);
            else{
                if(!tree[1].F&&!tree[1].S){
                    printf("YES\n");
                }
                else printf("NO\n");
            }
        }
    }
    return 0;
}
