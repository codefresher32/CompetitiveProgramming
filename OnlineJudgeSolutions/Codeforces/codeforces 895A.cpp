#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a[365],sum,m=INT_MAX;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    if(n==1)
    {
        cout<<360<<endl;
        return 0;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            sum=0;
            for(int k=i;k<=j;k++)
                sum+=a[k];
            int d= sum>=180?sum-180:180-sum;
            m=min(m,d);
        }
    }

    cout<<2*m<<endl;
    return 0;
}
