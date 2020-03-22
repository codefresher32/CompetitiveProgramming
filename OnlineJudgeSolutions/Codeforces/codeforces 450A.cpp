#include<bits/stdc++.h>
using namespace std;

int main()
{
    float n,m,a[101],ma=0;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    int x=0;
    for(int i=1;i<=n;i++)
    {
        a[i]=ceil(a[i]/m);
        if(ma<=a[i])
        {
            ma=a[i];
            x=i;
        }
    }
    cout<<x<<endl;
    return 0;
}
