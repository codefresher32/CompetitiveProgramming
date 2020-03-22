#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b)
{
    while(b)
    {
        a=a%b;
        swap(a,b);
    }
    return a;
}

int main()
{
    int n,m,z,x;
    cin>>n>>m>>z;
    x=gcd(n,m);
    x=(n*m)/x;
    cout<<z/x<<endl;
    return 0;
}
