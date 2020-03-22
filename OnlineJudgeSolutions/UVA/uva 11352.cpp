#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pii pair<int,int>
#define F first
#define S second
#define pb push_back
#define pp pop_back

char s[105][105];
int c[105][105];
bool vis[105][105];
int fx1[]={-2,-2,-1,1,-1,1,2,2};
int fy1[]={1,-1,-2,-2,2,2,-1,1};
int fx2[]={0,0,-1,1,-1,-1,1,1,};
int fy2[]={1,-1,0,0,1,-1,-1,1};
int sx,sy,dx,dy,n,m;

bool valid(int x,int y)
{
    if(x>=1&&x<=n&&y>=1&&y<=m&&s[x][y]=='.'){
        return true;
    }
    return false;
}

void dfs(int x,int y)
{
    int nx,ny;
    for(int i=0;i<8;i++){
        nx=x+fx1[i];
        ny=y+fy1[i];
        if(valid(nx,ny)){
            vis[nx][ny]=1;
        }
    }
    return ;
}

void bfs(int x,int y)
{
    queue<pii>q;
    int nx,ny;
    vis[x][y]=1;
    c[x][y]=0;
    q.push({x,y});
    while(!q.empty()){
        pii tp=q.front();
        q.pop();
//        if(tp.F==dx&&tp.S==dy){
//            return ;
//        }
        for(int i=0;i<8;i++){
            nx=tp.F+fx2[i];
            ny=tp.S+fy2[i];
            if(valid(nx,ny)&&!vis[nx][ny]){
                vis[nx][ny]=1;
                c[nx][ny]=c[tp.F][tp.S]+1;
                q.push({nx,ny});
            }
        }
    }
}



int main()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int t;
    scanf("%d",&t);
    while(t--){
        scanf("%d%d",&n,&m);
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                cin>>s[i][j];
                if(s[i][j]=='A'){
                    sx=i,sy=j;
                }
                else if(s[i][j]=='B'){
                    dx=i,dy=j;
                }
            }
        }
        memset(c,0,sizeof(c));
        memset(vis,0,sizeof(vis));
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(s[i][j]=='Z'){
                    dfs(i,j);
                }
            }
        }
      // cout<<sx<<sy<<dx<<dy;
        s[sx][sy]=s[dx][dy]='.';
        bfs(sx,sy);
//        for(int i=1;i<=n;i++){
//            for(int j=1;j<=m;j++){
//                cout<<c[i][j];
//            }
//            cout<<endl;
//        }
        if(!c[dx][dy]){
            printf("King Peter, you can't go now!\n");
        }
        else{
            printf("Minimal possible length of a trip is %d\n",c[dx][dy]);
        }

    }
    return 0;
}

