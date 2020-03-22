#include<bits/stdc++.h>
using namespace std;

typedef long long ll;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,k,x,y;
    cin>>n>>k;
    ll mn=1e18+5;
    for(ll i=1;i<k;i++){
        x=n/i;
        if(x*i==n){
            x=x*k+i;
           mn=min(mn,x);
        }

    }
    cout<<mn<<endl;
    return 0;
}

