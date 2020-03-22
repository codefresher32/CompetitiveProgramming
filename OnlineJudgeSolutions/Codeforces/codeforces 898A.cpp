#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x,r;
    cin>>n;
    x=n;
    r=x%10;
    if(r<=5)
    {
        cout<<n-r<<endl;
    }
    else
    {
        cout<<n+(10-r)<<endl;
    }
    return 0;
}
