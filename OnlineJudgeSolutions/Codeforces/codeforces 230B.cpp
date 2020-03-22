#include<bits/stdc++.h>
using namespace std;

int n=1000000;
int status[1000002];
vector<int>prime;

void seive()
{
    int limit=sqrt(n);
    prime.push_back(2);
    status[0]=status[1]=1;
    for(int i=4;i<=n;i+=2)
        status[i]=1;
    for(int i=3;i<=n;i++)
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
    int a;
    double k,x,y;
    cin>>k;
    while(k--)
    {
        cin>>x;
        y=sqrt(x);
        if(ceil(y)-y==0)
        {
            a=y;
            if(!status[a])
                cout<<"YES\n";
            else
                cout<<"NO\n";
        }
        else
            cout<<"NO\n";
    }
    return 0;
}
