#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pii pair<int,int>
#define F first
#define S second
#define pb push_back
#define pp pop_back


vector<int>G[1100];
int d[1100];


bool prime(int n)
{
    for(int i=3;i*i<=n;i+=2){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

bool ck(int n1,int n2)
{
    string s1,s2;
    int c=0;
    s1=to_string(n1);
    s2=to_string(n2);
    for(int i=0;i<4;i++){
        if(s1[i]!=s2[i]){
            c++;
        }
    }
    if(c==1){
        return true;
    }
    return false;
}


void bfs(int s)
{
    queue<int>q;
    memset(d,-1,sizeof(d));
    int u;
    d[s]=0;
    q.push(s);
    while(!q.empty()){
        u=q.front();
        q.pop();
        for(int v:G[u]){
            if(d[v]==-1){
                d[v]=d[u]+1;
                q.push(v);
            }
        }
    }
    return ;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,n,m,id=0;
    vector<int>pr;
    map<int,int>mp;
    for(int i=1001;i<=9999;i+=2){
        if(prime(i)){
            pr.pb(i);
            //cout<<i<<" ";
            mp[i]=++id;
        }
    }
    //cout<<pr.size()<<endl;
    for(int i=0;i<pr.size();i++){
        for(int j=i+1;j<pr.size();j++){
            if(ck(pr[i],pr[j])){
                G[mp[pr[i]]].pb(mp[pr[j]]);
                G[mp[pr[j]]].pb(mp[pr[i]]);
            }
        }
    }
    cin>>t;
    while(t--){
        cin>>n>>m;
        bfs(mp[n]);
        if(d[mp[m]]==-1){
            cout<<"Impossible\n";
        }
        else{
            cout<<d[mp[m]]<<endl;
        }
    }
    return 0;
}



