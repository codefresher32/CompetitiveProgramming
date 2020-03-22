#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,b,a[101]={0};
    cin>>n>>b;
    for(int i=0;i<n;i++)
        cin>>a[i];
    int c=0,cost=0,ce=0,co=0;
    for(int i=0;i<n-2;i++)
    {
        if(a[i]%2==0)
            ce++;
        else if(a[i]&1)
            co++;
        if(ce==co)
        {
            cost+=abs(a[i]-a[i+1]);
            if(cost<=b)
                c++;
        }
    }
    cout<<c<<endl;
    return 0;
}
