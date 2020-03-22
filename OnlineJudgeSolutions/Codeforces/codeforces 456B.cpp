#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a,b,c,d;
    cin>>a>>b>>c>>d;
    a=(pow(a,32));
    a%=5;
    b=(pow(b,32));
    b%=5;
    c=(pow(c,32));
    c%=5;
    d=(pow(d,32));
    d%=5;
    cout<<a<<endl<<b<<endl<<c<<endl<<d<<endl;
    return 0;
}
