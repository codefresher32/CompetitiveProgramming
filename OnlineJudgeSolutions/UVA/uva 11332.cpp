#include<bits/stdc++.h>
using namespace std;

int main()
{
    long int n,sum;
    while(cin>>n)
    {
        if(n==0)
        {
            return 0;
        }
        sum=0;
        c:while(n>0)
        {
            sum+=n%10;
            n/=10;
        }
        if(sum>9)
        {
            n=sum;
            sum=0;
            goto c;
        }
        cout<<sum<<endl;
    }
    return 0;
}
