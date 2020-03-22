#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,y,x1=0,y1=1;
    cin>>x>>y;
    if(x>=0&&y==0)
    {
        cout<<"No\n";
        return 0;
    }

    while(y>y1)
    {
        y1++;
        x1++;
    }
    while(x>x1&&x1!=0)
    {
        x1+=2;
    }
    if(x==x1&&y==y1)
    {
        cout<<"Yes\n";
    }
    else
    {
        cout<<"No\n";
    }
    return 0;
}
