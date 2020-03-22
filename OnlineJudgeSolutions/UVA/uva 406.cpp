#include<bits/stdc++.h>
using namespace std;

int n=1000;
int status[1002];
vector<int>prime;

void seive()
{
    int limit=sqrt(n);
    prime.push_back(1);
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

int arr[1002];

void counting()
{
    int c=0;
    for(int i=1;i<=n;i++)
    {
        if(!status[i])
            c++;
        arr[i]=c;
    }
    return;
}

int main()
{
    seive();
    counting();
    int c,m,x,y;
    a:while(cin>>m>>c)
    {
        printf("%d %d:",m,c);
        x=arr[m];
        if(c*2<=x)
        {
            if(x&1)
                y=2*c-1;
            else
                y=2*c;
            for(int i=(x-y)/2;i<(x+y)/2;i++)
                printf(" %d",prime[i]);
            cout<<"\n\n";
            goto a;
        }
        else
        {
            for(int i=0;i<x;i++)
                printf(" %d",prime[i]);
            cout<<"\n\n";
            goto a;
        }
    }
    return 0;
}
