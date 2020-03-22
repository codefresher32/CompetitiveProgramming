#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,d,a[105]={0};
    cin>>n>>d;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    sort(a+1,a+n+1);
    int mn=10000,x;
    for(int i=1;i<n;i++)
    {
        for(int j=n;j>i;j--)
        {
            if(a[j]-a[i]<=d)
            {
                x=j-i+1;
                mn=min(mn,n-x);
            }
        }
    }
    if(mn==10000&&n>1)
        mn=n-1;
    else if(mn==10000)
        mn=0;
    cout<<mn<<endl;
    return 0;
}
