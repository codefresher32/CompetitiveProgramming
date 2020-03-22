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

int ar[100005],pos[100005],tree[400005];

bool com(pair<pi,int> A,pair<pi,int> B)
{
    return A.F.S<B.F.S;
}

void update(int node,int s,int e,int idx,int val)
{
    if(idx<s||idx>e) return;
    if(s==e&&idx==s){
        tree[node]=val;
        return;
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

    int n,m,t,id=0;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&n,&m);
        for(int i=1;i<=n;i++){
            scanf("%d",&ar[i]);
        }
        int l,r;
        vector<pair<pi,int>>vc;
        vector<pi>ans;
        for(int i=1;i<=m;i++){
            scanf("%d %d",&l,&r);
            vc.pb({{l,r},i});
        }
        sort(vc.begin(),vc.end(),com);
        int j=0,mx;
        pair<pi,int> tp;
        for(int i=1;i<=n;i++){
            if(pos[ar[i]]) update(1,1,n,pos[ar[i]],0);
            pos[ar[i]]=i,update(1,1,n,i,1);
            while(i==vc[j].F.S){
                tp=vc[j];
                mx=query(1,1,n,tp.F.F,tp.F.S);
                ans.pb({tp.S,mx}),j++;
            }
        }
        sort(ans.begin(),ans.end());
        printf("Case %d:\n",++id);
        for(pi v:ans){
            printf("%d\n",v.S);
        }
        memset(tree,0,sizeof tree);
        memset(pos,0,sizeof pos);
    }

    return 0;
}

/*
1
9
1 2 1 1 3 1 2 2 2
3
*/

