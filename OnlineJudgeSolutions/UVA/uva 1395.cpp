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

struct nn
{
    int u,v,w;
};

bool com(nn A,nn B)
{
    return A.w<B.w;
}

int par[105];


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
    int n,m,u,v,w;
    while(scanf("%d %d",&n,&m)!=EOF){
        if(!(n+m)) return 0;
        vector<nn>vc;
        nn p;
        for(int i=1;i<=m;i++){
            scanf("%d %d %d",&u,&v,&w);
            p.u=u,p.v=v,p.w=w;
            vc.pb(p);
        }
        sort(vc.begin(),vc.end(),com);
        int ans=INT_MAX;
        int cnt,mx,mn;
        for(int i=0;i<m;i++){
            for(int j=i;j<m;j++){
                pq.push(node(vc[j].u,vc[j].v,vc[j].w));
            }
            for(int i=1;i<=n;i++) par[i]=i;
            cnt=0,mx=0,mn=INT_MAX;
            while(!pq.empty()){
                node tp=pq.top();
                pq.pop();
                u=FindP(tp.u),v=FindP(tp.v);
                if(u!=v){
                    cnt++,par[v]=u;
                    mx=max(mx,tp.w);
                    mn=min(mn,tp.w);
                }
            }
            if(cnt==n-1&&ans>mx-mn){
                ans=mx-mn;
            }
        }
        ans=(ans==INT_MAX)?-1:ans;
        printf("%d\n",ans);
    }
    return 0;
}


