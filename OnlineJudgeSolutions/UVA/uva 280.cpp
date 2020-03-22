#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

vector<int>G[105];
vector<int>v;
int vis[105];
queue<int>q;

void bfs(int s)
{
    int u,v;
    q.push(s);
    while(!q.empty()){
        u=q.front();
        for(int i=0;i<G[u].size();i++){
            v=G[u][i];
            if(!vis[v]){
                vis[v]=1;
                q.push(v);
            }
        }
        q.pop();
    }
    return ;
}

void clr(int f)
{
    memset(vis,0,sizeof(vis));
    v.clear();
    if(f){
        for(int i=0;i<105;i++){
            G[i].clear();
        }
    }
    return ;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,l,x,y,t,m,u;
    while(cin>>n){
        if(n==0){
            return 0;
        }
        while(cin>>m){
            if(m==0){
                break;
            }
            while(cin>>x){
                if(x==0){
                    break;
                }
                G[m].push_back(x);
            }
        }
        cin>>t;
        while(t--){
            cin>>u;
            bfs(u);
            for(int i=1;i<=n;i++){
                if(!vis[i]){
                    v.push_back(i);
                }
            }
            cout<<v.size();
            for(int i=0;i<v.size();i++){
                cout<<" "<<v[i];
            }
            cout<<endl;
            clr(0);
        }
        clr(1);
    }
    return 0;
}
