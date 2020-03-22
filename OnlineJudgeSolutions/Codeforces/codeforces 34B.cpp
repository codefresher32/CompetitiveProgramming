#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,sum=0,a[105]={0};
    cin>>n>>m;
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    for(int i=0;i<m;i++)
        {
            if(a[i]<=0)
                sum+=abs(a[i]);
        }
    cout<<sum<<endl;
    return 0;
}
