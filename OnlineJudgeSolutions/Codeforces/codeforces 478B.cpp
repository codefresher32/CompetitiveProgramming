#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,m,a,b,x=0;
    cin>>n>>m;
    if(m==1){
        cout<<n*(n-1)/2<<" "<<n*(n-1)/2<<endl;
    }
    else
    {
       a=n/m;
        x=n%m;
       cout<<a*(a-1)/2*m+a*x;
       b=n-(m-1);
       cout<<" "<<b*(b-1)/2<<endl;
    }
    return 0;
}

