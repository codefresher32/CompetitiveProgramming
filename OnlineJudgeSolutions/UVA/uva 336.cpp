#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define mx 20000

vector<int>G[mx];
int c[mx];
queue<int>q;


void clr()
{
    for(int i=0;i<mx;i++){
        G[i].clear();
    }
    return ;
}

void bfs(int s)
{
    int u,v;
    memset(c,-1,sizeof(c));
    q.push(s);
    c[s]=0;
    while(!q.empty()){
        u=q.front();
        for(int i=0;i<G[u].size();i++){
            if(c[G[u][i]]==-1){
                c[G[u][i]]=c[u]+1;
                q.push(G[u][i]);
            }
        }
        q.pop();
    }
    return ;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,x,y,ca=0;
    while(cin>>n){
        if(n==0){
            return 0;
        }
        set<int>st;
        for(int i=0;i<n;i++){
            cin>>x>>y;
            G[x].push_back(y);
            G[y].push_back(x);
            st.insert(x);
            st.insert(y);
        }
        while(cin>>x>>y){
            int ans=0;
            if(x==0&&y==0){
                break;
            }
            bfs(x);
            for(auto it:st){
                if(c[it]>y||c[it]==-1){
                    ans++;
                }
            }
            printf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n",++ca,ans,x,y);
            //cout<<c[1]<<endl<<c[2]<<endl<<c[3]<<endl<<c[5]<<endl;
        }
        clr();
    }
    return 0;
}

