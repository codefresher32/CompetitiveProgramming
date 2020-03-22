#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pii pair<int,string>
#define F first
#define S second
#define pb push_back
#define pp pop_back

vector<int>G[105];
int c[105];
int mx,fin;

void dfs(int s,int sum)
{
    if(c[s]>sum){
        return ;
    }
    c[s]=sum;
    for(int v:G[s]){
        dfs(v,sum+1);
    }
    if(mx<sum||(mx==sum&&fin>s)){
        mx=sum;
        fin=s;
    }
    return ;
}



int main()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int n,u,v,s,id=0;
    while(1){
        scanf("%d",&n);
        if(n==0){
            return 0;
        }
        scanf("%d",&s);
        while(1){
            scanf("%d%d",&u,&v);
            if(!u&&!v){
                break;
            }
            G[u].pb(v);
        }
        memset(c,-1,sizeof(c));
        dfs(s,0);
        printf("Case %d: The longest path from %d has length %d, finishing at %d.\n",++id,s,mx,fin);
        for(int i=1;i<=n;i++){
            G[i].clear();
        }
        printf("\n");
        mx=fin=0;
    }
    return 0;
}



