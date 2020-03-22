#include<bits/stdc++.h>
using namespace std;

long long a[55];

int main()
{
    int n;
    a[1]=1;
    a[2]=2;
    for(int i=3;i<=50;i++)
    {
        a[i]=a[i-1]+a[i-2];
    }
    while(cin>>n)
    {
        if(n==0)
            return 0;
        cout<<a[n]<<endl;
    }
}
