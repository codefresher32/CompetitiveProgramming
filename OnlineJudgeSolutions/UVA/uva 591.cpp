#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a[55]={0},sum,ans,x=1;
    while(cin>>n)
    {
        if(n==0)
            return 0;
        sum=ans=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        sum/=n;
        for(int i=0;i<n;i++)
        {
            if(a[i]>sum)
            {
                ans+=(a[i]-sum);
            }
        }
        printf("Set #%d\nThe minimum number of moves is %d.\n\n",x,ans);
        x++;
    }
}
