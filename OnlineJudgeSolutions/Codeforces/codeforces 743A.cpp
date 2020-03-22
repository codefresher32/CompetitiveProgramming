#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n,a,b;
   string s;
   cin>>n>>a>>b;
   cin>>s;
   if(s[a-1]==s[b-1])
   {
       cout<<0<<endl;
       return 0;
   }
   cout<<1<<endl;
   return 0;
}
