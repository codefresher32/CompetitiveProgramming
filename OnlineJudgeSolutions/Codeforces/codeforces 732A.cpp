#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k,r,x,y;
    cin>>k>>r;
    for(int i=1;i<=100;i++)
    {
        y=k*i;
        x=y%10;
        if(x==r||x==0)
        {
            cout<<i<<endl;
            return 0;
        }
    }
}
