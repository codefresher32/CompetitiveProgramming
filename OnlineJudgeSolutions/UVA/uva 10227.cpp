#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
#define pii pair<int,int>
#define pis pair<string,int>
#define F first
#define S second
#define pb push_back
#define pp pop_back
const double pi=acos(-1);

vector<int>G[105];
int par[105],sz[105];
map<pii,bool>mp;

int FindP(int node)
{
    if(node==par[node]){
        return node;
    }
    return par[node]=FindP(par[node]);
}


void Union(int u,int v)
{
    u=FindP(u),v=FindP(v);
    if(u!=v){
        if(sz[u]>=sz[v]){
            par[v]=u;
            sz[u]+=sz[v];
        }
        else{
            par[u]=v;
            sz[v]+=sz[u];
        }
    }
    return ;
}


int main()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int t,n,tn,u,v;
    char s[10];
    scanf("%d",&t);
    //getchar();
    while(t--){
        scanf("%d %d",&n,&tn);
        mp.clear();
        for(int i=1;i<=n;i++){
            par[i]=i;
            sz[i]=1;
            G[i].clear();
        }
        getchar();
        while(gets(s)){
            if(strlen(s)==0) break;
            sscanf(s,"%d %d",&u,&v);
            if(!mp[{u,v}]){
                G[u].pb(v);
                mp[{u,v}]=1;
            }
        }
        for(int i=1;i<=n;i++){
            sort(G[i].begin(),G[i].end());
        }
//        for(int i=1;i<=n;i++){
//            cout<<i<<" :";
//            for(int x:G[i]){
//                cout<<" "<<x;
//            }
//            cout<<endl;
//        }
        for(int i=1;i<n;i++){
            for(int j=i+1;j<=n;j++){
                if(G[i]==G[j]){
                    Union(i,j);
                }
            }
        }
        for(int i=1;i<=n;i++){
            par[i]=FindP(i);
        }
        set<int>st;
        for(int i=1;i<=n;i++){
            u=FindP(i);
            st.insert(u);
        }
        u=st.size();
        printf("%d\n",u);
        if(t){
            printf("\n");
        }
    }
    return 0;
}



