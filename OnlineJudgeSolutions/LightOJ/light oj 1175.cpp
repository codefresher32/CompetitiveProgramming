#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pii pair<int,int>
#define F first
#define S second
#define pb push_back
#define pp pop_back

char s[1005][1005];
int c1[1005][1005],c2[1005][1005];
bool vis1[1005][1005],vis2[1005][1005];
int fx[]={0,0,-1,1};
int fy[]={1,-1,0,0};
int sx,sy,n,m;

bool valid(int x,int y)
{
    if(x>=1&&x<=n&&y>=1&&y<=m&&s[x][y]=='.'){
        return true;
    }
    return false;
}



int main()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int t,x,y,id=0;
    scanf("%d",&t);
    while(t--){
        queue<pii>q;
        scanf("%d%d",&n,&m);
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                cin>>s[i][j];
                if(s[i][j]=='J'){
                    sx=i,sy=j;
                    s[i][j]='.';
                }
                else if(s[i][j]=='F'){
                    q.push({i,j});
                }
            }
        }
        int nx,ny;
        pii tp;
        tp=q.front();
        c1[tp.F][tp.S]=0;
        while(!q.empty()){
            tp=q.front();
            q.pop();
            vis1[tp.F][tp.S]=1;
            for(int i=0;i<4;i++){
                nx=tp.F+fx[i];
                ny=tp.S+fy[i];
                if(valid(nx,ny)&&!vis1[nx][ny]){
                    vis1[nx][ny]=1;
                    c1[nx][ny]=c1[tp.F][tp.S]+1;
                    q.push({nx,ny});
                }
            }
        }
        vis2[sx][sy]=1;
        q.push({sx,sy});
        c2[sx][sy]=0;
        int mn=INT_MAX;
        while(!q.empty()){
            tp=q.front();
            q.pop();
            nx=tp.F,ny=tp.S;
            if(nx==1||nx==n||ny==1||ny==m){
                if(((c1[nx][ny]>c2[nx][ny])||(!vis1[nx][ny]))&&mn>c2[nx][ny]){
                    mn=c2[nx][ny];
                }
            }
            for(int i=0;i<4;i++){
                nx=tp.F+fx[i];
                ny=tp.S+fy[i];
                if(valid(nx,ny)&&!vis2[nx][ny]){
                    vis2[nx][ny]=1;
                    c2[nx][ny]=c2[tp.F][tp.S]+1;
                    q.push({nx,ny});
                }
            }
        }
        printf("Case %d: ",++id);
        if(mn!=INT_MAX){
            printf("%d\n",mn+1);
        }
        else{
            printf("IMPOSSIBLE\n");
        }
        memset(c1,0,sizeof(c1));
        memset(c2,0,sizeof(c2));
        memset(vis1,0,sizeof(vis1));
        memset(vis2,0,sizeof(vis2));
    }
    return 0;
}



