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
    int x,y;
    double z;
    node(int a,int b,double c)
    {
        x=a,y=b,z=c;
    }
    bool operator<(const node &p)const
    {
        return z>p.z;
    }
};
priority_queue<node>pq;
int parrent[505];


int FindParrent(int n)
{
    if(parrent[n]==n){
        return n;
    }
    return parrent[n]=FindParrent(parrent[n]);
}


int main()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int n,m,u,v,w,t,id=0,p;
    double mx;
    scanf("%d",&t);
    while(t--){
        scanf("%d%d",&p,&n);
         int ar1[505]={0},ar2[505]={0};
        for(int i=1;i<=n;i++){
            scanf("%d%d",&ar1[i],&ar2[i]);
        }
        for(int i=1;i<=n;i++){
            parrent[i]=i;
        }
        double xx;
        for(int i=1;i<=n;i++){
            for(int j=i+1;j<=n;j++){
               xx=sqrt((double)(ar1[i]-ar1[j])*(ar1[i]-ar1[j])+(ar2[i]-ar2[j])*(ar2[i]-ar2[j]));
               pq.push({i,j,xx});
            }
        }
        vector<double>vc;
        while(!pq.empty()){
            node tp=pq.top();
            pq.pop();
            u=FindParrent(tp.x);
            v=FindParrent(tp.y);
            if(u!=v){
               parrent[v]=u;
               vc.pb(tp.z);
            }
        }
        sort(vc.rbegin(),vc.rend());
        printf("%0.2f\n",vc[p-1]);
    }

    return 0;
}

