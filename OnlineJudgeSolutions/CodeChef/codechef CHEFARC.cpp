#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pii pair<int,int>
#define F first
#define S second
#define pb push_back
#define pp pop_back

map<pii,int>mp;


void bfs(int x,int k,int d[105],vector<int>vv[10005])
{
    queue<int>q;
    d[x]=0;
    q.push(x);
    while(!q.empty()){
        int u=q.front();
        q.pop();
        for(int v:vv[u]){
            if(d[v]==-1){
                d[v]=d[u]+1;
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
    int t,n,u,v,k1,k2,m;
    int s[105][105]={{0}},d1[105],d2[105];
    cin>>t;
    while(t--){
        vector<pii>vc;
        cin>>n>>m>>k1>>k2;
        int id=0;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                cin>>s[i][j];
                if(!s[i][j]){
                    vc.pb({i,j});
                    mp[{i,j}]=++id;
                }
            }
        }
        vector<int>v1[10005],v2[10005];
        for(int i=0;i<vc.size();i++){
            for(int j=i+1;j<vc.size();j++){
                u=abs(vc[i].F-vc[j].F)+abs(vc[i].S-vc[j].S);
                if(u<=k1){
                   v1[mp[vc[i]]].pb(mp[vc[j]]);
                   v1[mp[vc[j]]].pb(mp[vc[i]]);
                }
                if(u<=k2){
                    v2[mp[vc[i]]].pb(mp[vc[j]]);
                    v2[mp[vc[j]]].pb(mp[vc[i]]);
                }
            }
        }

        memset(d1,-1,sizeof(d1));
        memset(d2,-1,sizeof(d2));
        bfs(mp[{1,1}],k1,d1,v1);
        bfs(mp[{1,m}],k2,d2,v2);
        int mx=INT_MAX;
        for(pii yy:vc){
            u=mp[{yy}];
            if(d1[u]!=-1&&d2[u]!=-1){
                mx=min(mx,max(d1[u],d2[u]));
            }
        }
        if(mx==INT_MAX){
            mx=-1;
        }
        cout<<mx<<endl;
        mp.clear();

    }
    return 0;
}



