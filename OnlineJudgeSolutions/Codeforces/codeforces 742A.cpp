#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    if(n==0)
    {
        cout<<1<<endl;
        return 0;
    }
    n%=4;
    if(n==0)
        cout<<6<<endl;
    else if(n==1)
        cout<<8<<endl;
    else if(n==2)
        cout<<4<<endl;
    else if(n==3)
        cout<<2<<endl;
    return 0;
}
