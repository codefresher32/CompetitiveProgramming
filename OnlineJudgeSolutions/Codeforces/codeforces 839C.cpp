#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

vector<int>G[100005];
bool vis[100005];


double dfs(int s,int fr)
{
    double sum=0;
    int cnt=0;
    vis[s]=1;
    for(int v:G[s]){
        if(v!=fr){
            sum+=dfs(v,s)+1;
            cnt++;
        }
    }
    if(!cnt){
        return 0.0;
    }
    else{
        return (sum*1.0)/(cnt*1.0);
    }
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,n,u,v,m;
    cin>>n;
    for(int i=1;i<n;i++){
        cin>>u>>v;
        G[u].push_back(v);
        G[v].push_back(u);
    }
    cout<<fixed<<setprecision(15)<<dfs(1,-1)<<endl;
    return 0;
}

