#include<bits/stdc++.h>
using namespace std;

int n=10000;
int status[10002];
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
    int t,n,d;
    cin>>t;
    while(t--)
    {
        cin>>n;
        d=n/2;
        a:if(!status[d]&&d<=n&&2*d>n)
        {
            cout<<d<<endl;
            continue;
        }
        d++;
        goto a;
    }
}
