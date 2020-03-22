#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

vector<int>G[100005];
int c[2];

void dfs(int s,int fr,int clr)
{
    c[clr]++;
    for(int v:G[s]){
        if(v!=fr){
            dfs(v,s,!clr);
        }
    }
    return ;
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
    dfs(1,0,0);
    cout<<(ll)c[0]*c[1]-(n-1)<<endl;
    return 0;
}

