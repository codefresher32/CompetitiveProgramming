#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,x;
    cin>>n;
    x=n+1;
    if(x==1)
    {
        cout<<0<<endl;
        return 0;
    }
    if(x%2==0)
    {
        cout<<x/2<<endl;
        return 0;
    }
    else
    {
        cout<<x<<endl;
        return 0;
    }
}
