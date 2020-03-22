#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int parrent[105];
bool vis[105];

int FindParrent(int node)
{
    if(node==parrent[node]){
        return node;
    }
    return parrent[node]=FindParrent(parrent[node]);
}

void Union(int x, int y)
{
    x=FindParrent(x);
    y=FindParrent(y);
    if(x!=y){
        parrent[x]=y;
    }
    return ;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,u,v,x,y;
    cin>>n>>m;
    for(int i=1;i<=m;i++){
        parrent[i]=i;
    }
    int cnt=0;
    for(int i=1;i<=n;i++){
        cin>>x;
        v=-1;
        if(x==0){
            cnt++;
        }
        while(x--){
            cin>>u;
            vis[u]=1;
            Union(u,v==-1?u:v);
            v=u;
        }
    }
    set<int>st;
    for(int i=1;i<=m;i++){
        if(vis[i]){
            u=FindParrent(i);
            st.insert(u);
        }
    }
    int sz=st.size()-1;
    sz=sz<0?0:sz;
    cout<<cnt+sz<<endl;
    return 0;
}
