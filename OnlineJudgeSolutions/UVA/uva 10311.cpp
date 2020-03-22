#include<bits/stdc++.h>
using namespace std;
int n=100000001;
bool bs[100000001];

void seive()
{
    memset(bs,false,sizeof(bs));
    int limit=sqrt(n);
    for(int i=3;i<=n;i+=2)
    {
        if(!bs[i]&&i<=limit)
        {
            for(int j=i*i;j<=n;j+=2*i)
                bs[j]=true;
        }
    }
}

bool isP(int x)
{
    if(x%2==0&&x!=2)
        return false;
    if(bs[x]||x<2)
        return false;
    return true;
}

int main()
{
    seive();
    int x,d,y;
    while(cin>>x)
    {
        int tr=0;
        if(x%2==1)
        {
            if(isP(x-2))
                printf("%d is the sum of %d and %d.\n",x,2,x-2);
            else
                printf("%d is not the sum of two primes!\n",x);
        }
        else
        {
            for(int i=x/2;i<x;i++)
            {
                if(isP(i)&&isP(x-i)&&i!=x-i)
                {
                    printf("%d is the sum of %d and %d.\n",x,x-i,i);
                    tr=1;
                    break;
                }
            }
            if(!tr)
                printf("%d is not the sum of two primes!\n",x);
        }
    }
}

