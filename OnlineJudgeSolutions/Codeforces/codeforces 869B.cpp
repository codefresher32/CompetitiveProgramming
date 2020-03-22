#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a,b,c=1;
    cin>>a>>b;
    if(b-a<10){
    for(long long i=b;i>a;i--)
        c*=(i%10);
    c%=10;
    cout<<c<<endl;
    }
    else
        cout<<0<<endl;
    return 0;
}
