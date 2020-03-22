#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,s,m,x,y;
    cin>>n>>s;
    int a[200005]={0};
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    m=n/2;
    long long c=0;
    if(a[m]<s)
    {
       for(int i=m;i<n;i++)
        {
            if(a[i]<s)
                c+=s-a[i];
        }
    }
    else if(a[m]>s)
    {
        for(int i=m;i>=0;i--)
        {
            if(a[i]>s)
                c+=a[i]-s;
        }
    }
    cout<<c<<endl;
    return 0;
}

