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

int n;
char s[55];
int dp[55][55][55];

bool f(char ch)
{
    return (ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch =='U');
}

int call(int idx,int v,int c)
{
    if(v>=3||c>=5) return 1;
    if(idx==n) return 2;
    int &ret=dp[idx][v][c];
    if(ret!=-1) return ret;
    int p=0,q=0;
    if(s[idx]=='?'){
        p=call(idx+1,v+1,0);
        q=call(idx+1,0,c+1);
    }
    else if(f(s[idx])) p=call(idx+1,v+1,0);
    else q=call(idx+1,0,c+1);
    return ret=p|q;
}

int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);

    int t,x,id=0;
    scanf("%d",&t);
    while(t--){
        scanf("%s",&s);
        n=strlen(s);
        memset(dp,-1,sizeof dp);
        x=call(0,0,0);
        printf("Case %d: ",++id);
        //cout<<bd<<" "<<gd<<endl;
        if(x==2) printf("GOOD\n");
        else if(x==1) printf("BAD\n");
        else printf("MIXED\n");
    }
    return 0;
}

