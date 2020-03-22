#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

vector<int>G[10005];
vector<string>ans;
int c[10005];
int p[10005];
queue<int>q;
map<string,int>mp;

void clr()
{
    mp.clear();
    ans.clear();
    for(int i=0;i<10005;i++){
        G[i].clear();
    }
    return ;
}

void bfs(int s)
{
    int u,v;
    memset(c,-1,sizeof(c));
    memset(p,-1,sizeof(p));
    c[s]=0;
    p[s]=s;
    q.push(s);
    while(!q.empty()){
        u=q.front();
        for(int i=0;i<G[u].size();i++){
            if(c[G[u][i]]==-1){
                c[G[u][i]]=c[u]+1;
                q.push(G[u][i]);
                p[G[u][i]]=u;
            }
        }
        q.pop();
    }
    return ;
}

void print(int s,int d)
{
    int so=d;
    while(so!=p[so]&&p[so]!=-1){
        auto it=mp.begin();
        while(it!=mp.end()){
            if(it->second==so){
                ans.push_back(it->first);
                //cout<<it->first<<endl;
                break;
            }
            it++;
        }
        so=p[so];
    }
    auto it=mp.begin();
        while(it!=mp.end()){
            if(it->second==so){
                ans.push_back(it->first);
                break;
            }
            it++;
        }
        for(int i=ans.size()-1;i>0;i--){
            cout<<ans[i]<<" "<<ans[i-1]<<endl;
        }
    return ;
}


int main()
{

    int n,id;
    string s1,s2;
    bool f=0;
    while(cin>>n){
        id=1;
        while(n--){
            cin>>s1>>s2;
            if(!mp[s1]){
                mp[s1]=id++;
            }
            if(!mp[s2]){
                mp[s2]=id++;
            }
            G[mp[s1]].push_back(mp[s2]);
            G[mp[s2]].push_back(mp[s1]);
        }
        cin>>s1>>s2;
        if(f){
            printf("\n");
        }
        f=1;
        bfs(mp[s1]);
        if (s1==s2){
            cout<<s1<<" "<<s1<<endl;
        }
        if(c[mp[s2]]<1){
            printf("No route\n");
        }
        else{
            print(mp[s1],mp[s2]);
        }

        clr();
    }

    return 0;
}

