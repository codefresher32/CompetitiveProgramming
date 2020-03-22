#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back
#define ppb pop_back

vector<int>G[100005];
bool vis[100005],sf[100005];
int a[100005];

void dfs(int s)
{
    vis[s]=1;
    for(int v:G[s]){
        if(!vis[v]){
            if(!a[v]){
                sf[s]=1;
            }
            dfs(v);
        }
    }
    return ;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,u,v,root;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>v>>a[i];
        if(a[i]==0){
            sf[i]=1;
        }
        if(v==-1){
            root=i;
            continue;
        }
        G[i].pb(v);
        G[v].pb(i);
    }
    dfs(root);
    bool f=0;
    for(int i=1;i<=n;i++){
        if(!sf[i]){
            f=1;
            cout<<i<<" ";
        }
    }
    if(!f){
        cout<<-1<<endl;
    }
    return 0;
}
