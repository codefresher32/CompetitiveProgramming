#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

struct Edge
{
    int u,v,w;
    Edge(int x,int y,int z)
    {
        u=x,v=y,w=z;
    }
};

vector<Edge>G;
int d[1005];
int n;
bool f;

void solve(int s)
{
    for(int i=1;i<=n;i++){
        d[i]=1e9;
    }
    d[s]=0;
    for(int i=1;i<n;i++){
        for(Edge e:G){
            if(d[e.u]+e.w<d[e.v]){
                d[e.v]=d[e.u]+e.w;
            }
        }
    }
    for(Edge e:G){
        if(d[e.u]+e.w<d[e.v]){
            f=1;
            break;
        }
    }
    return ;
}

void clr()
{
    G.clear();
    f=0;
    return ;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int m,u,v,w,x,y,t;
    scanf("%d",&t);
    while(t--){
        scanf("%d%d",&n,&m);
        for(int i=1;i<=m;i++){
            scanf("%d%d%d",&u,&v,&w);
            G.push_back(Edge(u,v,w));
        }
        solve(0);
        if(!f){
            printf("not possible\n");
        }
        else{
             printf("possible\n");
        }
        for(int i=0;i<n;i++){
            printf("%d ",d[i]);
        }
        cout<<endl;
        clr();
    }
    return 0;
}

