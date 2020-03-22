#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,sum,r,a;
    cin>>n;
    while(n--)
    {
        cin>>a;
        sum=0;
        while(a>0)
        {
            sum+=a%10;
            a/=10;
        }
        cout<<sum<<endl;
    }
    return 0;
}
