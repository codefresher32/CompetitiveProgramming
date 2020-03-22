#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define pii pair<ll,ll>
#define pi pair<char,char>
#define F first
#define S second
#define pb push_back
#define pp pop_back
#define eps 10E-10
#define mod 4294967296
#define on(x) (marked[x/64]&(1<<((x%64)/2)))
#define mark(x) marked[x/64]|=(1<<((x%64)/2))
#define M 5761600

int ar[10005],lis[10005],lds[10005];

void call(int n,bool f)
{
    vector<int>vc;
    int id,br[10005];
    for(int i=1;i<=n;i++) br[i]=INT_MAX;
    for(int i=1;i<=n;i++){
        id=lower_bound(br+1,br+1+n,ar[i])-br;
        br[id]=ar[i];
        if(f) lis[i]=id;
        else lds[n-i+1]=id;
    }
    return ;
}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t,n;
    while(scanf("%d",&n)!=EOF){

        for(int i=1;i<=n;i++) scanf("%d",&ar[i]);
        call(n,1);
        for(int i=1;i<=n/2;i++) swap(ar[i],ar[n-i+1]);
        call(n,0);
        int res=0;
        for(int i=1;i<=n;i++) res=max(res,min(lis[i],lds[i]));
        printf("%d\n",2*res-1);
    }
    return 0;
}

