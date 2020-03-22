#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,ans=0;
    cin>>n;
    ans+=n/100;
    if(n/100!=0){
    n%=100;
    }
    ans+=n/20;
    if(n/20!=0){
    n%=20;
    }
    ans+=n/10;
    if(n/10!=0){
    n%=10;
    }
    ans+=n/5;
    if(n/5!=0){
    n%=5;
    }
    ans+=n/1;
    n%=1;
    cout<<ans<<endl;
return 0;
}
