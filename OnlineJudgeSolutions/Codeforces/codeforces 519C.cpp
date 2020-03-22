#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,m,x;
    cin>>n>>m;
    x=(n+m)/3;
    if(2*n<=m)
        cout<<n<<endl;
    else if(n>=2*m)
        cout<<m<<endl;
    else
        cout<<x<<endl;
    return 0;
}
