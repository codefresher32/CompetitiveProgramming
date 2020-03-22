#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,a,b,c,k;
    cin>>n;
    a=1234567;
    b=123456;
    c=1234;
    if(n<1234)
    {
        cout<<"NO\n";
        return 0;
    }
    for(int i=0;i<=n;i++)
    {
        for(int j=0;(a*i+b*j)<=n;j++)
        {
            k=(n-(a*i+b*j));
            if(k%c==0)
            {
                cout<<"YES\n";
                return 0;
            }
        }
    }
    cout<<"NO\n";
    return 0;
}
