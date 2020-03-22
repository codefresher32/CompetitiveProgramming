#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t,n,i,x=1,a;
    cin>>t;
    while(t--)
    {
        cin>>a;
        n=a;
        while(true)
        {
            i=pow(n%10,2)+pow((n/10)%10,2)+pow((n/100)%10,2)+pow((n/1000)%10,2)+pow((n/10000)%10,2)+pow((n/100000)%10,2)+pow((n/1000000)%10,2)+pow((n/10000000)%10,2)+pow((n/100000000)%10,2)+pow((n/1000000000)%10,2);
            n=i;
            if(n<=9)
                break;
        }
         if(n==1 || n==7)
            printf("Case #%lld: %lld is a Happy number.\n",x,a);
        else
            printf("Case #%lld: %lld is an Unhappy number.\n",x,a);
        x++;
    }
    return 0;
}
