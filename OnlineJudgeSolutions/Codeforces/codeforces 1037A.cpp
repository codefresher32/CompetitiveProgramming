#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,m=0,c=0,a;
    cin>>n;
    for(long long i=1; ;i++)
    {
        m=i*(i+1)/2;
        c++;
        if(m>=n)
            break;
    }
    cout<<c<<endl;
    return 0;
}
