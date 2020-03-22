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
    int t,n,m,u,v,w,s,id=0,x,y,tt=0;
    int P1[555];
    string s1,s2;
    scanf("%d",&t);
    while(t--){
        tt=0;
        priority_queue<Min>pq1;
        map<string,int>mp;
        scanf("%d",&n);

        for(int i=1;i<=n;i++){
            cin>>s1>>s2>>w;
            if(!mp[s1]){
                mp[s1]=++tt;
            }
            if(!mp[s2]){
                mp[s2]=++tt;
            }
            pq1.push(Min(mp[s1],mp[s2],w));
        }
        for(int i=1;i<=tt;i++){
            P1[i]=i;
        }
        int s1=0;
        while(!pq1.empty()){
            Min tp1=pq1.top();
            pq1.pop();
            u=FindParrent(tp1.u,P1);
            v=FindParrent(tp1.v,P1);
            if(u!=v){
                s1+=tp1.w;
                P1[v]=u;
            }
        }
        set<int>st;
        for(int i=1;i<=tt;i++){
            u=FindParrent(i,P1);
            st.insert(u);
        }
        u=st.size();
        printf("Case %d: ",++id);
        if(u==1){
            printf("%d\n",s1);
        }
        else{
            printf("Impossible\n");
        }
    }
    return 0;
}

