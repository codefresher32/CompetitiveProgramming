#include<bits/stdc++.h>

using namespace std;

typedef long long ll;


#define pii pair<ll,ll>
#define pi pair<int,int>
//#define F first
//#define S second
#define pb push_back
#define pp pop_back
#define eps 10E-10
#define mod 10000019

struct data
{
    ll F,S;
    int T;
}tree[300005];

void propagate(int node,int s,int e)
{
    int mid=(s+e)/2;
    if(tree[node].T>tree[2*node].T){
        tree[2*node].T=tree[node].T;
        tree[2*node].S=tree[node].S;
        tree[2*node].F=(mid-s+1)*tree[2*node].S;
    }
    if(tree[node].T>tree[2*node+1].T){
        tree[2*node+1].T=tree[node].T;
        tree[2*node+1].S=tree[node].S;
        tree[2*node+1].F=(e-mid)*tree[2*node].S;
    }
    return ;
}


void update(int node,int s,int e,int l,int r,ll val,int tm)
{
    if(s>r||e<l) return ;
    if(s>=l&&e<=r){
        tree[node].F=(e-s+1)*val;
        tree[node].S=val;
        tree[node].T=tm;
        return ;
    }
    if(tree[node].T) propagate(node,s,e);
    int mid=(s+e)/2;
    update(2*node,s,mid,l,r,val,tm);
    update(2*node+1,mid+1,e,l,r,val,tm);
    tree[node].F=tree[2*node].F+tree[2*node+1].F;
}

ll query(int node,int s,int e,int l,int r)
{
    if(s>r||e<l) return 0;
    if(s>=l&&e<=r){
        return tree[node].F;
    }
    if(tree[node].T) propagate(node,s,e);
    int mid=(s+e)/2;
    return query(2*node,s,mid,l,r)+query(2*node+1,mid+1,e,l,r);
}

int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int t,n,q,p,ty,l,r,m,id=0;
    ll val;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&n,&q);
        printf("Case %d:\n",++id);
        int tm=0;
        while(q--){
            scanf("%d %d %d",&ty,&l,&r);
            l++,r++;
            if(ty==1){
                scanf("%lld",&val);
                tm++;
                update(1,1,n,l,r,val,tm);
            }
            else{
                ll ans,gc,rn;
                ans=query(1,1,n,l,r),rn=(ll)(r-l+1);
                gc=__gcd(ans,rn);
                ans/=gc,rn/=gc;
                printf("%lld",ans);
                if(rn!=1) printf("/%lld",rn);
                printf("\n");
            }
        }
        memset(tree,0,sizeof tree);
    }

    return 0;
}
