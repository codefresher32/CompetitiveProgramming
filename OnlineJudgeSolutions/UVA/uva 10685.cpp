#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int parrent[5050];
int cnt[5050];
map<string,int>mp;

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
        parrent[y]=x;
    }
    return ;
}

void clr()
{
    memset(parrent,0,sizeof(parrent));
    memset(cnt,0,sizeof(cnt));
    mp.clear();
    return ;
}

int main()
{
    int t,T,r,c;
    bool f=0;
    string s1,s2;
    while(scanf("%d%d",&r,&c)!=EOF){
        if(r==0&&c==0){
            return 0;
        }
        int id=0;
        for(int i=1;i<=r;i++){
            cin>>s1;
            mp[s1]=++id;
            parrent[i]=i;
        }
        for(int i=1;i<=c;i++){
            cin>>s1>>s2;
            Union(mp[s1],mp[s2]);
        }
        int mx=-1,u;
        for(int i=1;i<=r;i++){
            u=FindParrent(i);
            cnt[u]++;
            mx=max(mx,cnt[u]);
        }
        printf("%d\n",mx);
        //printf("\n");
        clr();
    }
    return 0;
}
