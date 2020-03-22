#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k,n=19,d,c=0,sum;
    cin>>k;
    while(c<=k)
    {
        d=n;
        sum=0;
        while(d>0)
        {
            sum+=d%10;
            d=d/10;
            if(sum==10&&d==0)
            {
                c++;
            }
        }
        if(c==k)
        {
            cout<<n<<endl;
            return 0;
        }
        n++;
    }
    return 0;
}
