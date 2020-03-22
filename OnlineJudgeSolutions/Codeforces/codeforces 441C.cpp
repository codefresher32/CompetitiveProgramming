#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
#define pii pair<int,int>

bool s[305][305];
int fx[]={0,1,0,-1};
int fy[]={1,0,-1,0};
int n,m;
queue<pii>q;

bool valid(int x,int y)
{
    if(x>=1&&x<=n&&y>=1&&y<=m&&!s[x][y]){
        return true;
    }
    return false;
}


void dfs(int x,int y)
{
    int nx,ny;
    s[x][y]=1;
    q.push({x,y});
    for(int i=0;i<4;i++){
        nx=x+fx[i];
        ny=y+fy[i];
        if(valid(nx,ny)){
            dfs(nx,ny);
        }
    }
    return ;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int k,l;
    pii tp;
    cin>>n>>m>>k;
    dfs(1,1);
    l=(n*m)/k;
    int cnt;
    for(int i=1;i<k;i++){
        cout<<l<<" ";
        cnt=1;
        while(!q.empty()&&cnt<=l){
            tp=q.front();
            q.pop();
            cout<<tp.first<<" "<<tp.second<<" ";
            cnt++;
        }
    cout<<endl;
    }
    cout<<q.size()<<" ";
    while(!q.empty()){
        tp=q.front();
        q.pop();
        cout<<tp.first<<" "<<tp.second<<" ";
    }
    return 0;
}

