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
    scanf("%d",&t);
    while(t--){
            scanf("%d%d",&n,&m);
            vector<node>vc,ve;
        for(int i=1;i<=m;i++){
            scanf("%d%d%d",&u,&v,&w);
            if(u>v){
                swap(u,v);
            }
            parrent[u]=u;
            parrent[v]=v;
            pq.push(node(u,v,w));
            vc.pb(node(u,v,w));
        }
        ll s1=0,s2=0,s=INT_MAX;

        while(!pq.empty()){
            node tp=pq.top();
            pq.pop();
            if(FindParrent(tp.x)!=FindParrent(tp.y)){
                s1+=tp.z;
                ve.pb(tp);
                Union(tp.x,tp.y);
            }
        }
        for(node xx:ve){
            for(int i=0;i<vc.size();i++){
                pq.push(vc[i]);
                parrent[vc[i].x]=vc[i].x;
                parrent[vc[i].y]=vc[i].y;
            }
            s2=0;
            while(!pq.empty()){
                node tp=pq.top();
                pq.pop();
                if(tp.x==xx.x&&tp.y==xx.y&&tp.z==xx.z){
                    continue;
                }
                if(FindParrent(tp.x)!=FindParrent(tp.y)){
                    s2+=tp.z;
                    Union(tp.x,tp.y);
                }
            }
            if(s>s2&&s2>=s1){
                s=s2;
            }
        }
        printf("%lld %lld\n",s1,s);
    }

    return 0;
}



