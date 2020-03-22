#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define pii pair<int,int>
#define pi pair<string,string>
#define F first
#define S second
#define pb push_back
#define pp pop_back

vector<int>G[10005];
int p[10005];
int d[10005][5];


int dfs(int s,int isg)
{
    if(d[s][isg]!=-1){
        return d[s][isg];
    }
    int sum=0;
    for(int v:G[s]){
        if(v!=p[s]){
           p[v]=s;
           if(isg==0){
                sum+=dfs(v,1);
           }
           else{
               sum+=min(dfs(v,0),dfs(v,1));
           }
        }
    }
    return d[s][isg]=sum+isg;
}

void clr(int n)
{

    memset(p,0,sizeof(p));
    for(int i=1;i<=n;i++){
        G[i].clear();
    }
    return ;
}



int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int n,u,v;
    while(scanf("%d",&n)!=EOF){
        if(!n){
            return 0;
        }
        for(int i=1;i<=n;i++){
            scanf("%d",&u);
            for(int j=1;j<=u;j++){
                scanf("%d",&v);
                G[i].pb(v);
            }
        }
        memset(d,-1,sizeof(d));
        int cnt=min(dfs(1,1),dfs(1,0));

        printf("%d\n",max(cnt,1));
        clr(n);
    }

    return 0;
}


