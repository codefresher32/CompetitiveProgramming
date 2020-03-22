#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pii pair<int,int>
#define F first
#define S second
#define pb push_back
#define pp pop_back

struct node
{
    int x,y,z;
    node(int a,int b,int c)
    {
        x=a,y=b,z=c;
    }
    bool operator<(const node &p)const
    {
        return z>p.z;
    }
};
priority_queue<node>pq;
int parrent[200005];

int FindParrent(int n)
{
    if(parrent[n]==n){
        return n;
    }
    return parrent[n]=FindParrent(parrent[n]);
}

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
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int n,m,u,v,ww,t,id=0,w,k;
    bool f=0;
    while(scanf("%d",&n)!=EOF){
        for(int i=1;i<n;i++){
            scanf("%d%d%d",&u,&v,&w);
            if(u>v){
                swap(u,v);
            }
            parrent[u]=u;
            parrent[v]=v;
            pq.push(node(u,v,w));
        }
        ll s1=0,s2=0;
        while(!pq.empty()){
            node tp=pq.top();
            pq.pop();
            if(FindParrent(tp.x)!=FindParrent(tp.y)){
                s1+=tp.z;
                Union(tp.x,tp.y);
            }
        }
        scanf("%d",&k);
        for(int i=1;i<=k;i++){
            scanf("%d%d%d",&u,&v,&w);
            if(u>v){
                swap(u,v);
            }
            parrent[u]=u;
            parrent[v]=v;
            pq.push(node(u,v,w));
        }
        scanf("%d",&m);
        for(int i=1;i<=m;i++){
            scanf("%d%d%d",&u,&v,&w);
            if(u>v){
                swap(u,v);
            }
            parrent[u]=u;
            parrent[v]=v;
            pq.push(node(u,v,w));
        }
        while(!pq.empty()){
            node tp=pq.top();
            pq.pop();
            if(FindParrent(tp.x)!=FindParrent(tp.y)){
                s2+=tp.z;
                Union(tp.x,tp.y);
            }
        }
        if(f){
            printf("\n");
        }
        f=1;
        printf("%lld\n%lld\n",s1,s2);
    }

    return 0;
}


