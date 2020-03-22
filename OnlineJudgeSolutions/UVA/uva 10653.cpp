#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define pii pair<int,int>
int fx[]={1,-1,0,0};
int fy[]={0,0,1,-1};
int c[1005][1005];
int vis[1005][1005];
int cell[1005][1005];
int row,col;
queue<pii>q;

void bfs(int sx,int sy)
{
    int tx,ty;
    vis[sx][sy]=1;
    c[sx][sy]=0;
    q.push(pii(sx,sy));
    while(!q.empty()){
        pii top=q.front();
        q.pop();
        for(int i=0;i<4;i++){
            tx=top.first+fx[i];
            ty=top.second+fy[i];
            if(tx>=0&&tx<row&&ty>=0&&ty<col&&cell[tx][ty]!=-1&&vis[tx][ty]==0){
                vis[tx][ty]=1;
                c[tx][ty]=c[top.first][top.second]+1;
                q.push(pii(tx,ty));
            }
        }
    }
    return ;
}

void clr()
{
    memset(c,0,sizeof(c));
    memset(vis,0,sizeof(vis));
    memset(cell,0,sizeof(cell));
    return ;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int r,cc,x,y,a,b;
    while(cin>>row>>col){
        if(row==0&&col==0){
            return 0;
        }
        cin>>r;
        for(int i=0;i<r;i++){
            cin>>x>>y;
            for(int j=0;j<y;j++){
                cin>>a;
                cell[x][a]=-1;
            }
        }
        cin>>r>>cc;
        bfs(r,cc);
        cin>>r>>cc;
        cout<<c[r][cc]<<endl;
        clr();
    }

    return 0;
}


