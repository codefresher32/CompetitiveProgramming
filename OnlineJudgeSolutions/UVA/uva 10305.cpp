#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
vector<int>G[105];
int cur[105];
int ti;
int fin[105];
bool vis[105];

void dfs(int s)
{
    ti++;
    cur[s]=ti;
    vis[s]=1;
    //cout<<cur[s]<<endl;
    for(int v:G[s]){
        if(!vis[v]){
            dfs(v);
        }
    }
    ti++;
    fin[s]=ti;
    //cout<<fin[s]<<endl;
    return ;
}

void clr()
{
    for(int i=1;i<=100;i++){
        G[i].clear();
    }
    memset(vis,0,sizeof(vis));
    memset(fin,0,sizeof(fin));
    memset(cur,0,sizeof(cur));
    return ;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,u,v,w,m,sr,ds;
    while(cin>>n>>m){
        if(n==0&&m==0){
            return 0;
        }
        vector<pair<int,int>>p;
       for(int i=1;i<=m;i++){
            cin>>u>>v;
            G[u].push_back(v);
       }
       for(int i=1;i<=n;i++){
            if(!vis[i]){
                dfs(i);
            }
       }
        for(int i=1;i<=n;i++){
            //cout<<fin[i]<<" "<<i<<endl;
            p.push_back(make_pair(fin[i],i));
        }
        sort(p.rbegin(),p.rend());
        for(int i=0;i<p.size();i++){
            cout<<p[i].second<<" ";
        }
        cout<<endl;
        clr();
    }
    return 0;
}

