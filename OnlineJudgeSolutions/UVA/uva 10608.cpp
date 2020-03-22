#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int parrent[30005];
int s[30005];

int FindParrent(int node)
{
    if(node==parrent[node]){
        return node;
    }
    return parrent[node]=FindParrent(parrent[node]);
}

void Union(int x, int y)
{
    x=FindParrent(x);
    y=FindParrent(y);
    if(x!=y){
        if(s[x]>=s[y]){
            parrent[y]=x;
            s[x]+=s[y];
        }
        else{
            parrent[x]=y;
            s[y]+=s[x];
        }
    }
    return ;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,T,n,m,a,b;
    cin>>T;
    while(T--){
        cin>>n>>m;
        for(int i=1;i<=n;i++){
            parrent[i]=i;
            s[i]=1;
        }
        for(int i=1;i<=m;i++){
            cin>>a>>b;
            Union(a,b);
        }
        int mx=-1;
        for(int i=1;i<=n;i++){
            mx=max(mx,s[i]);
        }
        cout<<mx<<endl;
    }
    return 0;
}

