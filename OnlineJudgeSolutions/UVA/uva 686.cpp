#include<bits/stdc++.h>
using namespace std;

int status[1000002];
int n=1000000;
vector<int>prime;

void sieve()
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
                for(int j=i*i;j<=n;j+=i*2)
                    status[j]=1;
            }
        }
    }
}

int main()
{
    sieve();
    int n,d,c;
    while(cin>>n)
    {
        c=d=0;
        if(n==0)
            return 0;
        for(int i=0;prime[i]<=n/2;i++)
        {
            d=n-prime[i];
            if(!status[d]){
                c++;
            }
        }
        cout<<c<<endl;
    }
}
