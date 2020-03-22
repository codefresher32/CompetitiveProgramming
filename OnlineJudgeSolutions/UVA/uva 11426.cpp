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

ll phi[4000005],res[4000005];

int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    for(ll i=1;i<=4000000;i++) phi[i]=i;
    phi[1]=0;
    for(ll i=2;i<=4000000;i++){
        if(phi[i]==i){
            for(ll j=i;j<=4000000;j+=i){
                phi[j]-=(phi[j]/i);
            }
        }

    }
    for(ll i=1;i<=4000000;i++){
        for(ll j=i+i;j<=4000000;j+=i){
            res[j]+=(phi[j/i]*i);
        }
    }
    for(ll i=2;i<=4000000;i++) res[i]+=res[i-1];
    int n,ans;
    while(scanf("%d",&n),n){
        printf("%lld\n",res[n]);
    }
    return 0;
}


