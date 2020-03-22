#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define pii pair<int,int>
#define pi pair<string,string>
#define F first
#define S second
#define pb push_back
#define pp pop_back

char s[50][50][50];
int d[50][50][50];
int fd[]={0,0,0,0,1,-1};
int fx[]={0,0,1,-1,0,0};
int fy[]={1,-1,0,0,0,0};
int di,n,m;

struct node
{
    int dm,sx,sy;
    node(int a,int b,int c){
        dm=a,sx=b,sy=c;
    }
};

bool valid(int z,int x,int y)
{
    if(z>=1&&z<=di&&x>=1&&x<=n&&y>=1&&y<=m&&s[z][x][y]!='#'){
        return true;
    }
    return false;
}


void bfs(int dd,int sx,int sy)
{
    int nd,nx,ny;
    memset(d,-1,sizeof(d));
    queue<node>q;
    q.push(node(dd,sx,sy));
    d[dd][sx][sy]=0;
    while(!q.empty()){
        node tp=q.front();
        q.pop();
        for(int i=0;i<6;i++){
            nd=tp.dm+fd[i];
            nx=tp.sx+fx[i];
            ny=tp.sy+fy[i];
            if(valid(nd,nx,ny)&&d[nd][nx][ny]==-1){
                d[nd][nx][ny]=d[tp.dm][tp.sx][tp.sy]+1;
                q.push(node(nd,nx,ny));
            }
        }
    }
    return ;
}


int main ()
{
//  ios_base::sync_with_stdio(false);
//  cin.tie(NULL);
    int ds,sx,sy,dd,dx,dy;
    while(scanf("%d %d %d",&di,&n,&m),di,n,m){
        for(int i=1;i<=di;i++){
            for(int j=1;j<=n;j++){
                for(int k=1;k<=m;k++){
                    cin>>s[i][j][k];
                    if(s[i][j][k]=='S'){
                        dd=i,dx,j,dy=k;
                    }
                    else if(s[i][j][k]=='E'){
                        ds=i,sx=j,sy=k;
                    }
                }
            }
        }
        bfs(dd,dx,dy);
        if(d[ds][sx][sy]==-1){
            printf("Trapped!\n");
        }
        else{
            printf("%d\n",d[ds][sx][sy]);
        }

    }

    return 0;
}


