#include<bits/stdc++.h>
using namespace std;

int n=1000000;
int status[1000002];
vector<int>prime;

void seive()
{
    int limit=sqrt(n);
    status[1]=1;
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

int rev(int n)
{
    int r=0;
    while(n!=0)
    {
        r+=n%10;
        n/=10;
    }
    if(!status[r])
        return 1;
    return 0;
}

int cou[1000002];

void digit()
{
    int c=0;
    for(int i=0;i<=n;i++)
    {
        if(!status[i]&&rev(i))
            c++;
        cou[i]=c;
    }
    return ;
}

int main()
{
    seive();
    digit();
    int t,a,b;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&a,&b);
        printf("%d\n",cou[b]-cou[a-1]);
    }
    return 0;
}
