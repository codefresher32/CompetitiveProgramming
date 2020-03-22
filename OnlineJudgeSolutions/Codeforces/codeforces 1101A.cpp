#include<bits/stdc++.h>
using namespace std;

typedef long long ll;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,l,r,d;
    cin>>n;
    while(n--){
        cin>>l>>r>>d;
        if(l>d){
            cout<<d<<endl;
        }
        else{
            cout<<(r/d+1)*d<<endl;
        }
    }
    return 0;
}



