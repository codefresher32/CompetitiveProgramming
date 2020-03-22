#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pii pair<int,int>


int fx[]={2,2,-2,-2,1,-1,1,-1};
int fy[]={1,-1,1,-1,2,2,-2,-2};
int c[100][100];
int vis[100][100];
queue<pii>q;

void bfs(int sx,int sy)
{
    int tx,ty;
    vis[sx][sy]=1;
    c[sx][sy]=0;
    q.push(pii(sx,sy));
    while(!q.empty()){
        pii top=q.front();
        q.pop();
        for(int i=0;i<8;i++){
            tx=top.first+fx[i];
            ty=top.second+fy[i];
            if(tx>0&&tx<9&&ty>0&&ty<9&&vis[tx][ty]==0){
                vis[tx][ty]=1;
                c[tx][ty]=c[top.first][top.second]+1;
                q.push(pii(tx,ty));
            }
        }
    }
    return ;
}

void clr()
{
    memset(c,0,sizeof(c));
    memset(vis,0,sizeof(vis));
    return ;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    char s1,s2;
    int a,b,t;
    scanf("%d",&t);
    while(t--){
        cin>>s1>>a>>s2>>b;
        bfs(s1-'a'+1,a);
        printf("%d\n",c[s2-'a'+1][b]);
        clr();
    }
    return 0;
}


