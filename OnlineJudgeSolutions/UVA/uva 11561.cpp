#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pii pair<int,int>
#define F first
#define S second
#define pb push_back
#define pp pop_back

bool vis[55][55];
char s[55][55];
int fx[]={0,1,-1,0};
int fy[]={1,0,0,-1};
int n,m,cnt;


bool valid(int x,int y)
{
    if(x>=1&&x<=n&&y>=1&&y<=m&&s[x][y]!='#'){
        return true;
    }
    return false;
}


void dfs(int x,int y)
{
    int sx,sy;
    vis[x][y]=1;
    for(int j=0;j<4;j++){
        if(s[fx[j]+x][fy[j]+y]=='T'){
            return ;
        }
    }
    for(int i=0;i<4;i++){
        sx=fx[i]+x;
        sy=fy[i]+y;
        if(valid(sx,sy)&&!vis[sx][sy]){
            if(s[sx][sy]=='G'){
                cnt++;
            }
            dfs(sx,sy);
        }
    }
}


int main()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int sx,sy;
    while(scanf("%d%d",&m,&n)!=EOF){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                cin>>s[i][j];
                if(s[i][j]=='P'){
                    sx=i,sy=j;
                }
            }
        }
        dfs(sx,sy);
        printf("%d\n",cnt);
        cnt=0;
        memset(vis,0,sizeof(vis));
    }
    return 0;
}



