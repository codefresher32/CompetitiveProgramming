#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define pii pair<ll,ll>
#define pi pair<char,char>
#define F first
#define S second
#define pb push_back
#define pp pop_back
#define mod 1000000007

int phi[3000005];
unsigned long long res[3000005],ans[3000005];


int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    for(ll i=1;i<=3000000;i++) phi[i]=i;
    for(ll i=2;i<=3000000;i++){
        if(phi[i]==i){
            for(ll j=i;j<=3000000;j+=i){
                phi[j]-=(phi[j]/i);
            }
        }

    }
    for(ll i=2;i<=3000000;i++){
        for(ll j=i;j<=3000000;j+=i){
            res[j]+=(j*phi[i]/2*i);
        }
        ans[i]=res[i]+ans[i-1];
    }
    int n,t,id=0;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        printf("Case %d: %llu\n",++id,ans[n]);
    }
    return 0;
}
