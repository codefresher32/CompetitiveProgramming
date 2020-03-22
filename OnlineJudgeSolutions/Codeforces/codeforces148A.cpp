#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k,l,m,n,d,c=0,i,j,x,y=4;
    cin>>k>>l>>m>>n>>d;

    int a[d];
    for(i=0,j=1;i<d;i++,j++)
    {
        a[i]=j;
    }
    while(y--)
    {
        if(c==0)x=k;
        else if(c==1)x=l;
        else if(c==2)x=m;
        else if(c==3)x=n;
        for(i=0;i<d;i++)
        {
            if(a[i]%x==0)
            {
                a[i]=0;
            }
        }
        c++;
    }
    c=0;
    for(i=0;i<d;i++)
    {
       if(a[i]==0)
       {
           c++;
       }
    }
    cout<<c<<endl;
    return 0;
}
