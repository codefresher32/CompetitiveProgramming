#include<bits/stdc++.h>
#include <cmath>
using namespace std;

typedef long long ll;

#define pii pair<int,int>
#define pi pair<string,int>
#define F first
#define S second
#define pb push_back
#define pp pop_back
#define mod 1000003
#define ex 1e-7

int n;
int fx[]={1,-1,0,0};
int fy[]={0,0,1,-1};


bool valid(int x,int y)
{
    if(x>=1&&x<=n&&y>=1&&y<=n){
        return true;
    }
    return false;
}


int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);

    char ans1[5]={'A','B','C','D','E'},s[20][20];
    int t,idd=0;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        //getchar();
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                cin>>s[i][j];
            }
        }
        int nx,ny,id;
        bool vis[5];
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(s[i][j]=='.'){
                    memset(vis,0,sizeof(vis));
                    for(int k=0;k<4;k++){
                        nx=i+fx[k];
                        ny=j+fy[k];
                        id=10;
                        if(valid(nx,ny)){
                            if(s[nx][ny]!='.'){
                                id=s[nx][ny]-'A';
                            }
                            if(id<5) vis[id]=1;
                        }
                    }
                    for(int k=0;k<5;k++){
                        if(!vis[k]){
                            s[i][j]=ans1[k];
                            break;
                        }
                    }
                }
            }
        }
        printf("Case %d:\n",++idd);
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                printf("%c",s[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}


