#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

vector<int>G[1000];
int c[1000];
queue<int>q;
bool f;

void bfs(int s)
{
    memset(c,-1,sizeof(c));
    c[s]=1;
    int u;
    q.push(s);
    while(!q.empty()){
        u=q.front();
        q.pop();
        for(int v:G[u]){
            if(c[v]==-1){
               c[v]=(c[u]==1)?0:1;
               q.push(v);
            }
            else{
                if(c[u]==c[v]){
                    f=1;
                }
            }
        }
    }
    return ;
}

void clr()
{
    for(int i=0;i<=1000;i++){
        G[i].clear();
    }
    f=0;
    return ;
}


int main()
{
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    int n,l,x,y;
    while(cin>>n){
        if(n==0){
            return 0;
        }
        while(cin>>x>>y){
            if(x==0&&y==0){
                break;
            }
            G[x].push_back(y);
            G[y].push_back(x);
        }
        bfs(1);
        if(!f){
           printf("YES\n");
        }
        else{
            printf("NO\n");
        }
        clr();
    }
    return 0;
}


