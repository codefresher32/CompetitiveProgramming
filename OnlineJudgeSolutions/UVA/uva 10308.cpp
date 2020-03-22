#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
//#define pii pair<int,int>
//#define F first
//#define S second
//#define pb push_back
//#define pp pop_back

vector<pair<int,int>>G[10005];
bool vis[10005];
int id,mn;

void dfs(int s,int mx)
{
    if(mx>mn){
        mn=mx;
        id=s;
    }
    vis[s]=1;
    for(auto v:G[s]){
        if(!vis[v.first]){
            dfs(v.first,mx+v.second);
        }
    }
    vis[s]=0;
    return ;
}



int main()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    char s[30];
    int u,v,w,mxid;
    while(gets(s)){
        for(int i=1;i<=10000;i++){
            G[i].clear();
        }
        mxid=0;
        do{
            if(!strlen(s)){
                break;
            }
            sscanf(s,"%d %d %d",&u,&v,&w);
            G[u].push_back(make_pair(v,w));
            G[v].push_back(make_pair(u,w));
            mxid=max(mxid,max(u,v));
        }
        while(gets(s));
        mn=0;
        dfs(1,0);
        dfs(id,0);
        printf("%d\n",mn);
    }
    return 0;
}


