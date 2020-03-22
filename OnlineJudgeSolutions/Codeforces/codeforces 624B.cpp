#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,a[27]={0},sum=0,x;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n,greater<int>());
    a:for(int i=0;i<n-1;i++)
    {
        x=1;
        for(int j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                a[j]-=x;
                x++;
            }
            if(a[j]<0)
                a[j]=0;
        }
    }
   /*sort(a,a+n,greater<int>());
    for(int i=0;i<n;i++)
    {
        if(a[i]==a[i+1]&&a[i]!=0)
            goto a;
    }*/

    for(int i=0;i<n;i++)
        sum+=a[i];
    cout<<sum<<endl;
    return 0;
}
