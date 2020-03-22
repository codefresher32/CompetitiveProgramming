#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

bool vis[55][55];
char s[55][55];
int fx[]={1,-1,0,0};
int fy[]={0,0,1,-1};
int n;
vector<pair<int,int>>p1,p2;

bool valid(int x,int y)
{
    if(x>=1&&x<=n&&y>=1&&y<=n&&s[x][y]=='0'){
        return true;
    }
    return false;
}

void dfs(int x,int y,int f)
{
    int nx,ny;
    vis[x][y]=1;
    if(f){
        p1.push_back({x,y});
    }
    else{
        p2.push_back({x,y});
    }
    for(int i=0;i<4;i++){
        nx=x+fx[i];
        ny=y+fy[i];
        if(valid(nx,ny)){
            if(!vis[nx][ny]){
                dfs(nx,ny,f);
            }
        }
    }
    return ;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int r1,c1,r2,c2;
    cin>>n>>r1>>c1>>r2>>c2;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>s[i][j];
        }
    }
    dfs(r1,c1,1);
    if(vis[r2][c2]){
        cout<<0<<endl;
    }
    else{
        dfs(r2,c2,0);
        ll mn,x,y,a1,a2,b1,b2;
        x=abs(r1-r2);
        y=abs(c1-c2);
        mn=x*x+y*y;
        //cout<<p1.size()<<endl;
        for(int i=0;i<p1.size();i++){
            a1=p1[i].first;
            b1=p1[i].second;
            for(int j=0;j<p2.size();j++){
                a2=p2[j].first;
                b2=p2[j].second;
                x=abs(a1-a2);
                y=abs(b1-b2);
                y=x*x+y*y;
                mn=min(mn,y);
            }
        }
        cout<<mn<<endl;
    }
    return 0;
}
