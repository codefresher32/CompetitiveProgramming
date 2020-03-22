#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

bool isp(long long x)
{
    long long li=sqrt(x);
    if(x%2==0){
        return false;
    }
    for(long long i=3;i<=li;i+=2){
        if(x%i==0){
            return false;
        }
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long a,b,x,y;
    int t;
    cin>>t;
    while(t--){
    cin>>a>>b;
    x=a+b;
    y=a-b;
    if(x>1&&y>1){
        cout<<"NO\n";
        continue;
    }
    x*=y;
    if(isp(x)){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
    }
    return 0;
}


