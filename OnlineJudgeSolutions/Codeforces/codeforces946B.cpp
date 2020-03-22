#include<iostream>
using namespace std;

int main()
{
    long long int a,b;
    cin>>a>>b;
   c:if(a==0||b==0)
   {
       cout<<a<<" "<<b<<endl;
       return 0;
   }
   if(a>=b*2)
   {
       a=a%(2*b);
       goto c;
   }
   else if(b>=a*2)
   {
       b=b%(2*a);
       goto c;
   }
   else
   {
       cout<<a<<" "<<b<<endl;
       return 0;
   }
    return 0;
}
