#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

vector<int>G[25];
int c[25];
queue<int>q;

void bfs(int s)
{
   memset(c,-1,sizeof(c));
   int u,v;
   q.push(s);
   c[s]=0;
   while(!q.empty()){
        u=q.front();
        for(int i=0;i<G[u].size();i++){
            if(c[G[u][i]]==-1){
                c[G[u][i]]=c[u]+1;
                q.push(G[u][i]);
            }
        }
        q.pop();
   }
   return ;
}

void clr()
{
    for(int i=0;i<25;i++){
        G[i].clear();
    }
    return ;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,u,v,tc=0;
    bool f=0;
    while(cin>>n){
        for(int i=1;i<=19;i++){
            if(i!=1){
                cin>>n;
            }
            for(int j=1;j<=n;j++){
                cin>>u;
                G[i].push_back(u);
                G[u].push_back(i);
            }
        }
        cin>>n;
        printf("Test Set #%d\n",++tc);
        for(int i=1;i<=n;i++){
            cin>>u>>v;
            bfs(u);
            printf("%2d to %2d: %d\n",u,v,c[v]);
        }
        printf("\n");

        clr();
    }
    return 0;
}
