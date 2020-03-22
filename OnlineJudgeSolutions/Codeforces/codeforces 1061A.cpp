#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,s,ans;
    cin>>n>>s;
    ans=s/n;
    if(s%n!=0){
        ans++;
    }
    cout<<ans<<endl;
    return 0;
}
