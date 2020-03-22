#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pii pair<int,int>
#define F first
#define S second
#define pb push_back
#define pp pop_back

struct node
{
    int x,y;
    double z;
    node(int a,int b,double c)
    {
        x=a,y=b,z=c;
    }
    bool operator<(const node &p)const
    {
        return z>p.z;
    }
};
priority_queue<node>pq;
int parrent[205];
//vector<int>G[205];
//double mst[205][205];
//bool vis[205];

int FindParrent(int n)
{
    if(parrent[n]==n){
        return n;
    }
    return parrent[n]=FindParrent(parrent[n]);
}

void Union(int u,int v)
{
    int x,y;
    x=FindParrent(u);
    y=FindParrent(v);
    if(x!=y){
        parrent[y]=x;
    }
    return ;
}

//void dfs(int s)
//{
//    if(vis[s]||s==2){
//        return ;
//    }
//    vis[s]=1;
//    for(int v:G[s]){
//        mx=max(mx,mst[s][v]);
//        dfs(v);
//    }
//    return ;
//}


int main()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int n,m,u,v,w,t,id=0;
    double mx;
    while(scanf("%d",&n)!=EOF&&n){
         int ar1[205]={0},ar2[205]={0};
        for(int i=1;i<=n;i++){
            scanf("%d%d",&ar1[i],&ar2[i]);
        }
        for(int i=1;i<=n;i++){
            parrent[i]=i;
        }
        double xx;
        for(int i=1;i<=n;i++){
            for(int j=i+1;j<=n;j++){
               xx=sqrt((double)(ar1[i]-ar1[j])*(ar1[i]-ar1[j])+(ar2[i]-ar2[j])*(ar2[i]-ar2[j]));
               pq.push({i,j,xx});
            }
        }
        while(!pq.empty()){
            node tp=pq.top();
            pq.pop();
            if(FindParrent(tp.x)!=FindParrent(tp.y)){
//                G[tp.x].pb(tp.y);
//                G[tp.y].pb(tp.x);
//                mst[tp.x][tp.y]=mst[tp.y][tp.x]=tp.z;
                Union(tp.x,tp.y);
                if(FindParrent(1)==FindParrent(2)){
                    mx=tp.z;
                    break;
                }
            }
        }
//        dfs(1);
        printf("Scenario #%d\nFrog Distance = %0.3f\n\n",++id,mx);
        mx=0;
//        for(int i=1;i<=n;i++){
//            G[i].clear();
//        }
//        memset(vis,0,sizeof(vis));
//        memset(mst,0,sizeof(mst));
        while(!pq.empty()){
            pq.pop();
        }
    }

    return 0;
}
/*
4
37 54
87 51
5 7
55 45

*/


