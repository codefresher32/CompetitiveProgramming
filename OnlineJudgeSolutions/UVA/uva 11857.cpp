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
    while(scanf("%d%d",&n,&m)!=EOF){
        if(n==0&&m==0){
            return 0;
        }
        for(int i=1;i<=m;i++){
            scanf("%d%d%d",&u,&v,&w);
            if(u>v){
                swap(u,v);
            }
            if(u==v){
                continue;
            }
            pq.push(node(u,v,w));
        }
        for(int i=0;i<n;i++){
            parrent[i]=i;
        }
        int s=0;

        while(!pq.empty()){
            node tp=pq.top();
            pq.pop();
            if(FindParrent(tp.x)!=FindParrent(tp.y)){
                s=max(s,tp.z);
                Union(tp.x,tp.y);
            }
        }
        int x;
        set<int>st;
        for(int i=0;i<n;i++){
            x=FindParrent(i);
            st.insert(x);
        }
        x=st.size();
        if(x>1){
            printf("IMPOSSIBLE\n");
        }
        else{
            printf("%d\n",s);
        }
    }

    return 0;
}


