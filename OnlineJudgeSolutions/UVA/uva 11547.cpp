#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,d,r,c=0;
    cin>>t;

    while(t--)
    {
        cin>>n;
        n=((n*567)/9)+7492;
        n=((n*235)/47)-498;

        while(1)
        {
            n=n/10;
            c++;
            if(c==1)
            {
                if(n<0)
                {
                    n*=-1;
                }
                cout<<n%10<<endl;
                c=0;
                break;
            }
        }
    }
    return 0;
}
