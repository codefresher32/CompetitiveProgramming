#include<bits/stdc++.h>
using namespace std;

int main()
{
    double r,x1,x2,y1,y2,d;
    cin>>r>>x1>>y1>>x2>>y2;
    d=sqrt(pow(x1-x2,2)+pow(y1-y2,2));
    d=ceil(d/(2*r));
    cout<<int(d)<<endl;
    return 0;
}
