#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    ll s,a,b,c;
    while(t--){
    cin>>s>>a>>b>>c;
    ll ans,mx;
    ans=s/c;
    mx=ans/a;
    ans+=mx*b;
    cout<<ans<<endl;
    }
    return 0;
}

