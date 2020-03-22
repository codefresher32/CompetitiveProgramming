#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,m,k,r,c;
    cin>>n>>m>>k;
    if(k<n)
    {
        cout<<k+1<<" 1\n";
        return 0;
    }
    k-=n;
    r=k/(m-1);
    if(r&1)
        cout<<n-r<<" "<<m-k%(m-1)<<endl;
    else
        cout<<n-r<<" "<<k%(m-1)+2<<endl;
    return 0;
}
