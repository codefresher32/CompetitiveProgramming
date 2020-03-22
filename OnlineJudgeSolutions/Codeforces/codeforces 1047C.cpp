#include<bits/stdc++.h>
using namespace std;

int a[300005];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,g=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        g=__gcd(g,a[i]);
    }
    cout<<g<<endl;
    return 0;
}


