#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int isprime(long int n)
{
    int i;
    for(i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}

int reve(long int n)
{
    long int rev=0;
    while(n>0)
   {
     rev=rev*10+n%10;
    n=n/10;
   }
   return rev;
}
int main()
{
    long int n,x;
    int c;
    while(cin>>n){
    c=isprime(n);
   if(!c)
   {
       cout<<n<<" is not prime.\n";
   }
   else
   {
       x=reve(n);
       c=isprime(x);
       if(c&&x!=n)
       {
       cout<<n<<" is emirp.\n";
       }
       else
       {
         cout<<n<<" is prime.\n";
       }
   }
    }
   return 0;
}
