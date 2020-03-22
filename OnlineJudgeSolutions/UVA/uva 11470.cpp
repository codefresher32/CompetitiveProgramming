#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int fx[]={0,1,0,-1};
int fy[]={1,0,-1,0};
int a[25][25],n,sum,i,j;
bool vis[25][25];

bool valid(int x,int y)
{
    if(x>=1&&x<=n&&y>=1&&y<=n&&!vis[x][y]&&(x==i||y==i||x==(n-i+1)||y==(n-i+1))){
        return true;
    }
    return false;
}

void dfs(int x,int y)
{
    int nx,ny;
    sum+=a[x][y];
    //cout<<sum<<endl;
    for(int i=0;i<4;i++){
        nx=x+fx[i];
        ny=y+fy[i];
        if(valid(nx,ny)){
            vis[nx][ny]=1;
            dfs(nx,ny);
        }
    }
    return ;
}

void clr()
{
    memset(vis,0,sizeof(vis));
    memset(a,0,sizeof(a));
}



int main()
{
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    int id=0;
    while(cin>>n&&n){
        for(i=1;i<=n;i++){
            for(j=1;j<=n;j++){
                cin>>a[i][j];
            }
        }
        int ans;
        printf("Case %d:",++id);
        for(i=1;i<=(n-1)/2+1;i++){
            vis[i][i]=1;
            dfs(i,i);
            printf(" %d",sum);
            sum=0;
        }
        printf("\n");
        clr();
    }
    return 0;
}


