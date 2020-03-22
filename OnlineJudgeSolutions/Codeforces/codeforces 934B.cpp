#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k;
    cin>>k;
    if(k>36)
    {
        cout<<-1<<endl;
        return 0;
    }
    while(k)
    {
        if(k&1)
        {
            cout<<6;
            k-=1;
        }
        else if(k%2==0)
        {
            cout<<8;
            k-=2;
        }
        else if(k==0)
        {
            cout<<endl;
            return 0;
        }
    }
}
