#include<bits/stdc++.h>
#include <cmath>
using namespace std;

typedef long long ll;

#define pii pair<int,int>
#define pi pair<char,char>
#define F first
#define S second
#define pb push_back
#define pp pop_back
#define mod 1000003
#define ex 1e-7

vector<int>G[260];
deque<int>ans;
bool f,vis[260];
int n;

void dfs(int s)
{
    if(f){
        return ;
    }
    int u;
    vis[s]=1;
    for(int v:G[s]){
        if(!vis[v]){
            ans.pb(v);
            dfs(v);
        }
        else if(ans.size()+1==n&&v==1){
            ans.pb(v);
            f=1;
        }
    }
    if(ans.size()!=n){
        ans.pp();
        vis[s]=0;
    }
}

int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int u,v;
    char s[10];
    while(scanf("%d",&n)!=EOF){
        getchar();
        while(gets(s)&&s[0]!='%'){
            sscanf(s,"%d %d",&u,&v);
            G[u].pb(v);
            G[v].pb(u);
        }
        dfs(1);
        if(ans.size()==n){
            printf("1");
            for(int x:ans){
                printf(" %d",x);
            }
        }
        else{
            printf("N");
        }
        printf("\n");
        for(int i=1;i<=n;i++){
            G[i].clear();
            vis[i]=0;
        }
        f=0;
        ans.clear();
    }
    return 0;
}


