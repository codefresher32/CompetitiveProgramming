#include<iostream>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;


int main()
{
    long long a,b,c;
    int n,i;
    while(cin>>n){
    a=0;
    b=1;
    c=0;
     for(i=2;i<=n;i++)
     {
         c=a+b;
         a=b;
         b=c;
     }
    cout<<"The Fibonacci number for "<<n<<" is ";
    cout<<b<<endl;
    }
    return 0;
}
