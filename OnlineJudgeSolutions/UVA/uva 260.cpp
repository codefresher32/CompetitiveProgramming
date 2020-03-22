#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pii pair<int,int>
#define F first
#define S second
#define pb push_back
int n;
char s[205][205],ch;
int c[205][205];
bool vis[205][205];
int fx[]={0,0,-1,1,1,-1};
int fy[]={1,-1,0,0,1,-1};


bool valid(int x,int y)
{
    if(x>=1&&x<=n&&y>=1&&y<=n&&s[x][y]==ch&&!vis[x][y]){
        return true;
    }
    return false;
}

void bfs(int x,int y)
{
    int nx,ny;
    queue<pii>q;
    vis[x][y]=1;
    c[x][y]=0;
    ch=s[x][y];
    q.push({x,y});
    while(!q.empty()){
        pii tp=q.front();
        q.pop();
        for(int i=0;i<6;i++){
            nx=tp.F+fx[i];
            ny=tp.S+fy[i];
            if(valid(nx,ny)){
                vis[nx][ny]=1;
                c[nx][ny]=c[tp.F][tp.S]+1;
                q.push({nx,ny});
            }
        }
    }
    return ;
}


int main()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int id=0;
    while(scanf("%d",&n)!=EOF&&n){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                cin>>s[i][j];
            }
        }
        int mn=INT_MAX;
        for(int i=1;i<=n;i++){
            if(s[1][i]=='b'){
                bfs(1,i);
                for(int j=1;j<=n;j++){
                    if(c[n][j]!=0){
                        mn=min(mn,c[n][j]);
                    }

                }
                memset(c,0,sizeof(c));
                memset(vis,0,sizeof(vis));
            }

        }
        int mx=INT_MAX;
        for(int i=1;i<=n;i++){
            if(s[i][1]=='w'){
                bfs(i,1);
                for(int j=1;j<=n;j++){
                    if(c[j][n]!=0){
                        mx=min(mx,c[j][n]);
                    }
                }
                memset(c,0,sizeof(c));
                memset(vis,0,sizeof(vis));
            }
        }
        printf("%d ",++id);
        if(mn==INT_MAX||mx<mn){
            puts("W");
        }
        else {
            puts("B");
        }
    }
    return 0;
}



