#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x,i,c;
    cin>>n;

    while(n--)
    {
        c=2;
        cin>>x;
        for(i=2;i*i<=x;i++)
        {
            if(x%i==0)
            {
                c++;
                if(c>3)
                {
                    break;
                }
            }
        }
        if(c==3)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
