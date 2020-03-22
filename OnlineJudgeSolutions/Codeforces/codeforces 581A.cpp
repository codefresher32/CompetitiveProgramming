#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,x,y;
    cin>>a>>b;
    x=min(a,b);
    y=abs(a-b)/2;
    cout<<x<<" "<<y<<endl;
    return 0;
}
