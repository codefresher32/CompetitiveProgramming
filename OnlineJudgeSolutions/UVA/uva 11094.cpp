#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

bool vis[25][25];
char s[25][25],ch;
int fx[]={1,-1,0,0};
int fy[]={0,0,1,-1};
int ans,n,m;

bool valid(int x,int y)
{
    if(x>=1&&x<=n&&y>=1&&y<=m&&s[x][y]==ch){
        return true;
    }
    return false;
}

void dfs(int x,int y)
{
    int nx,ny;
    vis[x][y]=1;
    ans++;
    for(int i=0;i<4;i++){
        nx=x+fx[i];
        ny=y+fy[i];
        if(valid(nx,ny)){
            if(!vis[nx][ny]){
                dfs(nx,ny);
            }
        }
    }
    return ;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int l,r;
    while(scanf("%d%d",&n,&m)!=EOF){
        scanf("%d%d",&n,&m);
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                scanf("%c",&s[i][j]);
            }
        }
        scanf("%d%d",&l,&r);
        ch=s[l+1][r+1];
        dfs(l+1,r+1);
        int mx=0;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(s[i][j]==ch&&!vis[i][j]){
                    ans=0;
                    dfs(i,j);
                    mx=max(mx,ans);
                }
            }
        }
        printf("%d\n",mx);
    }
    return 0;
}



