#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n;
   string s;
   cin>>n;
   cin>>s;
   for(int i=2;i<=n;i++)
   {
       if(n%i==0)
       {
           for(int j=0,k=i-1;k>=j;j++,k--)
           {
               swap(s[j],s[k]);
           }
       }
   }
   cout<<s<<endl;
    return 0;
}
