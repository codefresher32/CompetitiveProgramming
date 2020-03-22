#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pii pair<int,int>
#define F first
#define S second
#define pb push_back
#define pp pop_back


vector<int>G[505];
int vis[505];
int c[505];


void bfs(int s)
{
    memset(c,-1,sizeof(c));
    queue<int>q;
    int u;
    c[s]=0;
    vis[s]=1;
    q.push(s);
    while(!q.empty()){
        u=q.front();
        q.pop();
        for(int v:G[u]){
            if(!vis[v]){
                vis[v]=1;
                c[v]=c[u]+1;
                q.push(v);
            }
        }
    }
    return ;
}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,id=1,tr;
    string s[3];
    map<string,int>mp;
    cin>>n;
    for(int i=1;i<=n;i++){
        bool f=0;
        for(int j=0;j<3;j++){
            cin>>s[j];
            if(s[j]=="Isenbaev"){
                tr=j;
                f=1;
            }
        }
        if(f){
           mp[s[tr]]=1;
        }
        if(!mp[s[0]]){
            mp[s[0]]=++id;
        }
        if(!mp[s[1]]){
            mp[s[1]]=++id;
        }
        if(!mp[s[2]]){
            mp[s[2]]=++id;
        }
        G[mp[s[0]]].pb(mp[s[1]]);
        G[mp[s[0]]].pb(mp[s[2]]);
        G[mp[s[1]]].pb(mp[s[0]]);
        G[mp[s[1]]].pb(mp[s[2]]);
        G[mp[s[2]]].pb(mp[s[0]]);
        G[mp[s[2]]].pb(mp[s[1]]);

    }
    bfs(1);
    for(auto pp:mp){
        cout<<pp.F<<" ";
        if(c[pp.S]==-1){
            cout<<"undefined\n";
        }
        else{
            cout<<c[pp.S]<<endl;
        }
    }
    return 0;
}
