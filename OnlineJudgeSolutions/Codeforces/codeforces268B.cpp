#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,sum;
    cin>>n;
    sum=n;
    for(i=1;i<n;i++)
    {
        sum+=i*(n-i);
    }
    cout<<sum<<endl;
    return 0;
}
