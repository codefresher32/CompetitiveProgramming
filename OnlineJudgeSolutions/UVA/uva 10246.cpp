#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define pii pair<int,int>
#define pi pair<char,char>
#define F first
#define S second
#define pb push_back
#define pp pop_back


int d[105][105],ct[105][105];



void F_W(int n)
{
//    for(int i=1;i<=n;i++){
//        for(int j=1;j<=n;j++){
//            printf("%d %d  ",d[i][j],ct[i][j]);
//        }
//        printf("\n");
//    }

    int tt,co;
    for(int c=1;c<=2;c++){
        for(int k=1;k<=n;k++){
            for(int i=1;i<=n;i++){
                for(int j=1;j<=n;j++){
                    co=max(ct[i][k],ct[k][j]);
                    tt=d[i][k]+d[k][j];
                    if(d[i][j]+ct[i][j]>co+tt){
                        d[i][j]=tt;
                        ct[i][j]=co;
                    }
                }
            }
        }
    }

    return ;
}


int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int n,m,u,v,q,w,id=0,ar;
    bool f=0;
    while(scanf("%d %d %d",&n,&m,&q)!=EOF){
        if(!(n+m+q)){
            return 0;
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(i!=j){
                    d[i][j]=1e8;
                }
                else{
                    d[i][j]=0;
                }
                 ct[i][j]=1e8;
            }
        }
        for(int i=1;i<=n;i++){
            scanf("%d",&ar);
            ct[i][i]=ar;
        }

        while(m--){
            scanf("%d %d %d",&u,&v,&w);
             d[u][v]=d[v][u]=w;
             ct[u][v]=ct[v][u]=max(ct[u][u],ct[v][v]);
        }
        F_W(n);
        if(f){
            printf("\n");
        }
        f=1;
        printf("Case #%d\n",++id);
        while(q--){
            scanf("%d %d",&u,&v);
            if(d[u][v]>=1e8){
                printf("-1\n");
            }
            else{
                printf("%d\n",d[u][v]+ct[u][v]);
            }
        }

    }
    return 0;
}

