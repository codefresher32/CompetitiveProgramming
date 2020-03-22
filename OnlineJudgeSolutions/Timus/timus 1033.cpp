#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pii pair<int,int>
#define F first
#define S second
#define pb push_back
#define pp pop_back

char s[55][55];
int fx[]={0,1,0,-1};
int fy[]={1,0,-1,0};
bool vis[55][55];
int n,cnt;

bool valid(int x,int y)
{
    if(x>=1&&x<=n&&y>=1&&y<=n&&s[x][y]=='.'){
        return true;
    }
    return false;
}


void dfs(int x,int y)
{
    int nx,ny;
    vis[x][y]=1;
    for(int i=0;i<4;i++){
        nx=x+fx[i];
        ny=y+fy[i];
        if(!valid(nx,ny)){
            cnt++;
        }
    }
    for(int i=0;i<4;i++){
        nx=x+fx[i];
        ny=y+fy[i];
        if(valid(nx,ny)&&!vis[nx][ny]){
            dfs(nx,ny);
        }
    }
    return ;
}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>s[i][j];
        }
    }
    dfs(1,1);
    if(!vis[n][n]){
       dfs(n,n);
    }
   // cout<<cnt<<endl;
    cnt-=4;
    cout<<cnt*9<<endl;
    return 0;
}

