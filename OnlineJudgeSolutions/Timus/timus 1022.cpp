#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pii pair<int,int>
#define F first
#define S second
#define pb push_back
#define pp pop_back

vector<int>G[105];
bool vis[105];
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
    int n,m,u,v;
    cin>>n;
    for(int i=1;i<=n;i++){
        while(cin>>u&&u){
            G[i].pb(u);
        }
    }
    for(int i=1;i<=n;i++){
        if(!vis[i]){
            dfs(i);
        }
    }
    while(!st.empty()){
        u=st.top();
        st.pop();
        printf("%d ",u);
    }
    return 0;
}



