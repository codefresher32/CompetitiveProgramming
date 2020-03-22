#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define pi pair<int,ll>
#define pii pair<int,int>
#define F first
#define S second
#define pb push_back
#define pp pop_back
#define mod 100000007

int d[55][55];

int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int t,n,r,u,v,id=0;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                scanf("%d",&d[i][j]);
            }
        }
        for(int k=1;k<=n;k++){
            for(int i=1;i<=n;i++){
                for(int j=1;j<=n;j++){
                    d[i][j]=min(d[i][j],d[i][k]+d[k][j]);
                }
            }
        }
        int ans=0;
        scanf("%d",&r);
        while(r--){
            scanf("%d %d",&u,&v);
            ans+=d[u][v];
        }
        printf("Case #%d: %d\n",++id,ans);
    }
    return 0;
}

