#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,y,z,t,a;
    cin>>t;
    while(t--)
    {
        cin>>x>>y>>z;
        a=z*(x+(x-y))/(x+y);
        if(a<0)
            a=0;
        cout<<a<<endl;
    }
    return 0;
}
