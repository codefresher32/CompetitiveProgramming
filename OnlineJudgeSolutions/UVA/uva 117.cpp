#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define pii pair<int,int>
#define pi pair<char,char>
#define F first
#define S second
#define pb push_back
#define pp pop_back

int d[505][505];
vector<int>G[505];
map<char,int>mp;


void F_W(int n)
{
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i!=j&&!d[i][j]){
                d[i][j]=1e8;
            }
        }
    }
    for(int k=1;k<=n;k++){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                d[i][j]=min(d[i][j],d[i][k]+d[k][j]);
            }
        }
    }
    return ;
}


void clr(int n)
{
    mp.clear();
    memset(d,0,sizeof(d));
    for(int i=1;i<=n;i++){
        G[i].clear();
    }
    return ;
}


int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    string s;
    int l,u,v,id=0,sum=0;
    while(cin>>s){
        if(s=="deadend"){
            vector<int>vc;
            for(int i=1;i<=id;i++){
                if(G[i].size()&1){
                    vc.pb(i);
                }
            }
            if(!vc.size()){
                printf("%d\n",sum);
            }
            else{
                F_W(id);
                printf("%d\n",sum+d[vc[0]][vc[1]]);
            }

            clr(id);
            sum=id=0;
        }
        else{
           l=s.size();
           if(!mp[s[0]]){
               mp[s[0]]=++id;
           }
           if(!mp[s[l-1]]){
               mp[s[l-1]]=++id;
           }
           u=mp[s[0]],v=mp[s[l-1]];
           G[u].pb(v);
           G[v].pb(u);
           d[u][v]=d[v][u]=l;
           sum+=l;
        }
    }
    return 0;
}

