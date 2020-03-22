#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,k,ans=0;
    cin>>n>>k;

    a:if(k%2==0)
    {
        ans++;
        k/=2;
        goto a;
    }
    else
        ans++;
    cout<<ans<<endl;
    return 0;
}
