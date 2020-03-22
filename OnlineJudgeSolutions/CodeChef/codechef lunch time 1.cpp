#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a[3],x[2];
    int t;
    cin>>t;
    while(t--)
    {
        cin>>a[0]>>a[1]>>a[2]>>x[0]>>x[1];
        sort(a,a+3);
        sort(x,x+2);
        if(a[2]+a[1]>=x[1]&&(a[0]+a[1]+a[2])==(x[1]+x[0]))
           cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
