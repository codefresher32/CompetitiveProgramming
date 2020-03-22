#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

vector<int>G[100005];
bool vis[100005];
bool f;
int cv,ce;

void dfs(int s,int fr)
{
    if(vis[s]){
        return ;
    }
    cv++;
    vis[s]=1;
    for(int v:G[s]){
        if(v==fr){
            continue;
        }
        ce++;
        dfs(v,s);
    }
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,u,v;
    cin>>n>>m;
    for(int i=1;i<=m;i++){
        cin>>u>>v;
        G[u].push_back(v);
        G[v].push_back(u);
    }
    int cnt=0;
    for(int i=1;i<=n;i++){
        if(!vis[i]){
            dfs(i,-1);
            //cout<<cv<<" "<<ce<<endl;
            if(cv-1==ce){
                cnt++;
            }
            cv=ce=0;
        }
    }
    cout<<cnt<<endl;
    return 0;
}


