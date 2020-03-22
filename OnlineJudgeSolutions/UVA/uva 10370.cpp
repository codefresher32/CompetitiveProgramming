#include<bits/stdc++.h>
using namespace std;

int main()

{
    int t,n,a[1001],c,sum;
    double x;
    cin>>t;
    while(t--)
    {
        sum=c=0;
        cin>>n;
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
                c++;
            }
        }
        x=(1.0*c*100)/n;
        printf("%0.3f%%\n",x);
    }
    return 0;

}
