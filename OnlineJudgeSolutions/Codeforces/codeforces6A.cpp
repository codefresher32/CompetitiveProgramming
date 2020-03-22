#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[4],i;
    for(i=0;i<4;i++)
    {
        cin>>a[i];
    }
    sort(a,a+4);
    if((a[0]+a[1]>a[2])||(a[1]+a[2]>a[3]))
    {
        cout<<"TRIANGLE"<<endl;
        return 0;
    }
    else if((a[0]+a[1]==a[2])||(a[1]+a[2]==a[3]))
    {
        cout<<"SEGMENT"<<endl;
        return 0;
    }
    else
    {
        cout<<"IMPOSSIBLE"<<endl;
        return 0;
    }

}
