#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

vector<int>G[205];
int c[205];
queue<int>q;

bool bfs(int s)
{
    memset(c,-1,sizeof(c));
    c[s]=1;
    int u,v;
    q.push(s);
    while(!q.empty()){
        u=q.front();
        for(int i=0;i<G[u].size();i++){
            if(c[G[u][i]]==-1){
               c[G[u][i]]=c[u]==1?0:1;
               q.push(G[u][i]);
            }
            else{
                if(c[u]==c[G[u][i]]){
                    return false;
                }
            }
        }
        q.pop();
    }
    return true;
}

void clr()
{
    for(int i=0;i<=203;i++){
        G[i].clear();
    }
    return ;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,l,x,y;
    while(cin>>n){
        if(n==0){
            return 0;
        }
        cin>>l;
        for(int i=1;i<=l;i++){
            cin>>x>>y;
            G[x].push_back(y);
            G[y].push_back(x);
        }
        if(bfs(0)){
           cout<<"BICOLORABLE.\n";
        }
        else{
            cout<<"NOT BICOLORABLE.\n";
        }
        clr();
    }
    return 0;
}

