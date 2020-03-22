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
int parrent[105];

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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,u,v,w,t;
    double ar[105][3]={{0}};
    bool f=0;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        for(int i=1;i<=n;i++){
            scanf("%lf %lf",&ar[i][1],&ar[i][2]);
        }
        for(int i=1;i<=n;i++){
            parrent[i]=i;
        }
        double xx;
        for(int i=1;i<=n;i++){
            for(int j=i+1;j<=n;j++){
               xx=sqrt(pow(abs(ar[i][1]-ar[j][1]),2)+pow(abs(ar[i][2]-ar[j][2]),2));
               pq.push({i,j,xx});
            }
        }
        double sum=0;
        while(!pq.empty()){
            node tp=pq.top();
            pq.pop();
            if(FindParrent(tp.x)!=FindParrent(tp.y)){
                sum+=tp.z;
                Union(tp.x,tp.y);
            }
        }
        if(f){
            printf("\n");
        }
        f=1;
        printf("%lf\n",sum);
    }

    return 0;
}


