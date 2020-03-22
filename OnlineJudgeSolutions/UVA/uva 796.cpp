#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

vector<int>G[105];
int start[105],parrent[105],low[105];
bool arti_vis[105];
int root,rootcnt,ti;

struct node
{
    int uu,vv;
    node(int x,int y)
    {
        if(x>y){
            swap(x,y);
        }
        uu=x,vv=y;
    }
};

vector<node>pv;

bool compare(const node &A,const node &B)
{
    if(A.uu==B.uu){
        return A.vv<B.vv;
    }
    return A.uu<B.uu;
}


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
            if(low[v]>start[s]){
                pv.push_back(node(v,s));
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
    for(int i=0;i<=n;i++){
        G[i].clear();
    }
    ti=0;
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
    while(scanf("%d",&n)!=EOF){
        for(int i=1;i<=n;i++){
            scanf("%d (%d)",&u,&m);
            for(int j=1;j<=m;j++){
                scanf("%d",&v);
                G[u].push_back(v);
                G[v].push_back(u);
            }
        }
        for(int i=0;i<n;i++){
            if(!arti_vis[i]){
                root=i;
                rootcnt=0;
                articulation_point(i);
                arti_vis[root]=(rootcnt>1);
            }
        }
        sort(pv.begin(),pv.end(),compare);
        int l=pv.size();
        printf("%d critical links\n",l);
        if(l){
            for(auto o:pv){
                printf("%d - %d\n",o.uu,o.vv);
            }
        }
        //puts("");
        printf("\n");
        pv.clear();
        clr(n);
    }
    return 0;
}
