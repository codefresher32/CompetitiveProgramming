#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pii pair<int,string>
#define F first
#define S second
#define pb push_back
#define pp pop_back

char s[30][30];
bool vis[30][30];
int c[30][30];
int n,m,cnt,lp;
bool f;
int fx[]={0,0,1,-1};
int fy[]={1,-1,0,0};

bool valid(int x,int y)
{
    if(x>=1&&x<=n&&y>=1&&y<=m){
        return true;
    }
    return false;
}

int getd(int x,int y)
{
    int k=-1;
    if(s[x][y]=='E'){
       k=0;
    }
    else if(s[x][y]=='W'){
        k=1;
    }
    else if(s[x][y]=='S'){
        k=2;
    }
    else if(s[x][y]=='N'){
        k=3;
    }
    return k;
}


void dfs(int x,int y)
{
    int nx,ny,k;
    if(vis[x][y]){
        f=1;
       // cout<<cnt<<" "<<c[x][y]<<endl;
       lp=cnt-c[x][y]+1;
       cnt=c[x][y]-1;
        return ;
    }
    vis[x][y]=1;
    c[x][y]=++cnt;
    k=getd(x,y);
    nx=x+fx[k];
    ny=y+fy[k];
    if(valid(nx,ny)){
        dfs(nx,ny);
    }
    return ;
}


int main()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int st;
    while(scanf("%d%d%d",&n,&m,&st)!=EOF &&n&&m&&st){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                cin>>s[i][j];
            }
        }
        dfs(1,st);
        printf("%d step(s) ",cnt);
        if(!f){
            printf("to exit\n");
        }
        else{
            printf("before a loop of %d step(s)\n",lp);
        }
        memset(vis,0,sizeof(vis));
        cnt=f=0;
    }
    return 0;
}


