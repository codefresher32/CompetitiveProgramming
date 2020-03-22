#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pii pair<int,string>
vector<int>G[105];
map<string,int>mp;
map<int,string>pm;
vector<pii>p;
bool vis[105];
int cur[105];
int fin[105];
int ti;

void dfs(int s)
{
    vis[s]=1;
    ti++;
    cur[s]=ti;
    for(int v:G[s]){
        if(!vis[v]){
            dfs(v);
        }
    }
    ti++;
    fin[s]=ti;
    return ;
}

void clr()
{
    ti=0;
    for(int i=0;i<=100;i++){
        G[i].clear();
    }
    mp.clear();
    pm.clear();
    p.clear();
    memset(vis,0,sizeof(vis));
    memset(cur,0,sizeof(cur));
    memset(fin,0,sizeof(fin));
    return ;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,u,v,id,tc=0;
    string s1,s2;
    while(cin>>n){
        id=0;
        for(int i=1;i<=n;i++){
            cin>>s1;
            mp[s1]=++id;
            pm[id]=s1;
        }
        cin>>m;
        for(int i=1;i<=m;i++){
            cin>>s1>>s2;
            G[mp[s1]].push_back(mp[s2]);
        }
        for(int i=1;i<=n;i++){
            sort(G[i].begin(),G[i].end());

        }
        for(int i=1;i<=n;i++){
            if(!vis[i]){
                dfs(i);
            }
        }
        for(int i=1;i<=n;i++){
            p.push_back(pii(fin[i],pm[i]));
        }
        sort(p.rbegin(),p.rend());
        printf("Case #%d: Dilbert should drink beverages in this order:",++tc);
        for(int i=0;i<p.size();i++){
            //cout<<p[i].first<<endl;
            printf(" %s",p[i].second.c_str());
        }
        printf(".\n\n");
        clr();
    }

    return 0;
}



