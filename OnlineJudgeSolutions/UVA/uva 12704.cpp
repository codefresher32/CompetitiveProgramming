#include<bits/stdc++.h>
using namespace std;

int main()
{
    double x,y,r,nr;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>x>>y>>r;
        nr=sqrt(pow(x,2)+pow(y,2));
        x=r-nr;
        y=r+nr;
        cout<<fixed<<setprecision(2)<<x<<" "<<y<<endl;
    }
    return 0;
}
