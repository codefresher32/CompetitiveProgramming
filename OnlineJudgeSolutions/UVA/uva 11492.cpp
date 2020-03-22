#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define pii pair<int,int>
#define pi pair<string,string>
#define F first
#define S second
#define pb push_back
#define pp pop_back

struct node
{
    int v,w;
    string ss;
    node(int a,int b,string s){
        v=a,w=b,ss=s;
    }
    bool operator<(const node &p)const{
        return w>p.w;
    }
};

vector<pii>G[5005];
vector<string>W[5005];
map<string,int>mp;
map<pii,int>tr;
int d[5005],des;



void dijkstra(int s,int n)
{
    string s1,s2;
    int id;
    queue<node>q;
    for(int i=0;i<=n;i++){
        d[i]=1e9;
    }
    d[s]=0;
    //node tp;
    q.push(node(s,d[s],""));
    while(!q.empty()){
        node tp=q.front();
        q.pop();
        for(pii v:G[tp.v]){
            s1=tp.ss;
            id=tr[{tp.v,v.F}];
            for(int i=0;i<W[id].size();i++){
                s2=W[id][i];
               // cout<<d[v.F]<<endl;
                if(d[v.F]>d[tp.v]+v.S&&s1[0]!=s2[0]){
                    d[v.F]=d[tp.v]+v.S;
                    q.push(node(v.F,d[v.F],s2));
                    if(v.F==des){
                        return ;
                    }
                }
            }
        }
    }
    return ;
}

void clr(int n)
{
    mp.clear();
    tr.clear();
    for(int i=1;i<=n;i++){
        G[i].clear(),W[i].clear();
    }
    return ;
}


int main()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int n,l,id,dd;
    string sr,ds,us,vs,ws;
    while(scanf("%d",&n)!=EOF,n){
        cin>>sr>>ds;
        id=dd=0;
        for(int i=1;i<=n;i++){
            cin>>us>>vs>>ws;
            l=ws.size();
            if(!mp[us]){
                mp[us]=++id;
            }
            if(!mp[vs]){
                mp[vs]=++id;
            }
            G[mp[us]].pb({mp[vs],l});
            G[mp[vs]].pb({mp[us],l});
            if(!tr[{mp[us],mp[vs]}]){
                tr[{mp[us],mp[vs]}]=++dd;
                tr[{mp[vs],mp[us]}]=dd;
            }
            W[dd].pb(ws);
        }
        des=mp[ds];
        dijkstra(mp[sr],id);
        if(d[mp[ds]]==1e9){
            printf("impossivel\n");
        }
        else{
            printf("%d\n",d[mp[ds]]);
        }
        clr(id);
    }
    return 0;
}


