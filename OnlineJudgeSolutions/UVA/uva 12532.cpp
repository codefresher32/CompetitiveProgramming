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
    tree[node]=tree[2*node]*tree[2*node+1];
}

int query(int node,int s,int e,int i,int j)
{
    if(s>j||e<i) return 1;
    if(s>=i&&e<=j) return tree[node];
    int mid=(s+e)/2;
    return (query(2*node,s,mid,i,j)*query(2*node+1,mid+1,e,i,j));
}

void update(int node,int s,int e,int i,int val)
{
    if(i<s||i>e) return ;
    if(s==e&&s==i){
        tree[node]=val;
        return ;
    }
    int mid=(s+e)/2;
    update(2*node,s,mid,i,val);
    update(2*node+1,mid+1,e,i,val);
    tree[node]=tree[2*node]*tree[2*node+1];
}


int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int t,n,q,l,r,id=0;
    while(scanf("%d %d",&n,&q)!=EOF){
        for(int i=1;i<=n;i++){
            scanf("%d",&ar[i]);
            if(ar[i]>=1) ar[i]=1;
            else if(ar[i]<0) ar[i]=-1;
        }
        build(1,1,n);
        int val;
        char x;
        string s="";
        while(q--){
            cin>>x;
            scanf("%d %d",&l,&r);
            if(x=='P'){
                val=query(1,1,n,l,r);
                if(val==0) s+='0';
                else if(val>0) s+='+';
                else s+='-';
            }
            else{
                if(r>=1) r=1;
                else if(r<0) r=-1;
                update(1,1,n,l,r);
            }
        }
        printf("%s\n",s.c_str());
    }
    return 0;
}

