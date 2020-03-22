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

int inp[100005];
int fre[100005];
int pos[100005];
int tree[400005];

void build(int node,int s,int e)
{
    if(s==e){
        tree[node]=fre[s];
        return ;
    }
    int mid=(s+e)/2;
    build(2*node,s,mid);
    build(2*node+1,mid+1,e);
    tree[node]=max(tree[2*node],tree[2*node+1]);
}

int query(int node,int s,int e,int i,int j)
{
    if(s>j||e<i) return 0;
    if(s>=i&&e<=j) return tree[node];
    int mid=(s+e)/2;
    return max(query(2*node,s,mid,i,j),query(2*node+1,mid+1,e,i,j));
}


int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int n,q,l,r,t,c,id=0;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d %d",&n,&c,&q);
        unordered_map<int,int>f,p;
        for(int i=1;i<=n;i++){
            scanf("%d",&inp[i]);
            f[inp[i]]++;
            if(!p[inp[i]]) p[inp[i]]=i;
        }
        for(int i=1;i<=n;i++){
            fre[i]=f[inp[i]];
            pos[i]=p[inp[i]];
        }
        int c1,c2,c3;
        build(1,1,n);
        printf("Case %d:\n",++id);
        while(q--){
            scanf("%d %d",&l,&r);
            if(inp[l]==inp[r]) printf("%d\n",r-l+1);
            else{
                c1=(fre[l]+pos[l]-l),l=pos[l]+fre[l];
                c2=(r-pos[r]+1),r=pos[r]-1;
                c3=0;
                if(l<=r){
                    c3=query(1,1,n,l,r);
                }
                printf("%d\n",max(c1,max(c2,c3)));
            }
        }
    }
    return 0;
}

