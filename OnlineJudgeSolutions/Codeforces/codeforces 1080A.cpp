#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,k,t,ans;
    cin>>n>>k;
    ll r,g,b;
    r=n*2;
    g=n*5;
    b=n*8;
    ans=0;
    ans=r/k+g/k+b/k;
    if(r%k){
        ans++;
    }
    if(g%k){
        ans++;
    }
    if(b%k){
        ans++;
    }
    cout<<ans<<endl;

    return 0;
}

