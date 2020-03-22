#include<bits/stdc++.h>
using namespace std;

int n=1000000;
int status[1000002];
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
                for(int j=i*i;j<=n;j+=i*2)
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
        if(n==0)
            return 0;
        for(int i=0;prime[i]<=n/2;i++)
        {
            d=n-prime[i];
            if(!status[d]){
                printf("%d:\n%d+%d\n",n,prime[i],d);
                goto a;
            }
        }
        printf("%d:\nNO WAY!\n",n);
    }
}
