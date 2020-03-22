#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pii pair<int,int>


vector<pii>G[100005];
bool pv[100005];
int a[100005];
ll n;

ll dijkstra(int s)
{
    int x;
    ll mn=1e18,w,y;
   for(pii v:G[s]){
        x=v.first;
        y=v.second;
      if(!pv[x]){
        mn=min(mn,y);
      }
   }
   return mn;
}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int u,v,l,m,k;
    cin>>n>>m>>k;
    for(int i=1;i<=m;i++){
        cin>>u>>v>>l;
        G[u].push_back(pii(v,l));
        G[v].push_back(pii(u,l));
    }
    for(int i=1;i<=k;i++){
        cin>>a[i];
        pv[a[i]]=1;
    }
    ll mn=1e18,ans;
    for(int i=1;i<=k;i++){
        ans=dijkstra(a[i]);
        mn=min(mn,ans);
    }
    if(mn==1e18){
        cout<<-1<<endl;
    }
    else{
        cout<<mn<<endl;
    }
    return 0;
}

