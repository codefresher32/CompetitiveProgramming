#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back
#define ppb pop_back

vector<int>G[5005];
bool vis[5005];
int c[5005];
int id,mx,dia;
bool br;
deque<int>d;
set<int>st;

void dfs(int s,int no,bool f)
{
    vis[s]=1;
    if(!f){
        if(G[s].size()==1){
            if(mx<no){
                mx=no;
                id=s;
            }
        }
    }
    if(f&&!br){
        d.pb(s);
    }
    if(f){
        if(G[s].size()==1){
            if(no==dia){
                br=1;
            }
        }
    }
    for(int v:G[s]){
        if(!vis[v]){
            dfs(v,no+1,f);
        }
    }
    if(f&&!br){
        d.ppb();
    }
    return ;
}

void bfs(int s)
{
    queue<int>q;
    memset(c,-1,sizeof(c));
    c[s]=1;
    q.push(s);
    int u;
    while(!q.empty()){
        u=q.front();
        q.pop();
        for(int v:G[u]){
            if(c[v]==-1){
                c[v]=c[u]+1;
                if(c[v]==dia){
                    st.insert(v);
                }
                q.push(v);
            }
        }
    }
}

void clr(int n)
{
    for(int i=1;i<=n;i++){
        G[i].clear();
    }
    memset(vis,0,sizeof(vis));
    d.clear();
    st.clear();
    id=mx=dia=br=0;
    return ;
}



int main()
{
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    int n,m,u,v;
    while(scanf("%d",&n)!=EOF){
        for(int i=1;i<=n;i++){
            scanf("%d",&m);
            while(m--){
                scanf("%d",&v);
                G[i].pb(v);
            }
        }
        dfs(1,1,0);
        memset(vis,0,sizeof(vis));
        mx=0;
        dfs(id,1,0);
        memset(vis,0,sizeof(vis));
        dia=mx;
        //cout<<dia<<endl;
        dfs(id,1,1);
        memset(vis,0,sizeof(vis));
        printf("Best Roots  :");
        int r1,r2;
         r1=d[d.size()/2-1];
         r2=d[d.size()/2];
         int l=d.size();
         d.clear();
         mx=br=0;
         dfs(r2,1,0);
        memset(vis,0,sizeof(vis));
        dia=mx;
        bfs(r2);
        if(l%2){
            printf(" %d\n",r2);
        }
        else{
            bfs(r1);
            if(r1>r2){
                swap(r1,r2);
            }
            printf(" %d %d\n",r1,r2);
        }
        printf("Worst Roots :");
        for(int xx:st){
            printf(" %d",xx);
        }
        printf("\n");
        clr(n);
    }

    return 0;
}


