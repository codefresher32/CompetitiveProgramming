#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a;
    while(cin>>n)
    {
        if(n==0)
            return 0;
        int sum=0,mx=INT_MIN;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            sum+=a;
            if(sum<0)
                sum=0;
            mx=max(mx,sum);
        }
        if(mx==0)
            printf("Losing streak.\n");
        else
            printf("The maximum winning streak is %d.\n",mx);
    }
}
