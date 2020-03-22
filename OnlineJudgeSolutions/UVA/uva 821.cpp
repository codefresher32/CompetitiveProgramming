#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

vector<int>G[250];
int c[250];
queue<int>q;

void clr()
{
    for(int i=0;i<250;i++){
        G[i].clear();
    }
    return ;
}

void bfs(int s)
{
    int u,v;
    memset(c,-1,sizeof(c));
    c[s]=0;
    q.push(s);
    while(!q.empty()){
        u=q.front();
        for(int i=0;i<G[u].size();i++){
            if(c[G[u][i]]==-1){
                c[G[u][i]]=c[u]+1;
                q.push(G[u][i]);
                //cout<<G[u][i]<<" "<<c[G[u][i]]<<endl;
            }
        }
        q.pop();
    }
    return ;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int cnt,ans,x,y,ca=0;
    while(cin>>x>>y){
        if(x==0&&y==0){
            return 0;
        }
        set<int>st;
        st.insert(x);
        st.insert(y);
        G[x].push_back(y);
        while(cin>>x>>y){
            if(x==0&&y==0){
                break;
            }
            G[x].push_back(y);
            st.insert(x);
            st.insert(y);
        }
        cnt=ans=0;
        for(auto it:st){
            bfs(it);
            for(auto pi:st){
                if(c[pi]>0){
                    ans+=c[pi];
                    cnt++;
                }
            }
        }
        printf("Case %d: average length between pages = %0.3f clicks\n",++ca,((1.0*ans)/(1.0*cnt)));
        clr();
    }
}
