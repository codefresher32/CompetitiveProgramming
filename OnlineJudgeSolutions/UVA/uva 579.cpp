#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    double h,m;
    char c;
    while(getline(cin,s))
    {
        stringstream sin(s);
        sin>>h>>c>>m;
        if(h==0&&m==0)
            return 0;
        double x,y;
        x=30*(h+m/60);
        y=m*6.0;
        x=abs(x-y)>180?360-abs(x-y):abs(x-y);
        cout<<fixed<<setprecision(3)<<x<<endl;
    }
}
