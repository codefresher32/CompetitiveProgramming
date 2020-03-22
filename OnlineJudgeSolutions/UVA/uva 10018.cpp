#include<bits/stdc++.h>
using namespace std;

unsigned long long int rev(unsigned long long int n,int i)
{
    unsigned long long int r=0,x;
    x=n;
    while(n>0)
    {
       r=r*10+n%10;
       n/=10;
    }
    if(x!=r)
    {
        i++;
        return rev(r+x,i);
    }
    else
    {
        cout<<i<<" "<<r<<endl;
        return 0;
    }
}

int main()
{
    unsigned long long int n;
    int i,t;
    cin>>t;
    while(t--)
    {
        i=0;
        cin>>n;
        rev(n,i);
    }
    return 0;
}
