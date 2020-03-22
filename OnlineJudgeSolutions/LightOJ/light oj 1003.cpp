#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

vector<int>G[10005];
int vis[10005];
map<string,int>mp;
int f;

void dfs(int s)
{
    vis[s]=1;
    for(int v:G[s]){
        if(vis[v]==0){
            dfs(v);
        }
        else if(vis[v]==1){
            f=1;
        }
    }
    vis[s]=2;
    return ;
}

void clr(int n)
{
    for(int i=1;i<=n;i++){
        G[i].clear();
    }
    mp.clear();
    memset(vis,0,sizeof(vis));
    f=0;
    return ;
}


int main()
{
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    int n,m,u,v,t,id;
    string s1,s2;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        id=0;
        scanf("%d",&n);
        for(int j=1;j<=n;j++){
            cin>>s1>>s2;
            if(mp[s1]==0){
                mp[s1]=++id;
            }
            if(mp[s2]==0){
                mp[s2]=++id;
            }
            G[mp[s1]].push_back(mp[s2]);
        }
        for(int j=1;j<=n;j++){
            if(!vis[j]){
                dfs(j);
            }
        }
        printf("Case %d: ",i);
        if(f){
            printf("No\n");
        }
        else{
            printf("Yes\n");
        }
        clr(n);
    }
    return 0;
}
