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
    int n,m,u,v,ww,t,id=0,w;
    scanf("%d",&t);
    while(t--){
        scanf("%d%d%d",&n,&m,&ww);
        for(int i=1;i<=m;i++){
            scanf("%d%d%d",&u,&v,&w);
            if(u>v){
                swap(u,v);
            }
            pq.push(node(u,v,w));
        }
        for(int i=1;i<=n;i++){
            parrent[i]=i;
        }
        ll sum=0;
        int cnt=0;
        while(!pq.empty()){
            node tp=pq.top();
            pq.pop();
            if(FindParrent(tp.x)!=FindParrent(tp.y)){
                if(tp.z>=ww){
                    cnt++;
                }
                else{
                    sum+=tp.z;
                }
                Union(tp.x,tp.y);
            }
        }
        int x;
        set<int>st;
        for(int i=1;i<=n;i++){
            x=FindParrent(i);
            st.insert(x);
        }
        x=st.size();
        printf("Case #%d: %lld %d\n",++id,sum+ww*(x+cnt),x+cnt);
    }

    return 0;
}


