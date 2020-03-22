#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define pii pair<int,int>
#define pi pair<string,string>
#define F first
#define S second
#define pb push_back
#define pp pop_back

int ar[105][105],d[105][105];
bool vis[105][105];
int fx[]={1,-1,0,0};
int fy[]={0,0,1,-1};
int n,m;

bool valid(int x,int y)
{
    if(x>=1&&x<=n&&y>=1&&y<=m){
        return true;
    }
    return false;
}

int dfs(int x,int y)
{
    int nx,ny;
    int x1,x2,x3,x4;
    x1=x2=x3=x4=0;
    if(vis[x][y]){
        return d[x][y];
    }
    vis[x][y]=1;
    nx=x+fx[0],ny=y+fy[0];
    if(valid(nx,ny)&&ar[x][y]>ar[nx][ny]){
        x1=1+dfs(nx,ny);
    }
    nx=x+fx[1],ny=y+fy[1];
    if(valid(nx,ny)&&ar[x][y]>ar[nx][ny]){
        x2=1+dfs(nx,ny);
    }
    nx=x+fx[2],ny=y+fy[2];
    if(valid(nx,ny)&&ar[x][y]>ar[nx][ny]){
        x3=1+dfs(nx,ny);
    }
    nx=x+fx[3],ny=y+fy[3];
    if(valid(nx,ny)&&ar[x][y]>ar[nx][ny]){
        x4=1+dfs(nx,ny);
    }

    return d[x][y]=max(x1,max(x2,max(x3,x4)));

}


int main()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int T;
    string s;
    scanf("%d",&T);
    while(T--){
        scanf("%s %d %d",s.c_str(),&n,&m);
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                scanf("%d",&ar[i][j]);
            }
        }
        memset(d,1,sizeof(d));
        int cnt,mx=0;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(!vis[i][j]){
                    cnt=dfs(i,j);
                    mx=max(mx,cnt);
                }
            }
        }
        printf("%s: %d\n",s.c_str(),mx+1);
        memset(vis,0,sizeof(vis));
    }

    return 0;
}
