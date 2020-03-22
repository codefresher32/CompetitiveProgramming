#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int l,r,a;
    cin>>l>>r>>a;

    a:if(r<l&&a>0)
    {
        r++;
        a--;
        goto a;
    }
    b:if(l<r&&a>0)
    {
        l++;
        a--;
        goto b;
    }
    if(l==r&&a!=0)
    {
        l+=a/2;
        r+=a/2;
    }
    if(l<r)
    {
        r=l;;
    }
    cout<<r+r<<endl;
    return 0;
}
