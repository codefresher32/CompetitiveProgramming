#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,x=0;
    cin>>n;
    n--;
    while(x<=n)
    {
        n-=x;
        x++;
    }
    cout<<n+1<<endl;
    return 0;
}
