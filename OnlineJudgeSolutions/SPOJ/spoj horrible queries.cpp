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
    ll sum,pro;
}tree[300005];

void update(int node,int s,int e,int i,int j,ll val)
{
    if(s>j||e<i) return ;
    if(s>=i&&e<=j){
        tree[node].sum+=(e-s+1)*val;
        tree[node].pro+=val;
        //cout<<i<<" "<<j<<" "<<tree[node].sum<<" "<<tree[node].pro<<endl;
        return ;
    }
    int mid=(s+e)/2;
    update(2*node,s,mid,i,j,val);
    update(2*node+1,mid+1,e,i,j,val);
    tree[node].sum=tree[2*node].sum+tree[2*node+1].sum+(e-s+1)*tree[node].pro;
    //cout<<i<<" "<<j<<" "<<tree[node].sum<<" "<<tree[node].pro<<endl;
}

ll query(int node,int s,int e,int i,int j,ll carry)
{
    if(s>j||e<i) return 0;
    if(s>=i&&e<=j) return tree[node].sum+(e-s+1)*carry;
    int mid=(s+e)/2;
    return query(2*node,s,mid,i,j,carry+tree[node].pro)+query(2*node+1,mid+1,e,i,j,carry+tree[node].pro);
}


int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int t,q,n,l,r,p;
    ll val;
    scanf("%d",&t);
    while(t--){
        memset(tree,0,sizeof tree);
        scanf("%d %d",&n,&q);
        while(q--){
            scanf("%d %d %d",&p,&l,&r);
            if(!p){
                scanf("%lld",&val);
                update(1,1,n,l,r,val);
            }
            else{
                printf("%lld\n",query(1,1,n,l,r,0));
            }
        }
    }
    return 0;
}

