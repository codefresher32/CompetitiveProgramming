#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a[105]={0},x,y,mn=1001,j;
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=1;i<=n;i++)
    {
        j=i+1>n?1:i+1;
        if(abs(a[i]-a[j])<mn)
        {
            mn=abs(a[i]-a[j]);
            x=i;
            y=j;
        }
    }
    cout<<x<<" "<<y<<endl;
    return 0;
}
