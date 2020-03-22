#include<bits/stdc++.h>
using namespace std;

void ternary(long int n)
{
   vector<int>v;
   v.clear();
   long int r;
   if(n==0)
   {
       cout<<"0\n";
       return ;
   }
   while(n!=0)
   {
       r=n%3;
       v.push_back(r);
       n/=3;
   }
   reverse(v.begin(),v.end());
   for(int i=0;i<v.size();i++)
   {
       cout<<v[i];
   }
   cout<<"\n";
   return ;

}

int main()
{
    long int n;
    while(cin>>n)
    {
        if(n<0)
        {
            return 0;
        }
        ternary(n);
    }
    return 0;
}
