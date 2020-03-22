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
    int e,v,w;
    node(int a,int b,int c){
        e=a;
        v=b;
        w=c;
    }
    bool operator<(const node &p)const{
        return w>p.w;
    }
};

int E[6];
int d[6][105];
bool vis[6][105];
vector<int>G[6];


void dijkstra()
{
    priority_queue<node>pq;
    int u;
    for(int i=1;i<=5;i++){
        if(vis[i][0]){
            d[i][0]=0;
            pq.push(node(i,0,d[i][0]));
        }
    }
    while(!pq.empty()){
        node tp=pq.top();
        pq.pop();
        for(int v:G[tp.e]){
            if(d[tp.e][v]>d[tp.e][tp.v]+(abs(tp.v-v)*E[tp.e])){
                d[tp.e][v]=d[tp.e][tp.v]+(abs(tp.v-v)*E[tp.e]);
                pq.push(node(tp.e,v,d[tp.e][v]));
            }
        }
        for(int i=1;i<=5;i++){
            if(i==tp.e){
                continue;
            }
            if(vis[i][tp.v]){
                if(d[i][tp.v]>d[tp.e][tp.v]+60){
                    d[i][tp.v]=d[tp.e][tp.v]+60;
                    pq.push(node(i,tp.v,d[i][tp.v]));
                }
            }
        }
    }
    return ;
}



int main()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int n,m,u,v,w,t,id,k,a;
    string s;
    while(cin>>n>>k){
        for(int i=1;i<=n;i++){
            cin>>E[i];
        }
        for(int i=1;i<=5;i++){
            for(int j=0;j<=100;j++){
                d[i][j]=INT_MAX;
                vis[i][j]=0;
            }
        }
        cin.ignore();
        for(int i=1;i<=n;i++){
            getline(cin,s);
            stringstream sin(s);
            while(sin>>a){
                G[i].pb(a);
                vis[i][a]=1;
            }
        }
        dijkstra();
        int mn=INT_MAX;
        for(int i=1;i<=5;i++){
            if(d[i][k]!=INT_MAX){
                mn=min(mn,d[i][k]);
            }
        }
        if(mn==INT_MAX){
            printf("IMPOSSIBLE\n");
        }
        else{
            printf("%d\n",mn);
        }
        for(int i=1;i<=5;i++){
            G[i].clear();
        }
    }

    return 0;
}


