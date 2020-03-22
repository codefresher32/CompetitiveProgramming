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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,u,v,w;
    while(scanf("%d%d",&n,&m)!=EOF&&n&&m){
        for(int i=1;i<=m;i++){
            scanf("%d%d%d",&u,&v,&w);
            parrent[u]=u;
            parrent[v]=v;
            if(u>v){
                swap(u,v);
            }
            pq.push(node(u,v,w));
        }
        bool f=0;
        vector<int>vc;
        while(!pq.empty()){
            node tp=pq.top();
            pq.pop();
            if(FindParrent(tp.x)!=FindParrent(tp.y)){
                Union(tp.x,tp.y);
            }
            else{
                f=1;
                vc.pb(tp.z);
            }
        }
        if(!f){
            printf("forest");
        }
        else{
            sort(vc.begin(),vc.end());
            printf("%d",vc[0]);
            for(int i=1;i<vc.size();i++){
                printf(" %d",vc[i]);
            }
        }
        printf("\n");
    }

    return 0;
}


