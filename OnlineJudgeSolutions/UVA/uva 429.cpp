#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pii pair<int,string>
#define F first
#define S second
#define pb push_back
#define pp pop_back

vector<int>G[10005];
bool vis[10005];
int c[10005],sr,ds;
map<string,int>mp;
vector<string>vs;

void bfs(int s)
{
    queue<int>q;
    memset(vis,0,sizeof(vis));
    memset(c,0,sizeof(c));
    int u;
    q.push(s);
    vis[s]=1;
    c[s]=0;
    while(!q.empty()){
        u=q.front();
        q.pop();
        if(u==ds){
            return ;
        }
        for(int v:G[u]){
            if(!vis[v]){
                vis[v]=1;
                c[v]=c[u]+1;
                q.push(v);
            }
        }
    }
}

void cal()
{
    string s1,s2;
    for(int i=0;i<=vs.size();i++){
        for(int j=i+1;j<vs.size();j++){
            if(i!=j){
                s1=vs[i];
                s2=vs[j];
                int c=0;
                if(s1.size()==s2.size()){
                    for(int i=0;i<s1.size();i++){
                        if(s1[i]!=s2[i]){
                            c++;
                        }
                    }
                    if(c==1){
                        G[mp[s1]].pb(mp[s2]);
                       // printf("%d %d\n",mp[s1],mp[s2]);
                        G[mp[s2]].pb(mp[s1]);
                    }
                }
            }
        }
    }
    return ;
}


int main()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int t,n,m,u,v,id;
    string s1,s2,s;
    scanf("%d",&t);
    while(t--){
        id=0;
        while(cin>>s1&&s1[0]!='*'){
            mp[s1]=++id;
            vs.pb(s1);
        }
        cal();
        int xy;
//        for(int i=1;i<=id;i++){
//            for(int v:G[i]){
//                printf("%d %d\n",i,v);
//            }
//        }
        getchar();
        while(1){
            getline(cin,s);
            if(s==""){
                break;
            }
            s1=s2="";
            bool f=0;
            for(int i=0;i<s.size();i++){
               if(s[i]==' '){
                    f=1;
                    continue;
               }
               if(!f){
                    s1+=s[i];
               }
               else{
                    s2+=s[i];
               }
            }
            sr=mp[s1];
            ds=mp[s2];
            //printf("%d %d\n",sr,ds);
            bfs(sr);
            printf("%s %s %d\n",s1.c_str(),s2.c_str(),c[ds]);
        }
        for(int i=1;i<=id;i++){
            G[i].clear();
        }
        mp.clear();
        vs.clear();
        if(t){
            printf("\n");
        }
    }
    return 0;
}


