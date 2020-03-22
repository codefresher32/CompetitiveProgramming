#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,t,a[102]={0},c=0;
    cin>>n>>t;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
    {
        if(a[t-i]==1&&a[t+i]==1)
            c++;
        else if(a[t-i]==1&&t+i>n)
            c++;
        else if(a[t+i]==1&&t-i<1)
            c++;
    }
    cout<<c<<endl;
    return 0;
}
