#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pii pair<int,int>
#define F first
#define S second
#define pb push_back
#define pp pop_back

bool vis[55][55];
char s[55][55];
int fx[]={0,1,-1,0};
int fy[]={1,0,0,-1};
int n,m,cnt;
char ch;


bool valid(int x,int y)
{
    if(x>=1&&x<=n&&y>=1&&y<=m&&s[x][y]==ch&&!vis[x][y]){
        return true;
    }
    return false;
}


void dfs(int x,int y)
{
    int sx,sy;
    vis[x][y]=1;
    cnt++;
    //cout<<x<<y<<" ";
    for(int i=0;i<4;i++){
        sx=fx[i]+x;
        sy=fy[i]+y;
        if(valid(sx,sy)){
            dfs(sx,sy);
        }
    }
}

bool com(pii A,pii B)
{
    if(A.S==B.S){
        return A.F<B.F;
    }
    return A.S>B.S;
}


int main()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int sx,sy,id=0;
    while(scanf("%d%d",&n,&m)!=EOF){
        if(n==0&&m==0){
            return 0;
        }
        vector<pii>pi;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                cin>>s[i][j];
            }
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(s[i][j]!='.'&&!vis[i][j]){
                    cnt=0;
                    ch=s[i][j];
                    dfs(i,j);
                    //cout<<cnt<<endl;
                    pi.pb({ch-'A',cnt});
                }
            }
        }
        sort(pi.begin(),pi.end(),com);
        printf("Problem %d:\n",++id);
        for(pii p:pi){
            printf("%c %d\n",p.F+'A',p.S);
        }
        memset(vis,0,sizeof(vis));
    }
    return 0;
}
