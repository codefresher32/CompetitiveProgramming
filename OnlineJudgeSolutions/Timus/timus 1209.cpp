#include<iostream>
#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
#define pb push_back
#define pp pop_back



int main()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    ll id=1;
    vector<ll>vc;
    for(ll i=0;i<=1e5;i++){
        id+=i;
        vc.pb(id);
    }
    int t;
    scanf("%d",&t);
    while(t--){
        scanf("%lld",&id);
        if(binary_search(vc.begin(),vc.end(),id)){
            printf("1 ");
        }
        else{
            printf("0 ");
        }
    }
    return 0;
}
