#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()

{
    int a,b,c1=1,c2=1,sum=0,i;
    cin>>a>>b;
    if(a<(a+b)/2){
    for(i=a;i<(a+b)/2;i++)
    {
        sum+=c1;
        c1++;
    }
    }
    else if(a>(a+b)/2)
    {
        for(i=a;i>(a+b)/2;i--)
        {
            sum+=c1;
            c1++;
        }
    }
        if(b<(a+b)/2){
    for(i=b;i<(a+b)/2;i++)
    {
        sum+=c2;
        c2++;
    }
    }
    else if(b>(a+b)/2)
    {
        for(i=b;i>(a+b)/2;i--)
        {
            sum+=c2;
            c2++;
        }
    }
    cout<<sum<<endl;
    return 0;
}
