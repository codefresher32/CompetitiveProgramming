#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n;
    m=n*(n+1)/2;
    for(int i=2;i*i<m;i++)
    {
        if(m%i==0)
        {
            cout<<"Yes\n";
            cout<<1<<" "<<i<<"\n";
            cout<<n-1<<" ";
            for(int j=1;j<=n;j++)
            {
                if(i!=j)
                    cout<<j<<" ";
            }
            return 0;
        }
    }
    cout<<"No\n";
    return 0;
}

