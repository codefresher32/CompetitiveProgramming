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

char ans[100005];
int par[100005];
map<int,vector<char>>mp;
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
    int t,len,n,u,v;
    scanf("%d",&t);
    string s;
    while(t--){
        cin>>s,len=s.size();
        scanf("%d",&n);
        for(int i=0;i<=len;i++) par[i]=i;
        for(int i=1;i<=n;i++){
            scanf("%d %d",&u,&v);
            if(FindP(u)!=FindP(v)) Union(u,v);
        }
        set<int>st;
        for(int i=0;i<len;i++){
            u=FindP(i);
            st.insert(u);
            mp[u].pb(s[i]);
            pm[u].pb(i);
        }
        for(int x:st){
            sort(mp[x].begin(),mp[x].end());
            sort(pm[x].begin(),pm[x].end());
        }
        for(int x:st){
            for(int i=0;i<mp[x].size();i++){
                ans[pm[x][i]]=mp[x][i];
            }
        }
        ans[len]='\0';
        cout<<ans<<"\n";
        mp.clear(),pm.clear();
    }

    return 0;
}
