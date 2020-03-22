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


int c[105][105];





int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int n,m,u,v,mx,id=0;
    while(scanf("%d",&n)!=EOF){
        mx=0;
        memset(c,0,sizeof(c));
        for(int i=1;i<=n;i++){
            scanf("%d %d",&u,&v);
            c[u][v]++;
            mx=max(mx,max(u,v));
        }

        for(int k=0;k<=mx;k++){
            for(int i=0;i<=mx;i++){
                for(int j=0;j<=mx;j++){
                    c[i][j]+=(c[i][k]*c[k][j]);
                }
            }
        }

        for(int k=0;k<=mx;k++){
            if(c[k][k]){
                c[k][k]=-1;
                for(int i=0;i<=mx;i++){
                    for(int j=0;j<=mx;j++){
                        if(c[i][k]&&c[k][j]){
                            c[i][j]=-1;
                        }
                    }
                }
            }
        }

        printf("matrix for city %d\n",id++);
        for(int i=0;i<=mx;i++){
            printf("%d",c[i][0]);
            for(int j=1;j<=mx;j++){
                printf(" %d",c[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}

