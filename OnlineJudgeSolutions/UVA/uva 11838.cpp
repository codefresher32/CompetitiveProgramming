 #include<bits/stdc++.h>
using namespace std;

typedef long long ll;
vector<int>G[2005];
vector<int>E[2005];
bool vis[2005];
stack<int>st;

void dfs1(int s)
{
    vis[s]=1;
    for(int v:G[s]){
        if(!vis[v]){
            dfs1(v);
        }
    }
    st.push(s);
    return ;
}

void dfs2(int s)
{
    vis[s]=1;
    for(int v:E[s]){
        if(!vis[v]){
            dfs2(v);
        }
    }
    return ;
}


void clr(int n)
{
    for(int i=0;i<=n;i++){
        G[i].clear();
        E[i].clear();
    }
    memset(vis,0,sizeof(vis));
    return ;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,u,v,x,y,p;
    while(cin>>n>>m){
        if(n==0&&m==0){
            return 0;
        }
        for(int i=1;i<=m;i++){
            cin>>u>>v>>p;
            G[u].push_back(v);
            E[v].push_back(u);
            if(p==2){
                G[v].push_back(u);
                E[u].push_back(v);
            }
        }
        for(int i=1;i<=n;i++){
            if(!vis[i]){
                dfs1(i);
            }
        }
        int cnt=0;
        memset(vis,0,sizeof(vis));
        while(!st.empty()){
            u=st.top();
            st.pop();
            //cout<<u<<endl;
            if(!vis[u]){
                dfs2(u);
                cnt++;
            }
        }
        (cnt>1)?printf("0\n"):printf("1\n");
        cout<<cnt<<endl;
        clr(n);
    }
    return 0;
}



