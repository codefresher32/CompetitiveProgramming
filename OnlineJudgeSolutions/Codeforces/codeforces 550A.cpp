#include<bits/stdc++.h>
using namespace std;

int main()
{
   string s;
   cin>>s;
   int a=0,b=0,ac=0,bc=0,k,l;
   for(int i=0;i<s.length();i++)
   {
       if(s[i]=='A'&&s[i+1]=='B'&&a==0)
       {
           a=1;
           ac=1;
           k=i+2;
       }
       else if(s[i]=='B'&&s[i+1]=='A'&&b==0)
       {
           b=1;
           bc=1;
           l=i+2;
       }
   }
   if(ac==1)
   {
       for(int j=k;j<s.length();j++)
           {
               if(s[j]=='B'&&s[j+1]=='A'){
                cout<<"YES\n";
                return 0;
               }
           }
   }
   if(bc==1)
   {
       for(int j=l;j<s.length();j++)
           {
               if(s[j]=='A'&&s[j+1]=='B'){
                cout<<"YES\n";
                return 0;
               }
           }
   }
   cout<<"NO\n";
   return 0;
}
