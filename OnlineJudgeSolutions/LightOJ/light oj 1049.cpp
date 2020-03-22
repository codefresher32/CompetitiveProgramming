#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pii pair<int,int>
#define F first
#define S second
#define pb push_back
#define pp pop_back

bool vis[505][505];
char s[505][505];
int d[505][505];
int fx[]={1,-1,0,0};
int fy[]={0,0,1,-1};
int c,n,m;
queue<pii>q;

bool valid(int x,int y)
{
    if(x>=1&&x<=n&&y>=1&&y<=m&&s[x][y]!='#'&&!vis[x][y]){
        return true;
    }
    return false;
}


void dfs(int x,int y)
{
    int nx,ny;
    q.push({x,y});
    vis[x][y]=1;
    if(s[x][y]=='C'){
        c++;
    }
    for(int i=0;i<4;i++){
        nx=x+fx[i];
        ny=y+fy[i];
        if(valid(nx,ny)){
            dfs(nx,ny);
        }
    }
    return ;
}



int main()
{
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    int t,tc=0,qq,x,y;
    scanf("%d",&t);
    while(t--){
        scanf("%d%d%d",&n,&m,&qq);
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                cin>>s[i][j];
            }
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(s[i][j]=='.'&&!vis[i][j]){
                    c=0;
                    dfs(i,j);
                    while(!q.empty()){
                        pii tp=q.front();
                        q.pop();
                        d[tp.F][tp.S]=c;
                    }
                }
            }
        }
        printf("Case %d:\n",++tc);
        while(qq--){
            scanf("%d%d",&x,&y);
            printf("%d\n",d[x][y]);
        }
        memset(vis,0,sizeof(vis));
        memset(d,0,sizeof(d));
    }
    return 0;
}

