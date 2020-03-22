#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

vector<int>G[10005];
int a[10004];
int cnt;

void dfs(int u,int va)
{
    if(a[u]!=va){
        cnt++;
    }
    for(int v:G[u]){
        dfs(v,a[u]);
    }
    return ;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,u,v;
    cin>>n;
    for(int i=2;i<=n;i++){
        cin>>u;
        G[u].push_back(i);
        //G[v].push_back(u);
    }
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    dfs(1,0);
    cout<<cnt<<endl;
    return 0;
}

