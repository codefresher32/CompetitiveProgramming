#include<bits/stdc++.h>
using namespace std;

//typedef long long ll;

#define pii pair<int,int>
#define pi pair<char,char>
#define F first
#define S second
#define pb push_back
#define pp pop_back


long long dt[105][105];
long long dw[105][105];


void F_W(int n)
{
    for(int k=1;k<n;k++){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(dt[i][k]!=-1&&dt[k][j]!=-1){
                    if(dt[i][j]==-1||dt[i][j]>=dt[i][k]+dt[k][j]){
                        if(dt[i][k]+dt[k][j]==dt[i][j]&&dw[i][k]+dw[k][j]<dw[i][j]){
                            dt[i][j]=dt[i][k]+dt[k][j];
                            dw[i][j]=dw[i][k]+dw[k][j];
                        }
                        else if(dt[i][k]+dt[k][j]!=dt[i][j]) {
                            dt[i][j]=dt[i][k]+dt[k][j];
                            dw[i][j]=dw[i][k]+dw[k][j];
                        }
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
    int T,n,m,u,v,q;
    long long tw,ww;
    scanf("%d",&T);
    while(T--){
        scanf("%d %d",&n,&m);
        memset(dt,-1,sizeof(dt));
        memset(dw,-1,sizeof(dw));
        for(int i=1;i<=n;i++){
            dt[i][i]=dw[i][i]=0;
        }
        while(m--){
            scanf("%d %d %lld %lld",&u,&v,&tw,&ww);
            if(dw[u][v]==-1||dt[u][v]>tw||(dt[u][v]==tw&&ww<dw[u][v])){
                 dt[u][v]=dt[v][u]=tw;
                 dw[u][v]=dw[v][u]=ww;
            }
        }
        F_W(n);
        scanf("%d",&q);
        while(q--){
            scanf("%d %d",&u,&v);
            if(dw[u][v]!=-1){
                printf("Distance and time to reach destination is %lld & %lld.\n",dw[u][v],dt[u][v]);
            }
            else{
                printf("No Path.\n");
            }
        }
        if(T){
           puts("");
        }
    }
    return 0;
}


