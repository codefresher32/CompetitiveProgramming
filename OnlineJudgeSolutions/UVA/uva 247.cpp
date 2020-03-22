 #include<bits/stdc++.h>
using namespace std;

typedef long long ll;
vector<int>G[50];
vector<int>E[50];
vector<int>ans[50];
bool vis[50];
map<string,int>mp;
map<int,string>pm;
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

void dfs2(int s,int ind)
{
    vis[s]=1;
    ans[ind].push_back(s);
    for(int v:E[s]){
        if(!vis[v]){
            dfs2(v,ind);
        }
    }
    return ;
}

void clr(int n)
{
    for(int i=0;i<=n;i++){
        G[i].clear();
        E[i].clear();
        ans[i].clear();
    }
    mp.clear();
    pm.clear();
    memset(vis,0,sizeof(vis));
    return ;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int u,v,l=0,m,k,n,x,y,id=0,t=0;
    string s1,s2;
    while(cin>>n>>m){
        if(n==0&&m==0){
            return 0;
        }
        if(l){
            printf("\n");
        }
        id=0;
        for(int i=1;i<=m;i++){
            cin>>s1>>s2;
            if(!mp[s1]){
                mp[s1]=++id;
                pm[id]=s1;
            }
            if(!mp[s2]){
                mp[s2]=++id;
                pm[id]=s2;
            }
            G[mp[s1]].push_back(mp[s2]);
            E[mp[s2]].push_back(mp[s1]);
        }
        for(int i=1;i<=n;i++){
            if(!vis[i]){
                dfs1(i);
            }
        }
        k=0;
        memset(vis,0,sizeof(vis));
        while(!st.empty()){
            u=st.top();
            //cout<<pm[u]<<endl;
            st.pop();
            if(!vis[u]){
                dfs2(u,k++);
            }
        }
        printf("Calling circles for data set %d:\n",++l);
        bool f;
        for(int i=0;i<k;i++){
            cout<<pm[ans[i][0]];
            f=0;
            for(int j=0;j<ans[i].size();j++){
                if(!f){
                    f=1;
                    continue;
                }
                cout<<", "<<pm[ans[i][j]];
            }
            cout<<endl;
        }
        clr(n);
    }
    return 0;
}


