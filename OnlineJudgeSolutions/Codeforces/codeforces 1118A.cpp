#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
#define pii pair<int,int>



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll q,n,a,b,x,y,s,t;
    cin>>q;
    while(q--){
        cin>>n>>a>>b;
        x=a*n;
        y=n/2;
        s=y*b+((n%2)*a);
        cout<<min(x,s)<<endl;
    }
    return 0;
}


