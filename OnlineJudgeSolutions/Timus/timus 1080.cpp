#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

vector<int>G[105];
int c[105];
queue<int>q;

bool bfs(int s)
{
    memset(c,-1,sizeof(c));
    c[s]=0;
    int u,v;
    q.push(s);
    while(!q.empty()){
        u=q.front();
        for(int i=0;i<G[u].size();i++){
            if(c[G[u][i]]==-1){
               c[G[u][i]]=c[u]==1?0:1;
               q.push(G[u][i]);
            }
            else{
                if(c[u]==c[G[u][i]]){
                    return false;
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
            G[v].push_back(i);
        }
    }
    if(bfs(1)){
        for(int i=1;i<=n;i++){
            cout<<c[i];
        }
        cout<<endl;
    }
    else{
        cout<<-1<<endl;
    }
    return 0;
}


