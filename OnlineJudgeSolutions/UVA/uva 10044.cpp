#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pii pair<int,int>
#define F first
#define S second
#define pb push_back
#define pp pop_back


vector<int>G[5005];
int vis[5005];
int c[5005];


void bfs(int s)
{
    memset(c,-1,sizeof(c));
    queue<int>q;
    int u;
    c[s]=0;
    vis[s]=1;
    q.push(s);
    while(!q.empty()){
        u=q.front();
        q.pop();
        for(int v:G[u]){
            if(!vis[v]){
                vis[v]=1;
                c[v]=c[u]+1;
                q.push(v);
            }
        }
    }
    return ;
}

void clr(int n)
{
    for(int i=1;i<=n;i++){
        G[i].clear();
    }
    memset(vis,0,sizeof(vis));
    return ;
}

int main()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int t,n,m,u,v,l,id,tt=0;
    string s,fi;
    map<string,int>mp;
    scanf("%d",&t);
    while(t--){
        id=1;
        scanf("%d%d",&n,&m);
        getchar();
        for(int i=1;i<=n;i++){
            getline(cin,s);
            l=s.size();
            fi="";
            int co=0,ck=0;
            vector<string>pi;
            for(int j=0;j<l;j++){
                if(s[j]==','){
                    co++;
                }
                if(s[j]==':'){
                    ck++;
                }
                if(co==2||(co==1&&ck==1)){
                    if(fi[fi.size()-1]!='.'){
                        fi.erase(fi.end()-1);
                    }
                    pi.pb(fi);
                    fi="";
                    co=0;
                    j++;
                    if(ck==1){
                        break;
                    }
                    continue;
                }
                fi+=s[j];
            }
            for(int j=0;j<pi.size();j++){
                //cout<<pi[j]<<endl;
                for(int k=j+1;k<pi.size();k++){
                    //cout<<pi[k]<<endl;
                    if(pi[j]=="Erdos, P."){
                        mp[pi[j]]=1;
                    }
                    if(pi[k]=="Erdos, P."){
                        mp[pi[k]]=1;
                    }
                    if(!mp[pi[j]]){
                        mp[pi[j]]=++id;
                    }
                    if(!mp[pi[k]]){
                        mp[pi[k]]=++id;
                    }
                    //cout<<mp[pi[j]]<<endl<<mp[pi[k]]<<endl;
                    G[mp[pi[j]]].pb(mp[pi[k]]);
                    G[mp[pi[k]]].pb(mp[pi[j]]);
                }
            }
        }
        bfs(1);
        printf("Scenario %d\n",++tt);
//        for(auto p:mp){
//            cout<<p.F<<p.S<<endl;
//        }
        while(m--){
            getline(cin,s);
            cout<<s<<" ";
            if(c[mp[s]]==-1){
                cout<<"infinity\n";
            }
            else{
                cout<<c[mp[s]]<<endl;
            }
        }
        clr(id);
         mp.clear();
    }
    return 0;
}

