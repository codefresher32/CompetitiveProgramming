 #include<bits/stdc++.h>
using namespace std;

typedef long long ll;
vector<int>G[1005];
vector<int>E[1005];
bool vis[1005];
map<string,int>mp;
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
    mp.clear();
    memset(vis,0,sizeof(vis));
    return ;
}


int main()
{
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    int n,m,u,v,id;
    string s1,s2;
    while(scanf("%d%d",&n,&m)!=EOF){
        id=0;
        if(n==0&&m==0){
            return 0;
        }
        getchar();
        for(int i=1;i<=n;i++){
            getline(cin,s1);
            mp[s1]=++id;
        }
        for(int i=1;i<=m;i++){
            getline(cin,s1);
            getline(cin,s2);
            G[mp[s1]].push_back(mp[s2]);
            E[mp[s2]].push_back(mp[s1]);
        }
        for(int i=1;i<=n;i++){
            if(!vis[i]){
                dfs1(i);
            }
        }
        memset(vis,0,sizeof(vis));
        int cnt=0;
        while(!st.empty()){
            u=st.top();
            st.pop();
            if(!vis[u]){
               dfs2(u);
               cnt++;
            }
        }
        cout<<cnt<<endl;
        clr(n);
    }
    return 0;
}

