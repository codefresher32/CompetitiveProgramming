#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

vector<int>G[100005];
vector<int>fi,se;
int c[100005];
bool vis[100005];
bool f;
queue<int>q;


void bfs(int s)
{
    memset(c,-1,sizeof(c));
    int u;
    vis[s]=1;
    c[s]=1;
    q.push(s);
    while(!q.empty()){
        u=q.front();
        q.pop();
        if(c[u]==1){
            fi.push_back(u);
        }
        else{
            se.push_back(u);
        }
        for(int v:G[u]){
            if(c[v]==-1){
                vis[v]=1;
                c[v]=(c[u]==1)?0:1;
                q.push(v);
            }
            else if(c[v]==c[u]){
                f=1;
            }
        }
    }
    return ;
}




int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,u,v;
    cin>>n>>m;
    set<int>st;
    for(int i=1;i<=m;i++){
        cin>>u>>v;
        G[u].push_back(v);
        G[v].push_back(u);
        st.insert(u);
        st.insert(v);
    }
    for(int o:st){
        if(!vis[o]){
            bfs(o);
        }
    }
    if(!f){
        cout<<se.size()<<endl;
        for(int y:se){
            cout<<y<<" ";
        }
        cout<<endl;
        cout<<fi.size()<<endl;
        for(int x:fi){
            cout<<x<<" ";
        }
        cout<<endl;

    }
    else{
        cout<<-1<<endl;
    }
    return 0;
}



