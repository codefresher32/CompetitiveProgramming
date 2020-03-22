#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d,x1,x2,x,y1,y2,y;
    cin>>a>>b>>c>>d;
    x1=(3*a)/10;
    x2=a-a*c/250;
    x=max(x1,x2);
    y1=(3*b)/10;
    y2=b-b*d/250;
    y=max(y1,y2);
    if(x==y)
    {
        cout<<"Tie\n";
    }
    else if(x>y)
    {
        cout<<"Misha\n";
    }
    else
    {
        cout<<"Vasya\n";
    }
    return 0;
}
