#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,a[105]={0},x;
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        cin>>x;
        a[x]++;
    }
    sort(a+1,a+101);
    int ans=0,s;
    for(int i=m;i>0;i--)
    {
        s=0;
        for(int j=1;j<=100;j++)
            s+=(a[j]/i);
        if(s>=n)
        {
            ans=i;
            break;
        }
    }
    cout<<ans<<endl;
    return 0;
}

