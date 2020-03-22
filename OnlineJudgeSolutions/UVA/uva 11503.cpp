#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int parrent[100005];
int s[100005];
map<string,int>mp;

int FindParrent(int node)
{
    if(node==parrent[node]){
        return node;
    }
    return parrent[node]=FindParrent(parrent[node]);
}

int Union(int x, int y)
{
    int sz;
    x=FindParrent(x);
    y=FindParrent(y);
    if(x!=y){
        if(s[x]>=s[y]){
            parrent[y]=x;
            s[x]+=s[y];
            sz=s[x];
        }
        else{
            parrent[x]=y;
            s[y]+=s[x];
            sz=s[y];
        }
    }
    else{
        sz=s[x];
    }
    return sz;
}

void clr()
{
    memset(parrent,0,sizeof(parrent));
    memset(s,0,sizeof(s));
    mp.clear();
    return ;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,T,r,c,n,id,u,v;
    bool f=0;
    string s1,s2;
    cin>>T;
    while(T--){
        cin>>n;
        id=0;
        for(int i=1;i<=n;i++){
            cin>>s1>>s2;
            if(mp[s1]==0){
                mp[s1]=++id;
                parrent[id]=id;
                s[id]=1;
            }
            if(mp[s2]==0){
                mp[s2]=++id;
                parrent[id]=id;
                s[id]=1;
            }
            int cnt;
            cnt=Union(mp[s1],mp[s2]);
            cout<<cnt<<endl;
        }
        clr();
    }
    return 0;
}
