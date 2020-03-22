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

int n;
int par[20005];
int sz[20005];

int FindP(int node)
{
    if(node==par[node]){
        return node;
    }
    return par[node]=FindP(par[node]);
}

void UNION(int u,int v)
{
    u=FindP(u),v=FindP(v);
    if(u!=v){
        if(sz[u]>=sz[v]){
            par[v]=u;
            sz[u]+=sz[v];
        }
        else{
            par[u]=v;
            sz[v]+=sz[u];
        }
    }
    return ;
}


int enemy(int x)
{
    return n+x;
}

int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int u,v,c,x1,x2,x3,x4;
    while(scanf("%d",&n)!=EOF){
        for(int i=0;i<=20000;i++){
            par[i]=i,sz[i]=1;
        }
        while(scanf("%d %d %d",&c,&u,&v)!=EOF){
            if(!(u+v+c)) return 0;
            x1=FindP(u),x2=FindP(v);
            x3=FindP(enemy(u)),x4=FindP(enemy(v));
            if(c==1){
               if(x1==x4||x2==x3){
                    printf("-1\n");
               }
               else{
                    UNION(u,v);
                    UNION(enemy(u),enemy(v));
               }
            }
            else if(c==2){
                if(x1==x2||x3==x4){
                    printf("-1\n");
                }
                else{
                    UNION(u,enemy(v));
                    UNION(v,enemy(u));
                }
            }
            else if(c==3){
                if(x1==x2||x3==x4){
                    printf("1\n");
                }
                else{
                    printf("0\n");
                }
            }
            else{
                if(x1==x4||x2==x3){
                    printf("1\n");
                }
                else{
                    printf("0\n");
                }
            }
        }
    }
    return 0;
}
