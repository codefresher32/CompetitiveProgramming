#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

vector<int>G[100005];
map<string,int>mp;
map<int,int>in;
int vis[100005],fr;
stack<int>st;

void dfs(int s,int f)
{
    vis[s]=1;
    for(int v:G[s]){
        if(vis[v]==1){
            fr=1;
        }
        if(!vis[v]){
            dfs(v,f);
        }
    }
    vis[s]=2;
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
    fr=0;
    memset(vis,0,sizeof(vis));
    mp.clear();
    in.clear();
    return ;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s1,s2;

    int id,u,v,t=0;
    while(true){
        id=0;
        while(cin>>s1>>s2){
            if(s1=="0"&&s2=="0"){
                break;
            }
            if(s1[0]>='1'&&s1[0]<='9'&&s2[0]>='1'&&s2[0]<='9'){
               if(!mp[s1]){
                    mp[s1]=++id;
                }
                if(!mp[s2]){
                    mp[s2]=++id;
                }
                G[mp[s1]].push_back(mp[s2]);
                in[mp[s2]]++;
                if(in[mp[s2]]>1){
                    fr=1;
                }
            }
            else{
                return 0;
            }

        }
        for(int i=1;i<=id;i++){
            if(!vis[i]){
                dfs(i,1);
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
        printf("Case %d is ",++t);
        if(!fr&&cnt<=1){
            printf("a tree.\n");
        }
        else{
            printf("not a tree.\n");
        }
        clr(id);
    }
    return 0;
}

