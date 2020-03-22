#include<bits/stdc++.h>
using namespace std;

typedef long long ll;



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,d,z,gc;
    cin>>t;
    while(t--){
        cin>>d;
        z=180-d;
        gc=__gcd(d,z);
        if(gc==z){
            cout<<360/gc<<endl;
        }
        else{
            cout<<180/gc<<endl;
        }
    }
    return 0;
}
