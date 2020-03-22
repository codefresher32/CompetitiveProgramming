#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

vector<int>G[100005];
int a[100005],mn;
bool vis[100005],f;

void dfs(int s,int mx)
{
    vis[s]=1;
    for(int v:G[s]){
        if(!vis[v]){
            if(mx>a[v]&&a[v]){
                f=1;
            }
            dfs(v,max(mx,a[v]));
        }
    }
    mn=max(mn,a[s]);
    return ;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,u,v,x;
    cin>>n;
    for(int i=2;i<=n;i++){
        cin>>u;
        G[u].push_back(i);
        G[i].push_back(u);
    }
    for(int i=1;i<=n;i++){
        cin>>x;
        a[i]=(x==-1)?0:x;
    }
    dfs(1,a[1]);
    if(f){
        cout<<-1<<endl;
    }
    else{
        cout<<mn<<endl;
    }
    return 0;
}




