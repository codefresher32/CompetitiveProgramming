#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

bool vis[1005][1005];
int cnt[1005][1005];
char s[1005][1005];
int fx[]={1,-1,0,0};
int fy[]={0,0,1,-1};
int ans,n,m;

struct node
{
    int x,y;
    node(int a,int b)
    {
        x=a,y=b;
    }
};
stack<node>st;

int point(int x,int y)
{
    int nx,ny,cnt=0;
    for(int i=0;i<4;i++){
       nx=x+fx[i];
       ny=y+fy[i];
       if(s[nx][ny]=='*'){
           cnt++;
       }
    }
    return cnt;
}

bool valid(int x,int y)
{
    if(x>=1&&x<=n&&y>=1&&y<=m&&s[x][y]=='.'){
        return true;
    }
    return false;
}

void dfs(int x,int y)
{
    int nx,ny;
    vis[x][y]=1;
    ans+=point(x,y);
    st.push(node(x,y));
    //cout<<ans<<endl;
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
    int k,u,v;
    cin>>n>>m>>k;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>s[i][j];
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(s[i][j]=='.'&&!vis[i][j]){
                ans=0;
                dfs(i,j);
                while(!st.empty()){
                    node tp=st.top();
                    st.pop();
                    cnt[tp.x][tp.y]=ans;
                }
            }
        }
    }
    while(k--){
        cin>>u>>v;
        cout<<cnt[u][v]<<endl;
    }
    return 0;
}


