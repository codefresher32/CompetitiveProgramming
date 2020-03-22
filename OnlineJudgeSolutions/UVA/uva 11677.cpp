#include<bits/stdc++.h>
using namespace std;

int main()
{
    int h1,h2,m1,m2,x,y;
    while(cin>>h1>>m1>>h2>>m2)
    {
        if(h1==0&&m1==0&&h2==0&&m2==0)
            return 0;
        x=h1*60+m1;
        y=h2*60+m2;
        if(x<=y)
            cout<<y-x<<endl;
        else
            cout<<y-x+1440<<endl;
    }
}
