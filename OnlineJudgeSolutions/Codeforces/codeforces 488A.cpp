#include<bits/stdc++.h>
using namespace std;

long long rev(long long n,long long y)
{
    long long r,x;
    n++;
    x=n;
    if(x<0)
        x*=-1;
    while(x>0)
    {
        r=x%10;
        x/=10;
        if(r==8)
        {
            cout<<y<<endl;
            return 0;
        }
    }
    y++;
    x=n;
    return rev(x,y);
}

int main()
{
    long long n,x=1;
    cin>>n;
    rev(n,x);
    return 0;
}
