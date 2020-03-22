#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pii pair<int,int>
#define F first
#define S second
#define pb push_back
#define pp pop_back


int d[505][505],nxt[505][505];



int main()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int n,m,u,v,w,st,ds,id=0;
    while(scanf("%d",&n),n){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(i==j){
                    d[i][j]=0;
                }
                else{
                    d[i][j]=1e8;
                }
                nxt[i][j]=j;
            }
        }
        for(int i=1;i<=n;i++){
            scanf("%d",&m);
            while(m--){
               scanf("%d %d",&v,&w);
                d[i][v]=w;
            }
        }
//        for(int i=1;i<=n;i++){
//            for(int j=1;j<=n;j++){
//                printf("%d ",d[i][j]);
//            }
//            printf("\n");
//        }

        for(int k=1;k<=n;k++){
            for(int i=1;i<=n;i++){
                for(int j=1;j<=n;j++){
                    if(d[i][j]>d[i][k]+d[k][j]){
                        //cout<<d[i][k]<<" "<<d[k][j]<<endl;
                        d[i][j]=d[i][k]+d[k][j];
                        nxt[i][j]=nxt[i][k];
                    }
                }
            }
        }
        scanf("%d %d",&u,&v);
        //cout<<d[u][v]<<endl;
        printf("Case %d: Path = %d",++id,u);
        st=u,ds=v;
        while(st!=ds){
            st=nxt[st][ds];
            printf(" %d",st);
        }
        printf("; %d second delay\n",d[u][v]);

//        for(int i=1;i<=n;i++){
//            for(int j=1;j<=n;j++){
//                printf("%d ",d[i][j]);
//            }
//            printf("\n");
//        }

    }

    return 0;
}


