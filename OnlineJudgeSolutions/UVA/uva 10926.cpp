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

int d[105][105];


int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int n,u,v,m;
    while(scanf("%d",&n)!=EOF){
        if(!n) return 0;
        memset(d,0,sizeof(d));
        for(int i=1;i<=n;i++){
            scanf("%d",&m);
            while(m--){
                scanf("%d",&u);
                d[i][u]++;
            }
        }

        for(int k=1;k<=n;k++){
            for(int i=1;i<=n;i++){
                for(int j=1;j<=n;j++){
                    d[i][j]+=(d[i][k]*d[k][j]);
                }
            }
        }
//        for(int i=1;i<=n;i++){
//            for(int j=1;j<=n;j++){
//                printf("%d ",d[i][j]);
//            }
//            cout<<endl;
//        }
        int mn=-1,ans,sm;
        for(int i=1;i<=n;i++){
            sm=0;
            for(int j=1;j<=n;j++){
                if(d[i][j]) sm++;
            }
            if(sm>mn){
                ans=i,mn=sm;
            }
        }
        printf("%d\n",ans);
    }

    return 0;
}

