#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll b,cnt=0;
    cin>>b;
    for(ll i=1;i*i<=b;i++){
        if(b%i==0){
            if(i*i<b){
                cnt+=2;
            }
            else{
                cnt++;
            }
        }
    }
    cout<<cnt<<endl;
    return 0;
}

