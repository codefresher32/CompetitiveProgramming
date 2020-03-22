#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,k,f,t,mx=INT_MIN;
    cin>>n>>k;
    while(n--){
        cin>>f>>t;
        if(t>k){
            mx=max(mx,f-(t-k));
        }
        else{
            mx=max(mx,f);
        }
    }
    cout<<mx<<endl;
    return 0;
}



