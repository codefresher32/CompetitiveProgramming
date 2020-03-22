#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
#define pii pair<int,int>



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,x,y,ix=0,iy=0,ans=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>x>>y;
        ans+=max(0ll,min(x,y)-max(ix,iy)+1);
        ix=x;
        iy=y;
        if(ix==iy){
            ix++,iy++;
        }
    }
    cout<<ans<<endl;
    return 0;
}


