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
#define mod 10
#define ex 1e-7


unordered_map<ll,ll>F;
ll pw[100];

ll f(ll n) {
	if(F.count(n)) return F[n];
	ll k=n/2;
	if(n%2==0){ // n=2*k
		return F[n]=(f(k)*f(k)+f(k-1)*f(k-1))%mod;
	}
	else{ // n=2*k+1
		return F[n]=(f(k)*f(k+1)+f(k-1)*f(k))%mod;
	}
}

ll bit(ll n)
{
    int ans=0;
    if(n==0) return 1;
    while(n){
        ans++,n/=2;
    }
    return ans;
}


int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int t;
    ll n,id;
    pw[0]=1;
    for(int i=1;i<=64;i++){
        pw[i]=pw[i-1]*2;
    }
    scanf("%d",&t);
    while(t--){
        scanf("%lld",&n);
        F[0]=F[1]=1;
        id=bit(n);
        id=pw[id-1];
        id--;
        printf("%lld\n",(id==0?0:f(id-1)));
    }
    return 0;
}

