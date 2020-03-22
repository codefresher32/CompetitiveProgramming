 #include<bits/stdc++.h>
using namespace std;

typedef long long ll;

struct node
{
    int x,y;
    node(int a,int b)
    {
        x=a,y=b;
    }
};
queue<node>q;
int c[105][105],n,m;
int fx[]={1,0,-1,0};
int fy[]={0,1,0,-1};

void bfs(int tx,int ty)
{
    int xx,yy;
    c[tx][ty]=1;
    q.push(node(tx,ty));

    while(!q.empty()){
        node tp=q.front();
        q.pop();
        for(int i=0;i<4;i++){
            xx=fx[i]+tp.x;
            yy=fy[i]+tp.y;
            if(xx>=1&&xx<=n&&yy>=1&&yy<=m&&c[xx][yy]==-1){
                c[xx][yy]=(!c[tp.x][tp.y]);
                q.push(node(xx,yy));
            }
        }
    }
    return ;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m;
    char ch;
    memset(c,-1,sizeof(c));
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>ch;
            if(ch!='.'){
                c[i][j]=2;
            }
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(c[i][j]==-1){
                bfs(i,j);
            }
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(c[i][j]==1){
                cout<<"B";
            }
            else if(c[i][j]==0){
                cout<<"W";
            }
            else{
                cout<<"-";
            }
        }
        cout<<endl;
    }
    return 0;
}


