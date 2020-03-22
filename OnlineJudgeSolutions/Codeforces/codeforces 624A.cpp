#include<bits/stdc++.h>
using namespace std;

int main()
{
    double d,l,v1,v2,x;
    cin>>d>>l>>v1>>v2;
    x=(l-d)/(v1+v2);
    cout<<fixed<<setprecision(20)<<x<<endl;
    return 0;
}
