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


pii arr[100005];
int ar[100005];
vector<int>tree[400005];

void build(int node,int s,int e)
{
    if(s==e){
        tree[node].pb(arr[s].S);
        return ;
    }
    int mid=(s+e)/2;
    build(2*node,s,mid);
    build(2*node+1,mid+1,e);
    merge(tree[2*node].begin(),tree[2*node].end(),tree[2*node+1].begin(),tree[2*node+1].end(),back_inserter(tree[node]));
}

int query(int node,int s,int e,int l,int r,int k)
{
    if(s==e){
        return tree[node][0];
    }
    int x=upper_bound(tree[2*node].begin(),tree[2*node].end(),r)-lower_bound(tree[2*node].begin(),tree[2*node].end(),l);
    int mid=(s+e)/2;
    if(x>=k) return query(2*node,s,mid,l,r,k);
    else return query(2*node+1,mid+1,e,l,r,k-x);
}


int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int n,q,l,r,k;
    scanf("%d %d",&n,&q);
    for(int i=1;i<=n;i++){
        scanf("%d",&ar[i]);
        arr[i].F=ar[i];
        arr[i].S=i;
    }
    sort(arr+1,arr+1+n);
    build(1,1,n);
    while(q--){
        scanf("%d %d %d",&l,&r,&k);
        printf("%d\n",ar[query(1,1,n,l,r,k)]);
    }
    return 0;
}

