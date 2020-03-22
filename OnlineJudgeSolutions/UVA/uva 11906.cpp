#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int cc[105][105],r,c;
int cnt[105][105];
bool vis[105][105];

struct node
{
    int x;
    int y;
    node(int a,int b)
    {
        x=a,y=b;
    }
};

bool valid(int x,int y)
{
    if(x>=0&&x<r&&y>=0&&y<c&&cc[x][y]!=-1){
        return true;
    }
    return false;
}
queue<node>q;

void bfs(int x,int y,int fx[8],int fy[8])
{
    q.push(node(x,y));
    vis[x][y]=1;
    int nx,ny;
    while(!q.empty()){
        node tp=q.front();
        q.pop();
        for(int i=0;i<8;i++){
            nx=tp.x+fx[i];
            ny=tp.y+fy[i];
            if(valid(nx,ny)){
                cnt[nx][ny]++;
                if(!vis[nx][ny]){
                    vis[nx][ny]=1;
                    q.push(node(nx,ny));
                }
            }
        }
    }
}


void clr()
{
    memset(vis,0,sizeof(vis));
    memset(cnt,0,sizeof(cnt));
    memset(cc,0,sizeof(cc));
    return ;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,n,m,w,u,v,id=0;
    scanf("%d",&t);
    while(t--){
        scanf("%d%d%d%d%d",&r,&c,&m,&n,&w);
        while(w--){
            scanf("%d%d",&u,&v);
            cc[u][v]=-1;
        }
        int fx[]={-m,-m,m,m,-n,n,-n,n};
        int fy[]={n,-n,n,-n,m,m,-m,-m};
        bfs(0,0,fx,fy);
        int even=0,odd=0;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(m==0||n==0||m==n){
                    cnt[i][j]/=2;
                }
                if(cnt[i][j]||(!i&&!j)){
                    if(cnt[i][j]%2){
                        odd++;
                    }
                    else{
                        even++;
                    }
                }
            }
        }
        printf("Case %d: %d %d\n",++id,even,odd);
        clr();
    }
    return 0;
}

