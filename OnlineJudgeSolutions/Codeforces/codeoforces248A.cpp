#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,r,l,cr=0,cl=0;
    cin>>t;
    n=t;
    while(n--)
    {
        cin>>l>>r;
        if(l==0)
        {
            cl++;
        }
        if(r==0)
        {
            cr++;
        }
    }
    if(cl>t/2)
    {
        cl=t-cl;
    }
    if(cr>t/2)
    {
        cr=t-cr;
    }
    cout<<cl+cr<<endl;
    return 0;
}
