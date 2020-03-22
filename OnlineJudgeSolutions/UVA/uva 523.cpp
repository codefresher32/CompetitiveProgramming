#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define pii pair<int,int>
#define pi pair<char,char>
#define F first
#define S second
#define pb push_back
#define pp pop_back


int d[500][500],tx[500];
int nxt[500][500];

void F_W(int n)
{
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            nxt[i][j]=j;
        }
    }
    for(int k=1;k<=n;k++){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(d[i][j]>d[i][k]+d[k][j]+tx[k]){
                    d[i][j]=d[i][k]+d[k][j]+tx[k];
                    nxt[i][j]=nxt[i][k];
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
    int T,n,m,u,v,w;
    string s;
    char ss[200];
    scanf("%d",&T);
    getchar();
    getchar();
    while(T--){
        n=0;
        gets(ss);
        stringstream sin(ss);
        while(sin>>w){
            d[1][++n]=(w!=-1)?w:1e9;
        }
        for(int i=2;i<=n;i++){
            for(int j=1;j<=n;j++){
                scanf("%d",&w);
                d[i][j]=(w!=-1)?w:1e9;
            }
        }
        for(int i=1;i<=n;i++){
            scanf("%d",&tx[i]);
        }
        F_W(n);
        int st;
        getchar();
        bool f=0;
        while(gets(ss)){
            if(strlen(ss)==0){
                break;
            }
            if(f){
                printf("\n");
            }
            f=1;
            sscanf(ss,"%d %d",&u,&v);
            printf("From %d to %d :\nPath: %d",u,v,u);
            st=u;
            while(st!=v){
                st=nxt[st][v];
                printf("-->%d",st);
            }
            printf("\nTotal cost : %d\n",d[u][v]);
        }
        if(T){
            printf("\n");
        }
    }

    return 0;
}


