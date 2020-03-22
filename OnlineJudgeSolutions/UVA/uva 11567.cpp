#include<bits/stdc++.h>
#include <cmath>
using namespace std;

typedef long long ll;

#define pii pair<int,int>
#define pi pair<string,int>
#define F first
#define S second
#define pb push_back
#define pp pop_back
#define mod 1000003
#define ex 1e-7

map<int,bool>mp;
map<int,int>d;


void bfs(int s)
{
    int u;
    queue<int>q;
    mp[s]=1;
    d[s]=0;
    q.push(s);
    while(!q.empty()){
        u=q.front();
        q.pop();
        if(u==0) return ;
        if(u%2==0&&!mp[u/2]){
            mp[u/2]=1;
            d[u/2]=d[u]+1;
            q.push(u/2);
        }
        else{
            if(!mp[u+1]){
                mp[u+1]=1;
                d[u+1]=d[u]+1;
                q.push(u+1);
            }
            if(!mp[u-1]){
                mp[u-1]=1;
                d[u-1]=d[u]+1;
                q.push(u-1);
            }
        }
    }
    return ;
}


int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int n,cnt;
    while(scanf("%d",&n)!=EOF){
        bfs(n);
        printf("%d\n",d[0]);
        mp.clear();
        d.clear();
    }

    return 0;
}

