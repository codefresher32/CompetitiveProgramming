#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,x=1;
    cin>>a>>b;
    a=min(a,b);
    for(int i=1;i<=a;i++)
        x*=i;
    cout<<x<<endl;
    return 0;
}
