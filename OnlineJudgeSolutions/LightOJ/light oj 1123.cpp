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
#define mod 10
#define ex 1e-7


struct node
{
    int u,v,w;
    bool operator<(const node &p)const{
        return w<p.w;
    }
}L[505];

int cnt;
int par[205];

int FindP(int node)
{
    if(node==par[node]){
        return node;
    }
    return par[node]=FindP(par[node]);
}

int F(int n)
{
    int d,u,v,sum,con;
    sum=0,con=1,d=-1;
    for(int i=1;i<=n;i++){
        par[i]=i;
    }
    for(int i=1;i<=cnt;i++){
        u=FindP(L[i].u),v=FindP(L[i].v);
        if(u==v){
            d=i;
            continue;
        }
        par[v]=u;
        con++,sum+=L[i].w;
    }
    if(d!=-1){
        L[d]=L[cnt],cnt--;
    }
//    printf("---\n");
//    for(int i=1;i<=cnt;i++){
//        printf("%d %d %d\n",L[i].u,L[i].v,L[i].w);
//    }
//    printf("---\n");
    if(con==n) return sum;
    return -1;
}


int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int t,n,m,u,v,w,id=0;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&n,&m);
        cnt=1;
        printf("Case %d:\n",++id);
        for(int i=1;i<=m;i++){
            scanf("%d %d %d",&u,&v,&w);
            L[cnt].u=u,L[cnt].v=v,L[cnt].w=w;
            sort(L+1,L+1+cnt);
            printf("%d\n",F(n));
            cnt++;
        }
    }
    return 0;
}

