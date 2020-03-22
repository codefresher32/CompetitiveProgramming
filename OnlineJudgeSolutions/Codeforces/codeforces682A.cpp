#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,c,i,j;
    while(cin>>n>>m)
    {
        c=0;
        for(i=1;i<=n;i++)
        {
            for(j=m;j>0;j--)
            {
                if(((i+j)%5)==0)
                {
                    c++;
                }
            }
        }
        cout<<c<<endl;
    }
    return 0;
}
