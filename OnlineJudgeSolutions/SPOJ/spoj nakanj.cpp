#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int fx[]={2,2,-2,-2,1,1,-1,-1};
int fy[]={1,-1,1,-1,2,-2,2,-2};
struct node
{
    int x,y;
    node(int a,int b)
    {
        x=a;
        y=b;
    }
};
bool vis[10][10];
int cost[10][10];
queue<node>q;

void clr()
{
    memset(vis,0,sizeof(vis));
    memset(cost,0,sizeof(cost));
    return ;
}

void bfs(int sx,int sy)
{
    int tx,ty;
    vis[sx][sy]=1;
    cost[sx][sy]=0;
    q.push(node(sx,sy));
    while(!q.empty()){
        node tp=q.front();
        q.pop();
        for(int i=0;i<8;i++){
            tx=fx[i]+tp.x;
            ty=fy[i]+tp.y;
            if(tx>0&&tx<9&&ty>0&&ty<9&&vis[tx][ty]==0){
                vis[tx][ty]=1;
                cost[tx][ty]=cost[tp.x][tp.y]+1;
                q.push(node(tx,ty));
            }
        }
    }
    return ;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    char cs,cd;
    int sx,sy,dx,dy,t;
    cin>>t;
    while(t--){
        cin>>cs>>sy>>cd>>dy;
        sx=cs-'a'+1;
        dx=cd-'a'+1;
        bfs(sx,sy);
        cout<<cost[dx][dy]<<endl;
        clr();
    }
    return 0;
}

