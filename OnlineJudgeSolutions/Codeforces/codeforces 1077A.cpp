#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t,a,b,k,x,y;
    ll ans;
    cin>>t;
    while(t--){
        cin>>a>>b>>k;
        if(k&1){
            x=k/2+1;
            cout<<a*x-b*(k-x)<<endl;
        }
        else{
            x=k/2;
            cout<<a*x-b*x<<endl;
        }
    }
    return 0;
}

