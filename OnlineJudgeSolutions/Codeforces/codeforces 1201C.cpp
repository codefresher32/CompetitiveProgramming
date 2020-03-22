#include<bits/stdc++.h>
#include <cmath>
using namespace std;

typedef long long ll;

#define pii pair<int,int>
#define pi pair<char,char>
#define F first
#define S second
#define pb push_back
#define pp pop_back
#define mod 1000003
#define ex 1e-7


int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,x;
    ll k,a,ar[200005]={0};
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        cin>>ar[i];
    }
    sort(ar+1,ar+1+n);
    x=(n-1)/2+1;
    int cnt=1;
    for(int i=x+1;i<=n&&k;i++){
        a=ar[i]-ar[x];
        if(a*cnt<=k){
            k-=(a*cnt);
            ar[x]+=a;
        }
        else{
            ar[x]+=(k/cnt);
            k=0;
        }
        cnt++;
    }
    if(k){
        ar[x]+=(k/cnt);
    }
    printf("%lld\n",ar[x]);

    return 0;
}

