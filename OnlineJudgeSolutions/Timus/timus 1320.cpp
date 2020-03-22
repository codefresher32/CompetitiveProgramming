#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pii pair<int,int>
#define F first
#define S second
#define pb push_back
#define pp pop_back

vector<int>G[1055];
bool vis[1055];
int cnt;

void dfs(int s)
{
    vis[s]=1;
    for(int v:G[s]){
        cnt++;
        if(!vis[v]){
            dfs(v);
        }
    }
    return ;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    set<int>st;
    int u,v;
    while(cin>>u>>v){
        G[u].pb(v);
        G[v].pb(u);
        st.insert(u);
        st.insert(v);
    }
    bool f=0;
    for(int x:st){
        if(!vis[x]){
            dfs(x);
            //cout<<cnt<<endl;
            cnt/=2;
            if(cnt%2){
                f=1;
            }
            cnt=0;
        }
    }
    if(!f){
        cout<<1<<endl;
    }
    else{
        cout<<0<<endl;
    }
    return 0;
}



