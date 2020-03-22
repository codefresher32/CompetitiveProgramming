#include<bits/stdc++.h>
using namespace std;

typedef long long ll;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,l,r,z;
    string s;
    cin>>n>>s;
    l=0,r=0;
    while(s[0]==s[l]){
        l++;
    }
    while(s[n-1]==s[n-r-1]){
        r++;
    }
    if(s[0]==s[n-1]){
        z=(l+1)*(r+1);
        z%=998244353;
        cout<<z<<endl;
    }
    else{
        cout<<(l+r+1)%998244353<<endl;
    }
    return 0;
}

