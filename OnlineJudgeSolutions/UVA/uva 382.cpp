#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,sum;
    cout<<"PERFECTION OUTPUT\n";
    while(cin>>n)
    {
        sum=0;
        if(n==0)
        {
            cout<<"END OF OUTPUT\n";
            return 0;
        }
        for(int i=1;i<=n/2;i++)
        {
            if(n%i==0)
            {
                sum+=i;
            }
        }

        if(n==sum)
        {
            printf("%5d  PERFECT\n",n);
        }
        else if(sum>n)
        {
            printf("%5d  ABUNDANT\n",n);
        }
        else
        {
           printf("%5d  DEFICIENT\n",n);
        }
    }
}
