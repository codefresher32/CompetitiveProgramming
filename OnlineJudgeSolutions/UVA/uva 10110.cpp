#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    ll a,b;
    while(true){
        cin>>a;
        if(a==0){
            return 0;
        }
        b=sqrt(a);
        if(b*b==a){
            cout<<"yes\n";
        }
        else{
            cout<<"no\n";
        }
    }
    return 0;
}


