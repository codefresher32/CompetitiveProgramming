#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
map<char,int>mp;
int fx[]={1,0,-1,0};
int fy[]={0,1,0,-1};
int arr[55][55];
int vis[55][55];
int cnt[4];
bool f;
int n,m;

void dfs(int x,int y,int frx,int fry)
{
    int tx,ty;
    vis[x][y]=1;
    for(int i=0;i<4;i++){
        tx=x+fx[i];
        ty=y+fy[i];
        if(tx>0&&tx<=n&&ty>0&&ty<=m&&vis[tx][ty]==0&&arr[tx][ty]==arr[x][y]){
            cnt[i]++;
            dfs(tx,ty,x,y);
        }
        else if(tx>0&&tx<=n&&ty>0&&ty<=m&&tx!=frx&&ty!=fry&&arr[tx][ty]==arr[x][y]){
            f=1;
            cnt[i]++;
        }
    }
    vis[x][y]=2;
}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int id=0;
    char c;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>c;
            if(!mp[c]){
                mp[c]=++id;
            }
            arr[i][j]=mp[c];
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(!vis[i][j]){
                dfs(i,j,0,0);
            }
            if(f){
                int cn=0;
                for(int i=0;i<4;i++){
                    if(cnt[i]){
                        cn++;
                    }
                }
                if(cn==4){
                    cout<<"Yes\n";
                    return 0;
                }
                memset(cnt,0,sizeof(cnt));
                f=0;
            }
        }
    }
    cout<<"No\n";
    return 0;
}

