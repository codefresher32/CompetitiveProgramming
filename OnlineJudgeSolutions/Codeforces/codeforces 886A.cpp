#include<bits/stdc++.h>
using namespace std;

int main()
{
   int sum=0,a[6],x;
   for(int i=0;i<6;i++)
   {
       cin>>a[i];
       sum+=a[i];
   }

    for(int i=0;i<6;i++)
    {
        for(int j=i+1;j<6;j++)
        {
            for(int k=j+1;k<6;k++)
            {
                x=a[i]+a[j]+a[k];
                if(2*x==sum)
                {
                    cout<<"YES\n";
                    return 0;
                }
            }
        }
    }
    cout<<"NO\n";
   return 0;
}
