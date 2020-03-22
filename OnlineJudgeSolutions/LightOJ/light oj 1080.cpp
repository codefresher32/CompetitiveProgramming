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

pi tree[400005];
char s[100005];

void update(int node,int s,int e,int l,int r)
{
    if(s>r||e<l) return ;
    if(s>=l&&e<=r){
        tree[node].F+=1;
        tree[node].S+=e-s+1;
        return ;
    }
    int mid=(s+e)/2;
    update(2*node,s,mid,l,r);
    update(2*node+1,mid+1,e,l,r);
    tree[node].S=tree[2*node].S+tree[2*node+1].S+(e-s+1)*tree[node].F;
}

int query(int node,int s,int e,int idx,int carry)
{
    if(s>idx||e<idx) return 0;
    if(s>=idx&&e<=idx){
        return tree[node].S+carry;
    }
    int mid=(s+e)/2;
    return query(2*node,s,mid,idx,carry+tree[node].F)+query(2*node+1,mid+1,e,idx,carry+tree[node].F);
}

int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int t,n,l,r,q,idx,id=0;
    scanf("%d",&t);
    while(t--){
        scanf("%s",&s);
        n=strlen(s);
        scanf("%d",&q);
        //getchar();
        printf("Case %d:\n",++id);
        char ch;
        while(q--){
            scanf(" %c",&ch);
            if(ch=='I'){
                scanf("%d %d",&l,&r);
                update(1,1,n,l,r);
            }
            else if(ch=='Q'){
                scanf("%d",&idx);
                int ans=query(1,1,n,idx,0);
                if(ans%2==0) ch=s[idx-1];
                else{
                    if(s[idx-1]=='0') ch='1';
                    else ch='0';
                }
                printf("%c\n",ch);
            }
        }
        memset(tree,0,sizeof tree);
    }
    return 0;
}

