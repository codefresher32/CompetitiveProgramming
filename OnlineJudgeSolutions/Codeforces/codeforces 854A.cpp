#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,gc;
    cin>>n;
    for(int i=n/2;i>0;i--){
        gc=__gcd(i,n-i);
        if(gc==1){
            cout<<i<<" "<<n-i<<endl;
            return 0;
        }
    }
    return 0;
}


