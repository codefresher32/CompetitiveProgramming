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
    tree[node]=min(tree[2*node],tree[2*node+1]);
}

int query(int node,int s,int e,int i,int j)
{
    if(e<i||j<s) return INT_MAX;
    if(s>=i&&e<=j) return tree[node];
    int mid=(s+e)/2;
    return min(query(2*node,s,mid,i,j),query(2*node+1,mid+1,e,i,j));
}



int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int t,n,q,l,r,id=0;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&n,&q);
        for(int i=1;i<=n;i++){
            scanf("%d",&ar[i]);
        }
        build(1,1,n);
        printf("Case %d:\n",++id);
        while(q--){
            scanf("%d %d",&l,&r);
            printf("%d\n",query(1,1,n,l,r));
        }
    }
    return 0;
}
