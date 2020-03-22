#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

vector<int>ans;
vector<int>G[1000005];
int vis[1000005];
bool f;

void dfs(int s)
{
    if(f){
        return ;
    }
    vis[s]=1;
    for(int v:G[s]){
        if(!vis[v]){
            dfs(v);
        }
        else if(vis[v]==1){
            f=1;
        }
    }
    vis[s]=2;
    ans.push_back(s);
    return ;
}

void clr(int n)
{
    for(int i=1;i<=n;i++){
        G[i].clear();
    }
    memset(vis,0,sizeof(vis));
    f=0;
    ans.clear();
    return ;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,u,v,id;
    string s1,s2;
    while(cin>>n>>m,n,m){
        id=0;
        for(int i=1;i<=m;i++){
            cin>>u>>v;
            G[u].push_back(v);
        }
//        for(int i=1;i<=id;i++){
//            sort(G[i].begin(),G[i].end());
//        }
        for(int i=1;i<=n&&!f;i++){
            if(!vis[i]){
                dfs(i);
            }
        }
        if(f){
            printf("IMPOSSIBLE\n");
        }
        else{
            for(int i=ans.size()-1;i>=0;i--){
                cout<<ans[i]<<endl;
            }
        }
        clr(n);
    }
    return 0;
}


