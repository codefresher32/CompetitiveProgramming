#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
#define pii pair<int,int>

vector<int>G[15005];
bool vis[15005];
stack<int>st;

void dfs(int s)
{
    vis[s]=1;
    for(int v:G[s]){
        if(!vis[v]){
            dfs(v);
        }
    }
    st.push(s);
    return ;
}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,u,v;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>u>>v;
        G[u].push_back(v);
    }

    for(int i=1;i<n;i++){
        if(!vis[i]){
            dfs(i);
        }
    }
    while(!st.empty()){
        u=st.top();
        cout<<u<<" ";
        st.pop();
    }
    return 0;
}



