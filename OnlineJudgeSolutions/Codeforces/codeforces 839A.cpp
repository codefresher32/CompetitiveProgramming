#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,a[105]={0};
    cin>>n>>k;
    int sum=0,s=0;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    for(int i=1;i<=n;i++)
    {
        if(a[i]>=8)
        {
            s+=8;
            a[i+1]+=a[i]-8;
            sum-=8;
            if(s>=k&&sum>=0)
            {
                cout<<i<<endl;
                return 0;
            }
        }
        else
        {
            s+=a[i];
            sum-=a[i];
            if(s>=k&&sum>=0)
            {
                cout<<i<<endl;
                return 0;
            }
        }
    }
    cout<<-1<<endl;
    return 0;
}
