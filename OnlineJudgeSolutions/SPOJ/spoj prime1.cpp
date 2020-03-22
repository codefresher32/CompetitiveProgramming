#include<bits/stdc++.h>
using namespace std;

int n=10000000;
int status[10000000];

vector<int>prime;

void sieve()
{
    int limit=sqrt(n);
    prime.push_back(2);
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

void segmented(int a,int b)
{
    int arr[100001]={0};
    int p,sqn,j;
    sqn=sqrt(b);
    if(a==1)
        a++;
    for(int i=0;i<prime.size()&&prime[i]<=sqn;i++)
    {
        p=prime[i];
        j=p*p;
        if(j<a)
            j=((a+p-1)/p)*p;
        for(j=j;j<=b;j+=p)
            arr[j-a]=1;
    }
    for(int i=a;i<=b;i++)
        {
            if(!arr[i-a])
                cout<<i<<"\n";
        }
    cout<<"\n";
    return ;
}

int main()
{
    sieve();
    int a,b,t;
    cin>>t;
    while(t--){
    cin>>a>>b;
    segmented(a,b);
    }
    return 0;
}
