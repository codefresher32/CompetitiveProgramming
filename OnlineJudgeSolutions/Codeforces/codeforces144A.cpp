#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n,i,c=0,mx,mn,cm=0,cn=0;
   cin>>n;
   int a[n];
   for(i=0;i<n;i++)
   {
       cin>>a[i];
   }
   mx=a[0];
   mn=a[0];
   for(i=0;i<n;i++)
   {
       if(a[i]>mx)
       {
           mx=a[i];
            cm=i;
       }
        if(a[i]<=mn)
       {
           mn=a[i];
            cn=i;
       }
   }
   c=cm+(n-1-cn);
   if(cm>cn)
   {
       c--;
   }
    cout<<c<<endl;
    return 0;
}
