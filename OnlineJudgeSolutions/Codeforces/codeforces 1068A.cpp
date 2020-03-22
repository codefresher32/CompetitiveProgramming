#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,m,k,l,x,y,a,b;
    cin>>n>>m>>k>>l;
    x=k+l;
    y=(x+m-1)/m;
    if(y*m<=n){
        cout<<y<<endl;
    }
    else{
        cout<<-1<<endl;
    }

    return 0;
}


