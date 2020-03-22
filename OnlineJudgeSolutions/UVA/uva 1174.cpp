#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pii pair<int,int>
#define F first
#define S second
#define pb push_back
#define pp pop_back

struct node
{
    int x,y,z;
    node(int a,int b,int c)
    {
        x=a,y=b,z=c;
    }
    bool operator<(const node &p)const
    {
        return z>p.z;
    }
};
priority_queue<node>pq;
int parrent[200005];

int FindParrent(int n)
{
    if(parrent[n]==n){
        return n;
    }
    return parrent[n]=FindParrent(parrent[n]);
}

void Union(int u,int v)
{
    int x,y;
    x=FindParrent(u);
    y=FindParrent(v);
    if(x!=y){
        parrent[y]=x;
    }
    return ;
}



int main()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int n,m,u,v,ww,t,id=0,w;
    map<string,int>mp;
    bool f=0;
    string s1,s2;
    scanf("%d",&t);
    while(t--){
        id=0;
        scanf("%d%d",&n,&m);
        for(int i=1;i<=m;i++){
            cin>>s1>>s2>>w;
            if(!mp[s1]){
                mp[s1]=++id;
            }
            if(!mp[s2]){
                mp[s2]=++id;
            }
            if(mp[s1]>mp[s2]){
                u=mp[s2];
                v=mp[s1];
            }
            else{
                u=mp[s1];
                v=mp[s2];
            }
            pq.push(node(u,v,w));
        }
        for(int i=1;i<=n;i++){
            parrent[i]=i;
        }
        ll sum=0;
        while(!pq.empty()){
            node tp=pq.top();
            pq.pop();
            if(FindParrent(tp.x)!=FindParrent(tp.y)){
                sum+=tp.z;
                Union(tp.x,tp.y);
            }
        }

        printf("%lld\n",sum);
        mp.clear();
        if(t){
            printf("\n");
        }
    }

    return 0;
}


