#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a[105]={0},x,y;
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=1;i<=n;i++)
    {
        if(a[i]==1)
            x=i;
        else if(a[i]==n)
            y=i;
    }
    if((x-1)<=(n-y))
    {
        if(x<y)
            cout<<n-x<<endl;
        else
            cout<<n-y<<endl;
    }
    else
    {
        if(x<y)
            cout<<y-1<<endl;
        else
            cout<<x-1<<endl;
    }
    return 0;
}
