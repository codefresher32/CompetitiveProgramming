#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,a[50],d;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        d=2*(a[n-1]-a[0]);
        cout<<d<<endl;
    }
    return 0;
}
