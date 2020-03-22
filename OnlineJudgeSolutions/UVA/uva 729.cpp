#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pii pair<int,string>
#define F first
#define S second
#define pb push_back
#define pp pop_back

int n,k;
bool vis[20];
deque<int>dq;
string s;
vector<pii>ve;

bool com(pii A,pii B)
{
    return A.F<B.F;
}

void rr(int i)
{
    int x;
    if(i>n){
        x=dq.size();
        if(x==k){
            memset(vis,0,sizeof(vis));
            for(int v:dq){
                vis[v]=1;
                //cout<<v;
            }
            //cout<<endl;
            s="";
            int sum=0,y=1;
            for(int i=1;i<=n;i++){
                if(vis[i]){
                    s+='1';
                    sum+=y;
                }
                else{
                    s+='0';
                }
                y*=2;
            }
            reverse(s.begin(),s.end());
            ve.pb({sum,s});
        }
        return ;
    }
    dq.pb(i);
    rr(i+1);
    dq.pp();
    rr(i+1);
}



int main()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int t;
    scanf("%d",&t);
    bool f=0;
    while(t--){
        scanf("%d%d",&n,&k);
        rr(1);
        sort(ve.begin(),ve.end(),com);
        for(auto x:ve){
            printf("%s\n",x.S.c_str());
        }
        ve.clear();
        if(t){
            printf("\n");
        }
    }
    return 0;
}
