#include<bits/stdc++.h>
#include <cmath>
using namespace std;

typedef long long ll;

#define pii pair<int,int>
#define pi pair<string,int>
#define F first
#define S second
#define pb push_back
#define pp pop_back
#define mod 1000003
#define ex 1e-7



int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    ll tw[32],th[20];
    vector<ll>vc;
    tw[0]=th[0]=1;
    for(int i=1;i<32;i++){
        tw[i]=tw[i-1]*2ll;
    }
    for(int i=1;i<20;i++){
        th[i]=th[i-1]*3ll;
    }
    for(int i=0;i<32;i++){
        for(int j=0;j<20;j++){
            vc.pb({tw[i]*th[j]});
        }
    }
    sort(vc.begin(),vc.end());
    ll n,m;
    while(scanf("%lld",&n),n){
        int id=upper_bound(vc.begin(),vc.end(),n)-vc.begin();
        if(id-1>=0&&vc[id-1]==n) m=n;
        else m=vc[id];
        printf("%lld\n",m);
    }
    return 0;
}
