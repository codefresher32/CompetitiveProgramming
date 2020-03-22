 #include<bits/stdc++.h>
using namespace std;

typedef long long ll;


vector<int>G[10005];
bool vis[10005];
stack<int>st;

void dfs(int s,int f)
{
    vis[s]=1;
    for(int v:G[s]){
        if(!vis[v]){
            dfs(v,f);
        }
    }
    if(f){
        st.push(s);
    }
    return ;
}

void clr(int n)
{
    for(int i=1;i<=n;i++){
        G[i].clear();
    }
    memset(vis,0,sizeof(vis));
    return ;
}


int main()
{
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    int t,n,m,u,v;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        scanf("%d%d",&n,&m);
        for(int j=1;j<=m;j++){
            scanf("%d%d",&u,&v);
            G[u].push_back(v);
        }
        for(int j=1;j<=n;j++){
            if(!vis[j]){
                dfs(j,1);
            }
        }
        memset(vis,0,sizeof(vis));
        int cnt=0;
        while(!st.empty()){
           u=st.top();
           st.pop();
           if(!vis[u]){
                dfs(u,0);
                cnt++;
           }
        }
        printf("Case %d: %d\n",i,cnt);

        clr(n);
    }
    return 0;
}



