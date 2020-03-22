#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pii pair<int,int>
#define F first
#define S second
#define pb push_back
#define pp pop_back

vector<int>G[100005];


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,u,v;
    cin>>n>>m;
    for(int i=1;i<=m;i++){
        cin>>u>>v;
        G[u].pb(v);
        G[v].pb(u);
    }
    int cno,cnt,ot,cntt;
    cno=cnt=cntt=ot=0;
    for(int i=1;i<=n;i++){
        if(G[i].size()==1){
            cno++;
        }
        else if(G[i].size()==2){
            cnt++;
        }
        else if(G[i].size()==n-1){
            cntt++;
        }
        else{
            ot++;
        }
    }
    if(cno==2&&cnt==n-2){
        printf("bus topology\n");
    }
    else if(cnt==n){
        printf("ring topology\n");
    }
    else if(cntt==1&&cno==n-1){
        printf("star topology\n");
    }
    else{
        printf("unknown topology\n");
    }
    return 0;
}

