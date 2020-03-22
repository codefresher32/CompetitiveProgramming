#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

vector<int>G[10000];
vector<char>ans;
int c[10000];
int vis[10000];
int p[10000];
queue<int>q;
map<char,int>mp;
map<int,char>sp;

void bfs(int s)
{
    c[s]=0;
    p[s]=s;
    vis[s]=1;
    int u,v;
    q.push(s);
    while(!q.empty()){
        u=q.front();
        for(int i=0;i<G[u].size();i++){
            v=G[u][i];
            if(!vis[v]){
                vis[v]=1;
                c[v]=c[u]+1;
                q.push(v);
                p[v]=u;
            }
        }
        q.pop();
    }
    return ;
}

void clr(int f)
{
    memset(c,0,sizeof(c));
    memset(vis,0,sizeof(vis));
    memset(p,0,sizeof(p));
    ans.clear();
    if(f){
        mp.clear();
        sp.clear();
        for(int i=0;i<=350;i++){
            G[i].clear();
        }
    }
    return ;
}

void pathprint(int s,int d)
{
    while(s!=d){
        ans.push_back(sp[d]);
        d=p[d];
    }
    ans.push_back(sp[s]);
    for(int i=ans.size()-1;i>=0;i--){
        printf("%c",ans[i]);
    }
    printf("\n");
    return ;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,l,x,y,t,m;
    string s1,s2;
    cin>>t;
    bool f=false;
    while(t--){
        int id=0;
        cin>>n>>m;
        for(int i=0;i<n;i++){
            cin>>s1>>s2;
            if(!mp[s1[0]]){
                mp[s1[0]]=++id;
                sp[id]=s1[0];
            }
            if(!mp[s2[0]]){
                mp[s2[0]]=++id;
                sp[id]=s2[0];
            }
            G[mp[s1[0]]].push_back(mp[s2[0]]);
            G[mp[s2[0]]].push_back(mp[s1[0]]);
        }
        if(f){
            printf("\n");
        }
        f=1;
        while(m--){
            cin>>s1>>s2;
            bfs(mp[s1[0]]);
            pathprint(mp[s1[0]],mp[s2[0]]);
            clr(0);
        }
        clr(1);
    }

    return 0;
}

