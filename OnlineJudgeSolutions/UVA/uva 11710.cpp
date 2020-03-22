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
int parrent[100005];

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
    int n,m,u,v,ww,t,id=0,w,k;
    string s1,s2;
    map<string,int>mp;
    while(scanf("%d%d",&n,&m)!=EOF){
        id=0;
        if(n==0&&m==0){
            return 0;
        }
        for(int i=1;i<=n;i++){
            cin>>s1;
            mp[s1]=++id;
        }
        for(int i=1;i<=m;i++){
            cin>>s1>>s2>>w;
            u=mp[s1];
            v=mp[s2];
            pq.push(node(u,v,w));
        }
        cin>>s1;
        for(int i=1;i<=n;i++){
            parrent[i]=i;
        }
        ll s=0;

        while(!pq.empty()){
            node tp=pq.top();
            pq.pop();
            if(FindParrent(tp.x)!=FindParrent(tp.y)){
                s+=tp.z;
                Union(tp.x,tp.y);
            }
        }
        int x;
        set<int>st;
        for(int i=1;i<=n;i++){
            x=FindParrent(i);
            st.insert(x);
        }
        x=st.size();
        if(x>1){
            printf("Impossible\n");
        }
        else{
            printf("%lld\n",s);
        }
        mp.clear();
    }

    return 0;
}


