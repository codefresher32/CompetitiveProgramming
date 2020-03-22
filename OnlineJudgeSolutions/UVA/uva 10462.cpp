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
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int n,m,u,v,ww,t,id=0,w,k;
    bool f=0;
    scanf("%d",&t);
    while(t--){
            scanf("%d%d",&n,&m);
            vector<node>vc,ve;
        for(int i=1;i<=m;i++){
            scanf("%d%d%d",&u,&v,&w);
            if(u>v){
                swap(u,v);
            }
            pq.push(node(u,v,w));
            vc.pb(node(u,v,w));
        }
        for(int i=1;i<=n;i++){
            parrent[i]=i;
        }
        ll s1=0,s2=0,s=INT_MAX;

        while(!pq.empty()){
            node tp=pq.top();
            pq.pop();
            if(FindParrent(tp.x)!=FindParrent(tp.y)){
                s1+=tp.z;
                ve.pb(tp);
                Union(tp.x,tp.y);
            }
        }
        set<int>st;
        int x;
        for(int i=1;i<=n;i++){
                x=FindParrent(i);
                st.insert(x);
        }
        x=st.size();
        for(node xx:ve){
            for(int i=0;i<vc.size();i++){
                pq.push(vc[i]);
            }
            for(int i=1;i<=n;i++){
                parrent[i]=i;
            }
            s2=0;
            bool f=0;
            while(!pq.empty()){
                node tp=pq.top();
                pq.pop();
                if(tp.x==xx.x&&tp.y==xx.y&&tp.z==xx.z&&!f){
                    f=1;
                    continue;
                }
                if(FindParrent(tp.x)!=FindParrent(tp.y)){
                    s2+=tp.z;
                    Union(tp.x,tp.y);
                }
            }
            if(s>s2&&s2>=s1){
                s=s2;
            }
        }
        //cout<<s1<<endl;
        printf("Case #%d : ",++id);
        if(x>1){
           printf("No way\n");
        }
        else if(s>=s1&&s!=INT_MAX){
           printf("%lld\n",s);
        }
        else {
            printf("No second way\n");
        }

    }

    return 0;
}
