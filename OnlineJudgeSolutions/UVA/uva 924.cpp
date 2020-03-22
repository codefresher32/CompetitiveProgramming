#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

vector<int>G[3000];
int c[3000];
int cnt[3000];
int vis[3000];
queue<int>q;

void bfs(int s)
{
    int u,v;
    vis[s]=1;
    c[s]=0;
    q.push(s);
    while(!q.empty()){
        u=q.front();
        q.pop();
        for(int i=0;i<G[u].size();i++){
            v=G[u][i];
            if(!vis[v]){
                vis[v]=1;
                c[v]=c[u]+1;
                q.push(v);
                cnt[c[v]]++;
                //cout<<v<<" "<<c[v]<<endl;
            }
        }
       // cout<<endl;
    }
    return ;
}

void clr(int f)
{
    memset(c,0,sizeof(c));
    memset(cnt,0,sizeof(cnt));
    memset(vis,0,sizeof(vis));
    if(f){
        for(int i=0;i<3000;i++){
            G[i].clear();
        }
    }
    return ;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,u,v,t;
    while(cin>>n){
        for(int i=0;i<n;i++){
            cin>>u;
            while(u--){
                cin>>v;
                G[i].push_back(v);
            }
        }
        cin>>t;
        while(t--){
            cin>>u;
            bfs(u);
            int mx=0,d;
            for(int i=1;i<=n;i++){
                if(cnt[i]>mx){
                    mx=cnt[i];
                    d=i;
                }
            }
            if(mx==0){
                cout<<0<<endl;
            }
            else{
                cout<<mx<<" "<<d<<endl;
            }
            clr(0);
        }
        clr(1);
    }
    return 0;
}


