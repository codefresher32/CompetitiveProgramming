#include<bits/stdc++.h>
using namespace std;

typedef long long ll;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll m,ans=1,x;
    cin>>m;
    x=m;
    for(ll i=2;i*i<=x;i++){
        if(m%i==0){
            ans*=i;
            while(m%i==0){
                m=m/i;
            }
        }
    }
    if(m>1){
        ans*=m;
    }
    cout<<ans<<endl;
    return 0;
}
