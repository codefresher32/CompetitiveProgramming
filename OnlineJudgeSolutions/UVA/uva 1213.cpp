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
//#define mx 1000000000


vector<int>prime;
bool vis[1125];

void sieve(int n)
{
    int sq=sqrt(n);
    prime.pb(2);
    for(int i=3;i*i<=n;i+=2){
        if(!vis[i]){
            for(int j=i*i;j<=n;j+=2*i) vis[j]=1;
        }
    }
    for(int i=3;i<=n;i+=2){
        if(!vis[i]) prime.pb(i);
    }
    return ;
}

int make,k,dp[190][1150][20];

int call(int idx,int make,int take)
{
    if(take==k){
        if(make==0) return 1;
        else return 0;
    }
    if(idx>=187||prime[idx]>make) return 0;
    int &ret=dp[idx][make][take];
    if(ret!=-1) return ret;
    int p=0,q=0;
    for(int i=0;i<=1&&make-prime[idx]*i>=0;i++){
        p+=call(idx+1,make-prime[idx]*i,take+i);
    }
//    if(make-prime[idx]>=0) p=call(idx+1,make-prime[idx],take+1);
//    q=call(idx+1,make,take);
    return ret=p;
}

int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);

    sieve(1120);
    while(scanf("%d %d",&make,&k)!=EOF){
        if(!(make+k)) break;
        memset(dp,-1,sizeof dp);
        printf("%d\n",call(0,make,0));
    }
    return 0;
}

