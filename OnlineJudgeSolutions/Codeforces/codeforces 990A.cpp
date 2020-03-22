#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,m,a,b,x,y,k;
    cin>>n>>m>>a>>b;
    if(n%m==0){
        cout<<0<<endl;
        return 0;
    }

    x=n/m+1;
    x=x*m-n;
    y=n%m;
    k=min(x*a,y*b);
    cout<<k<<endl;
    return 0;
}
