#include<bits/stdc++.h>
using namespace std;

typedef long long ll;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,a,b;
    cin>>n;
    n%=4;
    if(n==1||n==2){
        cout<<1<<endl;
    }
    else if(n==3||n==0){
        cout<<0<<endl;
    }

    return 0;
}

