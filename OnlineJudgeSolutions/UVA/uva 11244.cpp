#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int fx[]={0,1,0,-1,1,-1,-1,1};
int fy[]={1,0,-1,0,1,1,-1,-1};
char a[105][105];
int n,m,cnt;
bool vis[105][105];

bool valid(int x,int y)
{
    if(x>=1&&x<=n&&y>=1&&y<=m&&!vis[x][y]&&a[x][y]=='*'){
        return true;
    }
    return false;
}

void dfs(int x,int y)
{
    int nx,ny;
    vis[x][y]=1;
    cnt++;
    for(int i=0;i<8;i++){
        nx=x+fx[i];
        ny=y+fy[i];
        if(valid(nx,ny)){
            dfs(nx,ny);
        }
    }
    return ;
}

void clr()
{
    memset(vis,0,sizeof(vis));
    memset(a,0,sizeof(a));
}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int id=0;
    while(cin>>n>>m&&n&&m){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                cin>>a[i][j];
            }
        }
        int ans=0;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(a[i][j]=='*'&&!vis[i][j]){
                    dfs(i,j);
                    if(cnt==1){
                        ans++;
                    }
                    cnt=0;
                }
            }
        }
        printf("%d\n",ans);
        clr();
    }
    return 0;
}



