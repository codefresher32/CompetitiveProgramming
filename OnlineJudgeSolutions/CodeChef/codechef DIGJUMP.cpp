#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pii pair<int,char>
#define F first
#define S second
#define pb push_back
#define pp pop_back

vector<int>G[15];
int d[100005];
bool vis[100005];
string s;

void bfs()
{
    int u,l;
    queue<pii>q;
    //memset(d,-1,sizeof(d));
    d[0]=0;
    vis[0]=1;
    l=s.size();
    q.push({0,s[0]});
    while(!q.empty()){
        pii tp=q.front();
        q.pop();
        if(tp.F==l-1){
            return ;
        }
        for(int v:G[tp.S-'0']){
            if(!vis[v]){
                vis[v]=1;
                d[v]=d[tp.F]+1;
                q.push({v,s[v]});
            }
        }
        G[tp.S-'0'].clear();
        if(tp.F-1>=0&&!vis[tp.F-1]){
            vis[tp.F-1]=1;
            d[tp.F-1]=d[tp.F]+1;
            q.push({tp.F-1,s[tp.F-1]});
        }
        if(tp.F+1<s.size()&&!vis[tp.F+1]){
            vis[tp.F+1]=1;
            d[tp.F+1]=d[tp.F]+1;
            q.push({tp.F+1,s[tp.F+1]});
        }
    }

}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int l;
    cin>>s;
    l=s.size();
    for(int i=0;i<l;i++){
        G[s[i]-'0'].pb(i);
    }
    bfs();
    cout<<d[l-1]<<endl;
    return 0;
}


