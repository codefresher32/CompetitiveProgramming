#include<bits/stdc++.h>
#include <cmath>
using namespace std;

typedef long long ll;

#define pii pair<int,int>
#define pi pair<char,char>
#define F first
#define S second
#define pb push_back
#define pp pop_back
#define mod 1000003
#define ex 1e-7


int m,n,cnt,a[105][105];
bool vis[105][105],v[105];
int fx[]={1,-1,0,0};
int fy[]={0,0,1,-1};

bool valid(int x,int y)
{
    if(x>=1&&x<=n&&y>=1&&y<=n&&!vis[x][y]&&a[x][y]==m){
        return true;
    }
    return false;
}

void dfs(int x,int y)
{
    int nx,ny;
    cnt++;
    vis[x][y]=1;
    for(int i=0;i<4;i++){
        nx=x+fx[i];
        ny=y+fy[i];
        if(valid(nx,ny)){
            dfs(nx,ny);
        }
    }
}


int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int x,y;
    while(scanf("%d",&n)!=EOF){
        if(!n){
            return 0;
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                a[i][j]=1;
                vis[i][j]=0;
                v[j]=0;
            }
        }
        string s;
        //memset(a,-1,sizeof(a));
        getchar();
        for(int i=2;i<=n;i++){
           getline(cin,s);
           stringstream sin(s);
           vector<int>vs;
           while(sin>>x){
                vs.pb(x);
           }
           for(int j=0;j<vs.size();j+=2){
                a[vs[j]][vs[j+1]]=i;
           }
        }
        bool f=0;
        set<int>st;
        int c=0;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(!vis[i][j]){
                    m=a[i][j];
                    if(!v[m]){
                        v[m]=1;
                        cnt=0;
                        dfs(i,j);
                        c++;
                        st.insert(cnt);
                    }
                    else{
                        f=1;
                        break;
                    }
                }
            }
        }
        if(f||st.size()>1||c!=n){
            printf("wrong\n");
        }
        else{
            printf("good\n");
        }
        //memset(vis,0,sizeof(vis));
    }
    return 0;
}


