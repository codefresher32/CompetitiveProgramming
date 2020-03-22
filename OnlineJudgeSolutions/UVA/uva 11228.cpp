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
int parrent[1005];


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
    int ar1[1005]={0},ar2[1005]={0};
    scanf("%d",&t);
    while(t--){
        scanf("%d%d",&n,&m);
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
        int st=1;
        while(!pq.empty()){
            node tp=pq.top();
            pq.pop();
            u=FindParrent(tp.x);
            v=FindParrent(tp.y);
            if(u!=v){
               parrent[v]=u;
               vc.pb(tp.z);
               if(tp.z>m){
                   st++;
               }
            }
        }
        sort(vc.begin(),vc.end());
        int x,y,z;
        z=st;
        st--;
        double road=0,railroad=0;
        for(int i=vc.size()-1;i>=0;i--){
            if(!st){
                road+=vc[i];
            }
            else{
                railroad+=vc[i];
                st--;
            }
        }

        x=round(road);
        y=round(railroad);
        printf("Case #%d: %d %d %d\n",++id,z,x,y);
    }

    return 0;
}


