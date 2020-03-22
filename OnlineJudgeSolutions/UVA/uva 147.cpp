#include<bits/stdc++.h>
using namespace std;

int main()
{
    float d;
    long long n,coin[]={5,10,20,50,100,200,500,1000,2000,5000,10000};
    while(cin>>d)
    {
        if(d==0.00)
            return 0;
        long long dp[30005]={0};
        n=(d*100);
        if(n%5!=0)
            n++;
        dp[0]=1;
        for(int j=0;j<11;j++)
        {
            for(int i=1;i<=n;i++)
            {
                if(i>=coin[j]&&dp[i-coin[j]])
                    dp[i]+=dp[i-coin[j]];
            }
        }
        printf("%6.2f%17lld\n",d,dp[n]);
    }
}
