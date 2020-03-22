#include<bits/stdc++.h>
using namespace std;

int n=10000000;
int status[10000002];
vector<int>prime;

void seive()
{
    int limit=sqrt(n);
    status[0]=1;
    prime.push_back(2);
    for(int i=4;i<=n;i+=2)
        status[i]=1;
    for(int i=3;i<=n;i+=2)
    {
        if(!status[i])
        {
            prime.push_back(i);
            if(i<=limit)
            {
                for(int j=i*i;j<=n;j+=2*i)
                    status[j]=1;
            }
        }
    }
}

int main()
{
    seive();
    int n,d;
    a:while(cin>>n)
    {
        if(n&1)
        {
            n-=5;
            for(int i=0;prime[i]<=n/2;i++)
            {
                d=n-prime[i];
                if(!status[d])
                {
                   printf("2 3 %d %d\n",prime[i],d);
                   goto a;
                }
            }
            printf("Impossible.\n");
            goto a;
        }
        else
        {
            n-=4;
            for(int i=0;prime[i]<=n/2;i++)
            {
                d=n-prime[i];
                if(!status[d])
                {
                   printf("2 2 %d %d\n",prime[i],d);
                   goto a;
                }
            }
            printf("Impossible.\n");
            goto a;
        }
    }
    return 0;
}
