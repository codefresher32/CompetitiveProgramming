#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

vector<int>G[1005];
vector<int>ve;
bool vis[1005];
stack<int>st;

void dfs(int u,int f)
{
    vis[u]=1;
    for(int v:G[u]){
        if(!vis[v]){
            dfs(v,f);
        }
    }
    if(f){
        st.push(u);
    }
    return ;
}


void clr()
{
    for(int i=0;i<1000;i++){
        G[i].clear();
    }
    ve.clear();
    memset(vis,0,sizeof(vis));
    return ;
}



int main()
{
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    int t,n,k,u,v,id=0;
    scanf("%d",&t);
    while(t--){
       scanf("%d",&n);
       while(n--){
            scanf("%d",&k);
            while(k--){
                scanf("%d%d",&u,&v);
                G[u].push_back(v);
                ve.push_back(u);
                ve.push_back(v);
            }
       }
       for(int x:ve){
            if(!vis[x]){
                dfs(x,1);
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
       printf("Case %d: ",++id);
       if(cnt>1){
            printf("NO\n");
       }
       else{
           printf("YES\n");
       }
       clr();
    }
    return 0;
}

