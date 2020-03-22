#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll t(ll u, ll v) {
	if(u%v==0) return u/v;
	else return u/v+1;
}

int main() {
    ll n;
	int q;
	scanf("%lld %d",&n,&q);
	for(int i=0;i<q;i++) {
		ll a,b;
		scanf("%lld %lld",&a,&b);
		if(b%2==1) {
			if(a%2==1) {
				printf("%lld\n",(b+1)/2+(a-1)/2*n);
			} else {
				printf("%lld\n",(b+1)/2+(a-1)/2*n+(n*(n+1))/2);
			}
		} else {
			ll x=t(n*n,2)+b/2;
			if(a%2==1) {
				printf("%lld\n",x+(a-1)/2*n);
			} else {
				printf("%lld\n",x+(a-1)/2*n-(n*(n-1)/2));
			}
		}
	}
	return 0;
}
