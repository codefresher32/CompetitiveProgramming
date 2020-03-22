#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pii pair<int,int>
#define pb push_back
#define ppb pop_back
#define F first
#define S second


vector<int>G[1005];
bool vis[1005],c[1005];
set<pii>st;


void dfs(int s,int fr)
{
    int a,b;
    vis[s]=1;
    for(int v:G[s]){
        if(!vis[v]){
            dfs(v,s);
        }
        else if(v!=fr){
            a=s;
            b=v;
            if(a>b){
                swap(a,b);
            }
            st.insert({a,b});
        }
    }
    return ;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,u,v,m;
    cin>>n;
    vector<int>vc;
    for(int i=1;i<n;i++){
        cin>>u>>v;
        G[u].pb(v);
        G[v].pb(u);
    }
    for(int i=1;i<=n;i++){
        if(!vis[i]){
           vc.pb(i);
           dfs(i,-1);
        }
    }
//    for(pii pp:p){
//        cout<<pp.F<<" "<<pp.S<<endl;
//    }
    int k=0;
    if(vc.size()!=1){
        cout<<vc.size()-1<<endl;
        u=vc[0];
        for(auto s:st){
            cout<<s.F<<" "<<s.S<<" "<<u<<" "<<vc[++k]<<endl;
        }
    }
    else{
        cout<<0<<endl;
    }
    return 0;
}
