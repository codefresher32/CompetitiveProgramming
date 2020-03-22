#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define pii pair<int,int>
#define pi pair<char,char>
#define F first
#define S second
#define pb push_back
#define pp pop_back
#define mod 1000003

char s[20][20];
map<char,pii>mp;
int d[20][20],n;
int fx[]={1,-1,0,0};
int fy[]={0,0,1,-1};

bool valid(int x,int y,char ch)
{
    if(x>=1&&x<=n&&y>=1&&y<=n&&y>=1&&d[x][y]==-1&&(s[x][y]=='.'||s[x][y]==ch)){
        return true;
    }
    return false;
}


int bfs()
{
    int nx,ny,ans=0,tx,ty;
    bool f=0;
    for(auto x:mp){
        if(!f){
            tx=x.S.F,ty=x.S.S;
        }
        f=1;
        queue<pii>q;
        memset(d,-1,sizeof(d));
        q.push({tx,ty});
        d[tx][ty]=0;
        while(!q.empty()){
            pii tp=q.front();
            q.pop();
            if(tp.F==x.S.F&&tp.S==x.S.S){
                break;
            }
            for(int i=0;i<4;i++){
                nx=fx[i]+tp.F;
                ny=fy[i]+tp.S;
                if(valid(nx,ny,x.F)){
                    d[nx][ny]=d[tp.F][tp.S]+1;
                    q.push({nx,ny});
                }
            }
        }
        if(d[x.S.F][x.S.S]==-1){
            return -1;
        }
        else{
            ans+=d[x.S.F][x.S.S];
            s[x.S.F][x.S.S]='.';
            tx=x.S.F,ty=x.S.S;
        }
    }
    return ans;
}

int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int T,id=0;
    scanf("%d",&T);
    while(T--){
        scanf("%d",&n);
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                cin>>s[i][j];
                if(s[i][j]>='A'&&s[i][j]<='Z'){
                    mp[s[i][j]]={i,j};
                }
            }
        }
        int ans;
        ans=bfs();
        printf("Case %d: ",++id);
        if(ans==-1){
            printf("Impossible\n");
        }
        else{
            printf("%d\n",ans);
        }
        mp.clear();
    }

    return 0;
}
