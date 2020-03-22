#include<bits/stdc++.h>

using namespace std;

typedef long long ll;


#define pii pair<ll,ll>
#define pi pair<char,char>
#define F first
#define S second
#define pb push_back
#define pp pop_back
#define eps 10E-10
#define mod 10000019


pii tree[300005];


void update(int node,int s,int e,int l,int r,ll val)
{
    if(s>r||e<l) return ;
    if(s>=l&&e<=r){
        tree[node].S+=val;
        tree[node].F+=(e-s+1)*val;
        return ;
    }
    int mid=(s+e)/2;
    update(2*node,s,mid,l,r,val);
    update(2*node+1,mid+1,e,l,r,val);
    tree[node].F=tree[2*node].F+tree[2*node+1].F+(e-s+1)*tree[node].S;
    //cout<<s<<" "<<e<<" "<<tree[node].F<<endl;
}

ll query(int node,int s,int e,int l,int r,ll carry)
{
    if(s>r||e<l) return 0;
    if(s>=l&&e<=r) return tree[node].F+(e-s+1)*carry;
    int mid=(s+e)/2;
    return query(2*node,s,mid,l,r,carry+tree[node].S)+query(2*node+1,mid+1,e,l,r,carry+tree[node].S);
}



int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int n,q,l,r,k,t,p,id=0;
    ll val;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&n,&q);
        printf("Case %d:\n",++id);
        while(q--){
            scanf("%d %d %d",&p,&l,&r);
            l++,r++;
            if(!p){
                scanf("%lld",&val);
                update(1,1,n,l,r,val);
            }
            else{
                printf("%lld\n",query(1,1,n,l,r,0));
            }
        }
        memset(tree,0,sizeof tree);
    }
    return 0;
}

/*
1
5 10
0 1 5 1
0 1 5 2
0 1 5 2
1 1 5
*/
