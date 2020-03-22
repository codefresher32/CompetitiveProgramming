#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pii pair<int,int>
#define F first
#define S second
#define pb push_back
#define pp pop_back



void Union(int u,int v)
{
    int x,y;
    x=FindParrent(u);
    y=FindParrent(v);
    if(x!=y){
        parrent[y]=x;
    }
    return ;
}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,u,v,w;
    while(scanf("%d%d",&n,&m)!=EOF&&n&&m){
            ll s=0;
        for(int i=1;i<=m;i++){
            scanf("%d%d%d",&u,&v,&w);
            parrent[u]=u;
            parrent[v]=v;
            s+=w;
            pq.push(node(u,v,w));
        }
        ll sum=0;
        while(!pq.empty()){
            node tp=pq.top();
            pq.pop();
            if(FindParrent(tp.x)!=FindParrent(tp.y)){
                sum+=tp.z;
                Union(tp.x,tp.y);
            }
        }
        printf("%lld\n",s-sum);
    }

    return 0;
}

