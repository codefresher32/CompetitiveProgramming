#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pii pair<int,int>

char s[1005][1005];
char dir[4]={'D','L','R','U'};
int fx[]={1,0,0,-1};
int fy[]={0,-1,1,0};
int d[1005][1005];
queue<pii>q;

void bfs(int x,int y)
{
    memset(d,-1,sizeof(d));
    int tx,ty;
    d[x][y]=0;
    q.push({x,y});
    while(!q.empty()){
        pii tp=q.front();
        q.pop();
        for(int i=0;i<4;i++){
            tx=fx[i]+tp.first;
            ty=fy[i]+tp.second;
            if(s[tx][ty]=='.'&&d[tx][ty]==-1){
                d[tx][ty]=d[tp.first][tp.second]+1;
                q.push({tx,ty});
            }
        }
    }
    return ;
}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int sx,sy,n,m,k,x,y;
    char c;
    cin>>n>>m>>k;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>s[i][j];
            if(s[i][j]=='X'){
                sx=i,sy=j;
                s[i][j]='.';
            }
        }
    }
    if(k&1){
        cout<<"IMPOSSIBLE\n";
        return 0;
    }
    bfs(sx,sy);
//    for(int i=1;i<=n;i++){
//        for(int j=1;j<=m;j++){
//            cout<<d[i][j];
//        }
//        cout<<endl;
//    }
    bool f;
    string ss;
    while(k){
        f=0;
        for(int j=0;j<4;j++){
           x=fx[j]+sx;
           y=fy[j]+sy;
           if(s[x][y]=='.'&&d[x][y]<=k){
                ss+=dir[j];
                f=1;
                sx=x;
                sy=y;
                break;
           }
        }
        if(!f){
            cout<<"IMPOSSIBLE\n";
            return 0;
        }
        k--;
    }
    cout<<ss<<endl;
    return 0;
}
