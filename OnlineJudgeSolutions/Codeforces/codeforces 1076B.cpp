#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll m;
    cin>>m;
    if(m%2==0){
        cout<<m/2<<endl;
    }
    else{
        for(ll i=3;i*i<=m;i+=2){
            if(m%i==0){

               cout<<(m-i)/2+1<<endl;
               return 0;
            }
        }
        cout<<1<<endl;
    }
    return 0;
}
