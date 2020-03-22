#include<bits/stdc++.h>
using namespace std;

int main()
{
    double x1,x2,y1,y2,v,mn=10000000.00,s;
    cin>>x1>>y1;
    int n;
    cin>>n;
    while(n--)
    {
        cin>>x2>>y2>>v;
        s=sqrt(pow(x1-x2,2)+pow(y1-y2,2));
        s/=v;
        if(s<mn)
            mn=s;
    }
    cout<<fixed<<setprecision(20)<<mn<<endl;
    return 0;
}
