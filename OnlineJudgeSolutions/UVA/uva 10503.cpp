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

int n,m,i1,i2,d1,d2,u[20],v[20];
bool f,vis[25];

void dfs(int len,int s)
{
    if(f) return ;
   if(len==n){
        if(s==d1) f=1;
   }
   for(int i=1;i<=m;i++){
        if(vis[i]){
            continue;
        }
        if(s==u[i]||s==v[i]){
            vis[i]=1;
            dfs(len+1,(s==u[i])?v[i]:u[i]);
            vis[i]=0;
        }
   }
}

void clr()
{
    f=0;
    for(int i=0;i<25;i++){
        vis[i]=0;
    }
    return ;
}


int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    while(scanf("%d",&n),n){
        scanf("%d %d %d %d %d",&m,&i1,&i2,&d1,&d2);
        for(int i=1;i<=m;i++){
            scanf("%d %d",&u[i],&v[i]);
        }
        dfs(0,i2);
        if(f){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
        clr();
    }
    return 0;
}

