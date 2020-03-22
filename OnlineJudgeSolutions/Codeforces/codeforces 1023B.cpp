#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,m,k;
    cin>>n>>m;
    if(n==m)
        {
            if(n%2==0)
                cout<<n/2-1<<endl;
            else
                cout<<n/2<<endl;
        }
    else if(n>m)
        {
            if(m%2==0)
                cout<<m/2-1<<endl;
            else
                cout<<m/2<<endl;
        }
    else if(n<m)
    {
        if(m%2==0)
        {
            k=(m/2-1)-(m-(n+1));
            if(k<=0)
                cout<<0<<endl;
            else
                cout<<k<<endl;
        }
        else
        {
            k=(m/2)-(m-(n+1));
            if(k<=0)
                cout<<0<<endl;
            else
                cout<<k<<endl;
        }
    }
    return 0;
}

