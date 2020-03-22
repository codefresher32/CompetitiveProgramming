#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pii pair<int,int>
#define F first
#define S second
#define pb push_back

struct Point
{
    ll x,y;
};

struct node
{
    Point A,B;
};

struct node G[1024];
int parrent[1024];

bool onSegment(Point p,Point q,Point r)
{
    if(q.x<=max(p.x,r.x)&&q.x>=min(p.x,r.x)&&q.y<=max(p.y,r.y)&&q.y>=min(p.y,r.y)){
        return true;
    }
    return false;
}

int orientation(Point p,Point q,Point r)
{
    ll val=(q.y-p.y)*(r.x-q.x)-(q.x-p.x)*(r.y-q.y);

    if(val==0){
        return 0;
    }
    return (val>0)?1:2;
}


bool doIntersect(Point p1,Point q1,Point p2,Point q2)
{
    int o1=orientation(p1,q1,p2);
    int o2=orientation(p1,q1,q2);
    int o3=orientation(p2,q2,p1);
    int o4=orientation(p2,q2,q1);

    if(o1!=o2&&o3!=o4){
        return true;
    }
    if(o1==0&&onSegment(p1,p2,q1)){
        return true;
    }

    if(o2==0&&onSegment(p1,q2,q1)){
       return true;
    }
    if(o3==0&&onSegment(p2,p1,q2)){
       return true;
    }
    if(o4==0&&onSegment(p2,q1,q2)){
       return true;
    }
    return false;
}

int FindParrent(int node)
{
    if(node==parrent[node]){
        return node;
    }
    return parrent[node]=FindParrent(parrent[node]);
}


int main()
{
    int t,n,m,u,v;
    scanf("%d",&t);
    while(t--){
        scanf("%d%d",&n,&m);
        for(int i=1;i<=n;i++){
            scanf("%lld%lld%lld%lld",&G[i].A.x,&G[i].A.y,&G[i].B.x,&G[i].B.y);
            parrent[i]=i;
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                u=FindParrent(i);
                v=FindParrent(j);
                if(u!=v){
                    if(doIntersect(G[i].A,G[i].B,G[j].A,G[j].B)){
                        parrent[u]=parrent[v];
                    }
                }
            }
        }
        for(int i=1;i<=m;i++){
            scanf("%d%d",&u,&v);
            if(FindParrent(u)==FindParrent(v)){
                printf("YES\n");
            }
            else{
                printf("NO\n");
            }
        }
    }
    return 0;
}

