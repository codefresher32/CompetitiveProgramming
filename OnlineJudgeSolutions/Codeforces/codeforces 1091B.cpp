#include<bits/stdc++.h>
using namespace std;

typedef long long ll;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,x,y,a,b,sx=0,sy=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>x>>y>>a>>b;
        sx+=x+a;
        sy+=y+b;
    }
    cout<<sx/n<<" "<<sy/n<<endl;
    return 0;
}

