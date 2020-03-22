#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

vector<int>G[1000];
int c[100];
int vis[100];
queue<int>q;
map<string,int>mp;

void clr(int f)
{
    memset(c,0,sizeof(c));
    memset(vis,0,sizeof(vis));
    if(f){
        mp.clear();
        for(int i=0;i<1000;i++){
            G[i].clear();
        }
    }
    return ;
}

void bfs(int s)
{
    int u,v;
    vis[s]=1;
    c[s]=0;
    q.push(s);
    while(!q.empty()){
        u=q.front();
        q.pop();
        for(int i=0;i<G[u].size();i++){
            v=G[u][i];
            if(!vis[v]){
                vis[v]=1;
                c[v]=c[u]+1;
                q.push(v);
            }
        }
    }
    return ;
}



int main()
{

    int t,n,m,p,x,y,u,v,tc=0;
    string s1,s2;
    printf("SHIPPING ROUTES OUTPUT\n");
    scanf("%d",&t);
    while(t--){
        printf("\nDATA SET  %d\n\n",++tc);
        scanf("%d %d %d",&n,&m,&p);
        for(int i=1;i<=n;i++){
            cin>>s1;
            mp[s1]=i;
        }
        for(int i=1;i<=m;i++){
            cin>>s1>>s2;
            G[mp[s1]].push_back(mp[s2]);
            G[mp[s2]].push_back(mp[s1]);
        }
        int sz;
        for(int i=1;i<=p;i++){
            cin>>x>>s1>>s2;
            bfs(mp[s1]);
            sz=c[mp[s2]];
            if(mp[s1]==0||mp[s2]==0){
                printf("$0\n");
            }
            else if(sz==0){
                printf("NO SHIPMENT POSSIBLE\n");
            }
            else{
                printf("$%d\n",sz*100*x);
            }
            clr(0);
        }
        clr(1);
    }
    printf("\nEND OF OUTPUT\n");
    return 0;
}

