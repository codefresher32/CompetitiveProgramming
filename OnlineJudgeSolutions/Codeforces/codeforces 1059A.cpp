#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,L,a,l,r,s=0,ans=0,dr;
    cin>>n>>L>>a;
    while(n){
        cin>>l>>r;
        dr=l-s;
        ans+=dr/a;
        s=l+r;
        n--;
    }
    dr=L-s;
    ans+=dr/a;
    cout<<ans<<endl;
    return 0;
}






