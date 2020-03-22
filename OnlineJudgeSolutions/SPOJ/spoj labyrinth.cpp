#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pii pair<int,int>

char s[1005][1005];
bool vis[1005][1005];
int fx[4]={1,-1,0,0};
int fy[4]={0,0,1,-1};
int n,m,mx,tx,ty,ans;

bool valid(int x,int y)
{
    if(x>=1&&x<=m&&y>=1&&y<=n&&!vis[x][y]&&s[x][y]!='#'){
        return true;
    }
    return false;
}


void dfs(int x,int y)
{
    int nx,ny;
    vis[x][y]=1;
    ans++;
    if(mx<ans){
        tx=x,ty=y;
        mx=ans;
    }
    for(int i=0;i<4;i++){
        nx=x+fx[i];
        ny=y+fy[i];
        if(valid(nx,ny)){
            dfs(nx,ny);
        }
    }
    ans--;
    vis[x][y]=0;
    return ;
}


int main()
{
    int t,x,y;
    scanf("%d",&t);
    while(t--){
        scanf("%d%d",&n,&m);
       // getchar();
        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                cin>>s[i][j];
            }
        }
        mx=0;
        ans=0;
        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                if(s[i][j]!='#'){
                   dfs(i,j);
                   i=m;
                   break;
                }
            }
        }
        mx=0;
        ans=0;
        dfs(tx,ty);
        printf("Maximum rope length is %d.\n",mx-1);
    }
    return 0;
}
