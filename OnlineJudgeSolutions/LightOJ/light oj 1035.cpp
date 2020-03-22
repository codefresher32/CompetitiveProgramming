#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define pii pair<int,int>
#define pi pair<char,char>
#define F first
#define S second
#define pb push_back
#define pp pop_back

vector<int>prime;
bool vis[105];
vector<map<int,int>>G;


void sieve(int n)
{
    int sr=sqrt(n);
    prime.pb(2);
    for(int i=3;i<=sr;i+=2){
        if(!vis[i]){
            for(int j=i*i;j<=n;j+=2*i){
                vis[j]=1;
            }
        }
    }
    for(int i=3;i<=n;i+=2){
        if(!vis[i]) prime.pb(i);
    }
    return ;
}


void fac(int n)
{
    map<int,int>mp;
    int m,sq=sqrt(n);
    m=n;
    for(int i=0;i<prime.size()&&prime[i]<=sq;i++){
        if(n%prime[i]==0){
            int p=0;
            while(n%prime[i]==0){
                n/=prime[i];
                p++;
            }
            sq=sqrt(n);
            mp[prime[i]]=p;
        }
    }
    if(n!=1) mp[n]++;
    G.pb(mp);
    return ;
}


int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int t,id=0;
    sieve(100);
    map<int,int>mp;
    G.pb(mp),G.pb(mp);
    for(int i=2;i<=100;i++){
        fac(i);
    }
    int a[105];
    scanf("%d",&t);
    int n;
    while(t--){
        scanf("%d",&n);
        printf("Case %d: %d = ",++id,n);
        memset(a,0,sizeof(a));
        for(int i=2;i<=n;i++){
            for(auto v:G[i]){
                a[v.F]+=v.S;
            }
        }
        printf("2 (%d)",a[2]);
        for(int i=3;i<=n;i++){
            if(a[i]) printf(" * %d (%d)",i,a[i]);
        }
        printf("\n");
    }

    return 0;
}
