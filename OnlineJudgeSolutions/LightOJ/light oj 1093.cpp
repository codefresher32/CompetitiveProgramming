#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define pii pair<int,int>
#define pi pair<char,char>
#define F first
#define S second
#define pb push_back
#define pp pop_back
#define pfb push_front
#define pfp pop_front
#define eps 10E-10
#define mod 10000019

int ar[100005];
vector<int>vmx,vmn;
int n,m;

void s_w(bool f)
{
    vector<int>vc;
    deque<int>dq;
    for(int i=1;i<m;i++){
        while(!dq.empty()&&ar[dq.front()]<=ar[i]){
            dq.pfp();
        }
        dq.pb(i);
    }
    for(int i=m;i<=n;i++){
        while(!dq.empty()&&ar[dq.front()]<=ar[i]){
            dq.pfp();
        }
        dq.pb(i);
        vc.pb(dq.front());
        while(!dq.empty()&&i-dq.front()+1>=m){
            dq.pfp();
        }
    }
    if(f) vmx=vc;
    else vmn=vc;
}

int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int t,mx,id=0;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&n,&m);
        for(int i=1;i<=n;i++){
           scanf("%d",&ar[i]);
        }
        s_w(1);
        for(int i=1;i<=n;i++){
            ar[i]*=-1;
        }
        s_w(0);
        mx=0;
        for(int i=0;i<vmx.size();i++){
            mx=max(mx,abs(ar[vmx[i]]-ar[vmn[i]]));
        }
        printf("Case %d: %d\n",++id,mx);
    }
    return 0;
}

