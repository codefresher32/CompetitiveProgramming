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


struct Edge
{
    int u,v,w;
    Edge(int a,int b,int c){
        u=a;
        v=b;
        w=c;
    }
};

vector<Edge>G;
ll d[205];
int a[205];

void B_F(int n)
{
    d[1]=0;
    bool f;
    for(int i=1;i<n;i++){
        f=1;
        for(Edge e:G){
            if(d[e.u]!=INT_MAX&&d[e.u]+e.w<d[e.v]){
                f=0;
                d[e.v]=d[e.u]+e.w;
            }
        }
        if(f){
            break;
        }
    }
    for(Edge e:G){
        if(d[e.u]!=INT_MAX&&d[e.u]+e.w<d[e.v]){
            d[e.v]=-INT_MAX;
        }
    }
    return ;
}



int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);

    int n,m,u,q,v,w,id=0;
    while(scanf("%d",&n)==1){
        for(int i=1;i<=n;i++){
            d[i]=INT_MAX;
            scanf("%d",&a[i]);
        }
        scanf("%d",&m);
        for(int i=1;i<=m;i++){
            scanf("%d %d",&u,&v);
            w=a[v]-a[u];
            w=w*w*w;
            G.pb(Edge(u,v,w));
        }
        B_F(n);
        scanf("%d",&q);
        printf("Set #%d\n",++id);
        while(q--){
            scanf("%d",&u);
            if(d[u]<3||d[u]==INT_MAX){
                printf("?\n");
            }
            else{
                printf("%d\n",d[u]);
            }
        }
        G.clear();
    }

    return 0;
}



