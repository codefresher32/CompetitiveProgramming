#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k,n,s,p;
    cin>>k>>n>>s>>p;
    int x,y,a;
    x=n/s;
    if(n%s!=0)
        x++;
    y=k*x;
    a=y/p;
    if(y%p!=0)
        a++;
    cout<<a<<endl;
    return 0;
}
