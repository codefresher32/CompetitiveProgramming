#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pii pair<int,int>
#define F first
#define S second
#define pb push_back
#define pp pop_back


int c[1000005];
int f,s,g,u,d;

void bfs()
{
    int v,x,y;
    queue<int>q;
    memset(c,-1,sizeof(c));
    c[s]=0;
    q.push(s);
    while(!q.empty()){
        v=q.front();
        q.pop();
        if(v==g){
            break;
        }
        x=v+u;
        y=v-d;
        if(x<=f&&c[x]==-1){
            c[x]=c[v]+1;
            q.push(x);
        }
        if(y>0&&c[y]==-1){
            c[y]=c[v]+1;
            q.push(y);
        }
    }
    return ;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>f>>s>>g>>u>>d;
    bfs();
    if(c[g]==-1){
        cout<<"use the stairs\n";
    }
    else{
        cout<<c[g]<<endl;
    }

    return 0;
}
