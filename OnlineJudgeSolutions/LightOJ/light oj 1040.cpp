#include<bits/stdc++.h>
#include <cmath>
using namespace std;

typedef long long ll;

#define pii pair<int,ll>
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
    node(int uu,int vv,int ww){
        u=uu;
        v=vv;
        w=ww;
    }
    bool operator<(const node &p)const{
        return w>p.w;
    }
};
priority_queue<node>pq;
int par[55];

int FindP(int node)
{
    if(node==par[node]){
        return node;
    }
    return par[node]=FindP(par[node]);
}


int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int t,n,m,u,v,w,id=0;
    scanf("%d",&t);

    while(t--){
        scanf("%d",&n);
        int sum,s;
        sum=s=0;
        for(u=1;u<=n;u++){
            par[u]=u;
            for(v=1;v<=n;v++){
                scanf("%d",&w),sum+=w;
                if(w) pq.push(node(u,v,w));
            }
        }
        while(!pq.empty()){
            node tp=pq.top();
            pq.pop();
            u=FindP(tp.u);
            v=FindP(tp.v);
            if(u!=v){
                s+=tp.w;
                par[v]=u;
            }
        }
        set<int>st;
        for(int i=1;i<=n;i++){
            st.insert(FindP(i));
        }
        printf("Case %d: ",++id);
        if(st.size()>1){
            printf("-1\n");
        }
        else{
            printf("%d\n",sum-s);
        }
    }
    return 0;
}



