#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define pii pair<ll,ll>
#define pi pair<int,int>
#define F first
#define S second
#define pb push_back
#define pp pop_back
#define eps 10E-10
#define mod 4294967296
#define on(x) (marked[x/64]&(1<<((x%64)/2)))
#define mark(x) marked[x/64]|=(1<<((x%64)/2))
#define M 5761600

int

int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int t,n,k;
    cin>>t;
    while(t--){
        cin>>n;
        int id;
        for(int i=1;i<=n;i++) cin>>ar[i],bs[i]=INT_MAX;
        for(int i=1;i<=n;i++){
            id=lower_bound(bs+1,bs+n,ar[i])-bs;
            bs[id]=ar[i];
        }
        cin>>k;
        if(k>n||bs[k]==INT_MAX) cout<<-1<<endl;
        else cout<<bs[k]<<endl;
    }
    return 0;
}

