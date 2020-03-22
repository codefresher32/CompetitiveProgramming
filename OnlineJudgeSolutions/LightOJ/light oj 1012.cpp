#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int fx[]={0,0,1,-1};
int fy[]={-1,1,0,0};
int n,m,k;
int cell [250][250];
bool vis[250][250];

void dfs(int sx,int sy)
{
    int tx,ty;
    vis[sx][sy]=1;
    for(int i=0;i<4;i++){
       tx=sx+fx[i];
       ty=sy+fy[i];
       if(tx>=0&&tx<m&&ty>=0&&ty<n&&cell[tx][ty]!=-1&&!vis[tx][ty]){
            dfs(tx,ty);
       }
    }
    if(vis[sx][sy]){
        k++;
    }
    return ;
}

int main()
{
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    int x,y,t,tc=0;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        char s[250][250];
        cin>>n>>m;
    for(int i=0;i<m;i++){
        cin>>s[i];
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(s[i][j]=='#'){
                cell[i][j]=-1;
            }
            if(s[i][j]=='@'){
                x=i;
                y=j;
            }
        }
    }
    dfs(x,y);
    printf("Case %d: %d\n",i,k);
    k=0;
    memset(vis,0,sizeof(vis));
    memset(cell,0,sizeof(cell));
    }
    return 0;
}
