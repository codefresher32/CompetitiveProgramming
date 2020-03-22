#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b,c=0;
    cin>>n>>a>>b;
    n=log2(n);
    while(c<=n)
    {
       if(a&1)
        a++;
       if(b&1)
        b++;
       a/=2;
       b/=2;
       c++;
       if(a==b)
        break;
    }
    if(c==n)
        cout<<"Final!\n";
    else
        cout<<c<<endl;
    return 0;
}
