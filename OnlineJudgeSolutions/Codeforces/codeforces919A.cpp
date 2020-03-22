#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n,m;
   float a,b,x,y=100000000;
   while(cin>>n>>m)
   {
       while(n--)
       {
           cin>>a>>b;
           x=a/b;
           if(x<y)
           {
               y=x;
           }
       }
       cout<<m*y<<endl;
   }
   return 0;
}
