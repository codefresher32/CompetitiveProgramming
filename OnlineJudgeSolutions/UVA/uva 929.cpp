#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pii pair<int,int>

struct Node
{
    int r,c,w;
    Node(int x,int y,int z)
    {
        r=x;
        c=y;
        w=z;
    }
    bool operator<(const Node &n)const
    {
        return w>n.w;
    }
};

int fx[]={1,-1,0,0};
int fy[]={0,0,1,-1};
int c[1000][1000];
int cost[1000][1000];
priority_queue<Node>pq;
int n,m;

void dijkstra()
{
    int u,v,tx,ty;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cost[i][j]=INT_MAX;
        }
    }
    cost[1][1]=c[1][1];
    pq.push(Node(1,1,c[1][1]));
    while(!pq.empty()){
        Node top=pq.top();
        pq.pop();
        for(int i=0;i<4;i++){
           tx=fx[i]+top.r;
           ty=fy[i]+top.c;
           if(tx<1||ty<1||tx>n||ty>m){
                continue;
           }
            if(cost[top.r][top.c]+c[tx][ty]<cost[tx][ty]){
                cost[tx][ty]=cost[top.r][top.c]+c[tx][ty];
                pq.push(Node(tx,ty,cost[tx][ty]));
            }
        }
    }
    return ;
}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,w;
    cin>>t;
    while(t--){
        cin>>n>>m;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                cin>>c[i][j];
            }
        }
        dijkstra();
        cout<<cost[n][m]<<endl;
    }

    return 0;
}
