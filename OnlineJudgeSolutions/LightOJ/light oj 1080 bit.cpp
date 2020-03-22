#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

//#include<ext/pb_ds/assoc_container.hpp>
//#include<ext/pb_ds/tree_policy.hpp>
//using namespace __gnu_pbds;
//typedef tree<ll,null_type,less<ll>,rb_tree_tag,tree_order_statistics_node_update>pb_ds;

#define pii pair<ll,ll>
#define pi pair<int,int>
#define F first
#define S second
#define pb push_back
#define pp pop_back
#define eps 10E-10
#define mod 1000000007
#define pai acos(-1)
#define mx 1000000000
#define N 105

char s[100006];
int n,tree[100005];

void update(int idx,int val)
{
    for(int i=idx;i<=n;i+=(i&-i)) tree[i]+=val;
    return ;
}

int query(int idx)
{
    int ret=0;
    for(int i=idx;i>=1;i-=(i&-i)) ret+=tree[i];
    return ret;
}

int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);

    int t,q,l,r,id=0;
    scanf("%d",&t);
    while(t--){
        scanf("%s",&s);
        n=strlen(s);
        scanf("%d",&q);
        char ch;
        printf("Case %d:\n",++id);
        while(q--){
            cin>>ch;
            if(ch=='I'){
                scanf("%d %d",&l,&r);
                update(l,1),update(r+1,-1);
            }
            else{
                scanf("%d",&l);
                if(query(l)%2){
                    if(s[l-1]=='1') printf("0\n");
                    else printf("1\n");
                }
                else printf("%c\n",s[l-1]);
            }
        }
        memset(tree,0,sizeof tree);
    }
    return 0;
}
