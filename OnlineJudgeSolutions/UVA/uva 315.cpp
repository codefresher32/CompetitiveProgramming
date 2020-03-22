#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

vector<int>G[105];
int start[105],parrent[105],low[105];
bool arti_vis[105];
int root,rootcnt,ti;

void articulation_point(int s)
{
    start[s]=low[s]=++ti;
    for(int v:G[s]){
        if(!start[v]){
            if(s==root){
                rootcnt++;
            }
            parrent[v]=s;
            articulation_point(v);
            if(low[v]>=start[s]){
                arti_vis[s]=1;
            }
            low[s]=min(low[s],low[v]);
        }
        else if(v!=parrent[s]){
            low[s]=min(low[s],start[v]);
        }
    }
    return ;
}


void clr(int n)
{
    for(int i=1;i<=n;i++){
        G[i].clear();
    }
    memset(start,0,sizeof(start));
    memset(low,0,sizeof(start));
    memset(parrent,0,sizeof(start));
    memset(arti_vis,0,sizeof(arti_vis));
    return ;
}


int main()
{
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    int u,v,l,m,k,t,n;
    char ch;
    while(scanf("%d",&n)!=EOF&&n){
        while(scanf("%d",&u)!=EOF&&u){
            while(scanf("%d%c",&v,&ch)!=EOF){
                G[u].push_back(v);
                G[v].push_back(u);
                if(ch=='\n'){
                    break;
                }
            }
        }
        int cnt=0;
        for(int i=1;i<=n;i++){
           if(!arti_vis[i]){
                root=i;
                rootcnt=0;
                articulation_point(i);
                arti_vis[root]=(rootcnt>1);
           }
           if(arti_vis[i]){
                cnt++;
           }
        }
        printf("%d\n",cnt);
        clr(n);
    }
    return 0;
}



