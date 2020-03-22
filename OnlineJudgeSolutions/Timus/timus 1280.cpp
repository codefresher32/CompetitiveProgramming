#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pii pair<int,int>
#define F first
#define S second
#define pb push_back
#define pp pop_back

vector<int>G[1005];
int ind[1005],a[1005];


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,u,v;
    cin>>n>>m;
    for(int i=1;i<=m;i++){
        cin>>u>>v;
        G[u].pb(v);
        ind[v]++;
    }
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
//    for(int i=1;i<=n;i++){
//        cout<<ind[i]<<" ";
//    }
//    cout<<endl;
    for(int i=1;i<=n;i++){
        if(ind[a[i]]){
            cout<<"NO\n";
            return 0;
        }
        for(int vv:G[a[i]]){
            ind[vv]--;
        }
    }
    cout<<"YES\n";
    return 0;
}



