#include<bits/stdc++.h>
using namespace std;

typedef long long ll;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,k,a,b,x=0,y=0,r;
    cin>>n>>k>>a>>b;
    x=(n-1)*a;
    if(k==1){
        cout<<x<<endl;
        return 0;
    }
    while(true){
        if(n%k==0){
            y+=min(b,(n-n/k)*a);
            n/=k;
        }
        else{
            y+=(n%k)*a;
            n-=(n%k);
        }
        if(n==0){
            cout<<y-a<<endl;
            return 0;
        }
        if(n==1){
            cout<<y<<endl;
            return 0;
        }
    }

    return 0;
}

