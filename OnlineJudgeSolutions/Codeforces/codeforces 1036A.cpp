#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,k,m;
    cin>>n>>k;
    m=k/n;
    if(k%n!=0)
        m++;
    cout<<m<<endl;
    return 0;
}
