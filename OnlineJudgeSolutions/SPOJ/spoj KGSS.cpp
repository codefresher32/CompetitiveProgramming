#include<bits/stdc++.h>
//#include<ext/pb_ds/assoc_container.hpp>
//#include<ext/pb_ds/tree_policy.hpp>
//
//using namespace __gnu_pbds;
using namespace std;
//typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> pb_ds;
typedef long long ll;


#define pii pair<int,int>
#define pi pair<char,char>
#define F first
#define S second
#define pb push_back
#define pp pop_back
#define eps 10E-10
#define mod 10000019


pii tree[300005];
int ar[100005];

void build(int node,int s,int e)
{
    if(s==e){
        tree[node].F=ar[s];
        tree[node].S=0;
        return ;
    }
    int mid=(s+e)/2;
    build(2*node,s,mid);
    build(2*node+1,mid+1,e);
    tree[node].F=max(tree[2*node].F,tree[2*node+1].F);
    tree[node].S=max(min(tree[2*node].F,tree[2*node+1].F),max(tree[2*node].S,tree[2*node+1].S));
}

void update(int node,int s,int e,int idx,int val)
{
    if(s>idx||e<idx) return ;
    if(s>=idx&&e<=idx){
        tree[node].F=val;
        return ;
    }
    int mid=(s+e)/2;
    update(2*node,s,mid,idx,val);
    update(2*node+1,mid+1,e,idx,val);
    tree[node].F=max(tree[2*node].F,tree[2*node+1].F);
    tree[node].S=max(min(tree[2*node].F,tree[2*node+1].F),max(tree[2*node].S,tree[2*node+1].S));
    //cout<<s<<" "<<e<<" "<<tree[node].F<<" "<<tree[node].S<<endl;
}

pii query(int node,int s,int e,int l,int r)
{
    if(s>r||e<l) return {0,0};
    if(s>=l&&e<=r){
        return  tree[node];
    }
    int mid=(s+e)/2;
    pii p=query(2*node,s,mid,l,r);
    pii q=query(2*node+1,mid+1,e,l,r);
    return {max(p.F,q.F),max(min(p.F,q.F),max(p.S,q.S))};
}


int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int n,q,l,r,k;
    char ch;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&ar[i]);
    }
    build(1,1,n);
    scanf("%d",&q);
    while(q--){
        getchar();
        scanf("%c %d %d",&ch,&l,&r);
        if(ch=='Q'){
            pii ans=query(1,1,n,l,r);
            printf("%d\n",ans.F+ans.S);
        }
        else update(1,1,n,l,r);
    }

    return 0;
}
