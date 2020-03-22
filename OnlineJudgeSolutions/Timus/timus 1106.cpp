#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

vector<int>G[105];
vector<int>pi;
int c[105];
queue<int>q;

bool bfs(int s)
{
    c[s]=0;
    int u,v;
    q.push(s);
    pi.push_back(s);
    while(!q.empty()){
        u=q.front();
        for(int i=0;i<G[u].size();i++){
            if(c[G[u][i]]==-1){
               c[G[u][i]]=c[u]==1?0:1;
               q.push(G[u][i]);
               if(!c[G[u][i]]){
                    pi.push_back(G[u][i]);
               }
            }
        }
        q.pop();
    }
    return true;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,l,x,y,u,v;
    cin>>n;
    for(int i=1;i<=n;i++){
        while(cin>>v,v){
            G[i].push_back(v);
        }
    }
    memset(c,-1,sizeof(c));
    for(int i=1;i<=n;i++){
        if(c[i]==-1){
            bfs(i);
        }
    }
    cout<<pi.size()<<endl;
    for(int vv:pi){
        cout<<vv<<" ";
    }
    return 0;
}

