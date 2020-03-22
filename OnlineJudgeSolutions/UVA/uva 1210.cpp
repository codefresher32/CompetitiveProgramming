#include<bits/stdc++.h>
using namespace std;

int n=10000;
int status[10002];
vector<int>prime;

void seive()
{
    int limit=sqrt(n);
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
    int n,sum,c;
    while(cin>>n)
    {
        if(n==0)
            return 0;
        c=0;
        for(int i=0;prime[i]<=n;i++)
        {
            sum=0;
            for(int j=i;sum<=n;j++)
            {
                sum+=prime[j];
                if(sum==n)
                    c++;
            }
        }
        cout<<c<<endl;
    }
}
