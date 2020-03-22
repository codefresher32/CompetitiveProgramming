#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pii pair<int,int>
#define F first
#define S second
#define pb push_back
#define pp pop_back

char s[505][505];
int fx[]={1,-1,0,0};
int fy[]={0,0,1,-1};
int n,m;

bool valid(int x,int y)
{
    if(x>=1&&x<=n&&y>=1&&y<=m&&s[x][y]=='*'){
        return true;
    }
    return false;
}


bool ck(int x,int y)
{
    int cnt=0,nx,ny;
    for(int i=0;i<4;i++){
        nx=x+fx[i];
        ny=y+fy[i];
        if(valid(nx,ny)){
            cnt++;
        }
    }
    if(cnt==4){
        return true;
    }
    return false;
}

void dfs(int x,int y,int l)
{
    int nx,ny;
    s[x][y]='.';
    nx=x+fx[l];
    ny=y+fy[l];
    if(valid(nx,ny)){
        dfs(nx,ny,l);
    }
}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x,y;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>s[i][j];
        }
    }
    int cnt=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(s[i][j]=='*'){
                if(ck(i,j)){
                    x=i,y=j;
                    cnt++;
                }
            }
        }
    }
    if(cnt==1){
        for(int i=0;i<4;i++){
            dfs(x,y,i);
        }
//        for(int i=1;i<=n;i++){
//            for(int j=1;j<=m;j++){
//                cout<<s[i][j];
//            }
//            cout<<endl;
//        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(s[i][j]=='*'){
                    cout<<"NO\n";
                    return 0;
                }
            }
        }
        cout<<"YES\n";

    }
    else{
        cout<<"NO\n";
    }
    return 0;
}
