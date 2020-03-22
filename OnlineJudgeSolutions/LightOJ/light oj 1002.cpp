#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pii pair<int,int>
#define F first
#define S second
#define pb push_back
#define pp pop_back



class Min
{
    public:
        int u,v,w;

        Min(int a,int b,int c)
        {
            u=a,v=b,w=c;
        }

        bool operator<(const Min& B)const
        {
            return w>B.w;
        }

};

class Max
{
    public:
        int u,v,w;

        Max(int a,int b,int c)
        {
            u=a,v=b,w=c;
        }

        bool operator<(const Max& A)const
        {
            return w<A.w;
        }
};



int FindParrent(int root,int Parrent[105])
{
    if(root==Parrent[root]){
        return root;
    }
    return Parrent[root]=FindParrent(Parrent[root],Parrent);
}



int main()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int t,n,m,u,v,w,s,id=0,x,y;
    int P1[105],P2[105];
    scanf("%d",&t);
    while(t--){
        priority_queue<Min>pq1;
        priority_queue<Max>pq2;
        scanf("%d",&n);

        while(scanf("%d%d%d",&u,&v,&w)!=EOF){
            if(!u&&!v&&!w){
                break;
            }
            pq1.push(Min(u,v,w));
            pq2.push(Max(u,v,w));
        }
        for(int i=0;i<=n;i++){
            P1[i]=P2[i]=i;
        }
        int s1,s2;
        s1=s2=0;
        while(!pq1.empty()){
            Min tp1=pq1.top();
            Max tp2=pq2.top();
            pq1.pop();
            pq2.pop();
            u=FindParrent(tp1.u,P1);
            v=FindParrent(tp1.v,P1);
            x=FindParrent(tp2.u,P2);
            y=FindParrent(tp2.v,P2);
            if(u!=v){
                s1+=tp1.w;
                P1[v]=u;
            }
            if(x!=y){
                s2+=tp2.w;
                P2[y]=x;
            }
        }
        s1+=s2;
        printf("Case %d: ",++id);
        if(s1&1){
            printf("%d/2\n",s1);
        }
        else{
            printf("%d\n",s1/2);
        }
    }
    return 0;
}
