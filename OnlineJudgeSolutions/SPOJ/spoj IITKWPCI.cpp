#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define pi pair<char,int>
#define pii pair<int,int>
#define F first
#define S second
#define pb push_back
#define pp pop_back
#define mod 100000007

int par[1005];
int arr[1005];
map<int,vector<int>>mp;
map<int,vector<int>>pm;

int FindP(int node)
{
    if(node==par[node]) return node;
    return par[node]=FindP(par[node]);
}

void Union(int u,int v)
{
    u=FindP(u),v=FindP(v);
    if(u!=v) par[v]=u;
    return ;
}

int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int t,len,n,u,v,m;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&n,&m);
        for(int i=1;i<=n;i++){
            par[i]=i;
            scanf("%d",&arr[i]);
        }
        for(int i=1;i<=m;i++){
            scanf("%d %d",&u,&v);
            if(FindP(u)!=FindP(v)) Union(u,v);
        }
        vector<int>st;
        for(int i=1;i<=n;i++){
            u=FindP(i);
            st.pb(u);
            mp[u].pb(arr[i]);
            pm[u].pb(i);
        }
        for(int x:st){
            sort(mp[x].begin(),mp[x].end());
            sort(pm[x].begin(),pm[x].end());
        }
        for(int x:st){
            for(int i=0;i<mp[x].size();i++){
                arr[pm[x][i]]=mp[x][i];
            }
        }
        for(int i=1;i<=n;i++) printf("%d ",arr[i]);
        printf("\n");
        mp.clear(),pm.clear();
    }

    return 0;
}
