#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int fx[]={1,-1,0,0};
int fy[]={0,0,1,-1};
int n;
char s[105][105];

void dfs(int x,int y)
{
    int tx,ty;
    if(x<0||x>=n||y<0||y>=n||s[x][y]=='.'){
        return ;
    }
    s[x][y]='.';
    for(int i=0;i<4;i++){
        tx=x+fx[i];
        ty=y+fy[i];
        dfs(tx,ty);
    }
}


int main()
{
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    int t,u,v;
    scanf("%d",&t);
    for(int k=1;k<=t;k++){
        scanf("%d",&n);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>s[i][j];
            }
        }
        int cnt=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(s[i][j]=='x'){
                    cnt++;
                    dfs(i,j);
                }
            }
        }
        printf("Case %d: %d\n",k,cnt);
    }

    return 0;
}

