#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

bool isp(ll n)
{
    for(int i=3;i*i<=n;i+=2){
        if(n%i==0){
            return false;
        }
    }
    return true;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    if(n%2==0){
        if(n==2){
            cout<<1<<endl;
        }
        else{
            cout<<2<<endl;
        }
    }
    else if(isp(n)){
        cout<<1<<endl;
    }
    else if(isp(n-2)){
        cout<<2<<endl;
    }
    else{
        cout<<3<<endl;
    }
    return 0;
}

