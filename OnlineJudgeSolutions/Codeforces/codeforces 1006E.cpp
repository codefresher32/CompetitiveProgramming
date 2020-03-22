#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
vector<int>G[200005],ans;
bool vis[200005];
int st[200005],fin[200005];
int x,y,ti;

void dfs(int s)
{
   vis[s]=1;
   st[s]=ti++;
   ans.push_back(s);
   for(int v:G[s]){
        if(!vis[v]){
            dfs(v);
        }
   }
   fin[s]=ti-1;
   return ;
}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,q,u,v;
    cin>>n>>q;
    for(int i=2;i<=n;i++){
        cin>>u;
        G[u].push_back(i);
        //G[i].push_back(u);
    }
    dfs(1);
    while(q--){
        cin>>x>>y;
        u=fin[x]-st[x]+1;
        if(u<y){
            cout<<-1<<endl;
        }
        else{
            cout<<ans[st[x]+y-1]<<endl;
        }
    }
    return 0;
}


