#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t,x,a;
    cin>>t;
    while(t--){
       cin>>x;
       a=__builtin_popcount(x);
       a=1<<a;
       cout<<a<<endl;
    }
    return 0;
}

