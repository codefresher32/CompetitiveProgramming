#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int fx[]={0,0,1,-1};
int fy[]={-1,1,0,0};
int n,m,k;
char s[505][505];
bool vis[505][505];

void dfs(int sx,int sy)
{
    int tx,ty;
    vis[sx][sy]=1;
    for(int i=0;i<4;i++){
       tx=sx+fx[i];
       ty=sy+fy[i];
       if(tx>0&&tx<=n&&ty>0&&ty<=m&&s[tx][ty]=='.'&&!vis[tx][ty]){
            dfs(tx,ty);
       }
    }
    if(k!=0){
        s[sx][sy]='X';
        k--;
    }
    return ;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m>>k;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>s[i][j];
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(s[i][j]=='.'){
                dfs(i,j);
            }
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cout<<s[i][j];
        }
        cout<<endl;
    }
    return 0;
}


