#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

vector<int>G[200005];
bool vis[200005];
int a[200005];
queue<int>q;

int get(int u,int v)
{
    return binary_search(G[u].begin(),G[u].end(),v);
}

bool bfs(int s)
{
    int u,l=1,r=0;
    vis[s]=1;
    q.push(s);
    if(s!=a[r]){
        return 0;
    }
    while(!q.empty()){
       u=q.front();
       q.pop();
       r=l-1;
       for(int v:G[u]){
          if(!vis[v]){
             r++;
          }
       }
       while(l<=r){
            int v=a[l];
            if(!get(u,v)){
                return 0;
            }
            q.push(v);
            vis[v]=1;
            l++;
       }
    }
    return 1;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,u,v;
    cin>>n;
    for(int i=1;i<n;i++){
        cin>>u>>v;
        G[u].push_back(v);
        G[v].push_back(u);
    }
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=1;i<=n;i++){
        sort(G[i].begin(),G[i].end());
    }
    if(!bfs(1)){
        cout<<"No\n";
    }
    else{
        cout<<"Yes\n";
    }
    return 0;
}


