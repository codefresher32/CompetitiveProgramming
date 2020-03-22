#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pii pair<int,int>

bool vis[25][25];
int d[25][25];
char s[25][25];
int fx[]={1,-1,0,0};
int fy[]={0,0,1,-1};
int ans,n,m,px,py;

bool valid(int x,int y)
{
    if(x>=1&&x<=n&&y>=1&&y<=m&&(s[x][y]=='.'||s[x][y]=='a'||s[x][y]=='b'||s[x][y]=='c')){
        return true;
    }
    return false;
}

void bfs(int x,int y)
{
    queue<pii>q;
    int nx,ny;
    vis[x][y]=1;
    d[x][y]=0;
    q.push({x,y});
    while(!q.empty()){
        pii tp=q.front();
        q.pop();
        if(tp.first==px&&tp.second==py){
            return ;
        }
        for(int i=0;i<4;i++){
            nx=tp.first+fx[i];
            ny=tp.second+fy[i];
            if(valid(nx,ny)){
                if(!vis[nx][ny]){
                   vis[nx][ny]=1;
                   d[nx][ny]=d[tp.first][tp.second]+1;
                   q.push({nx,ny});
                }
            }
        }
    }
    return ;
}


int main()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int l,r,t;
    cin>>t;
    for(int p=1;p<=t;p++){
        cin>>n>>m;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                cin>>s[i][j];
                if(s[i][j]=='h'){
                   px=i,py=j;
                   s[i][j]='.';
                }
            }
        }
        int mn=0;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(s[i][j]=='a'||s[i][j]=='b'||s[i][j]=='c'){
                    bfs(i,j);
                    mn=max(mn,d[px][py]);
                    memset(vis,0,sizeof(vis));
                    memset(d,0,sizeof(d));
                }
            }
        }
        printf("Case %d: %d\n",p,mn);
    }
    return 0;
}

