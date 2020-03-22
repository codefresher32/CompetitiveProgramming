#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t,n,m,d1,d2;
    cin>>t;
    while(t--){
        ll L,V,l,r;
        cin>>L>>V>>l>>r;
        if(V>L){
            cout<<0<<endl;
            continue;
        }
        n=L/V;
        d1=(l-1)/V;
        d2=r/V;
        cout<<n-(d2-d1)<<endl;
    }

    return 0;
}
