#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

const int mx=1e7+2;
const int mod=1e9+7;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int d,abc,zd,zabc;
    d=1;
    abc=0;
    for(int i=1;i<=n;i++){
        zd=abc*3ll%mod;
        zabc=(abc*2ll+d)%mod;
        d=zd;
        abc=zabc;
    }
    cout<<zd<<endl;
    return 0;
}

