#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define pii pair<int,int>
#define pi pair<string,string>
#define F first
#define S second
#define pb push_back
#define pp pop_back

vector<int>G[100005];
int p[100005];
int d[100005][5];

int dfs(int s,int isg)
{
    if(d[s][isg]!=-1){
        return d[s][isg];
    }
    int sum=0;
    for(int v:G[s]){
        if(v!=p[s]){
           p[v]=s;
           if(isg==0){
                sum+=dfs(v,1);
           }
           else{
               sum+=min(dfs(v,0),dfs(v,1));
           }
        }
    }
    return d[s][isg]=sum+isg;
}



int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,u,v;
    cin>>n;
    while(n>1){
        cin>>u>>v;
        G[u].pb(v);
        G[v].pb(u);
        n--;
    }
    memset(d,-1,sizeof(d));
    int ans=min(dfs(1,0),dfs(1,1));
    cout<<ans<<endl;

    return 0;
}

