#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,a[1005],b[1005];
    cin>>n>>m;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
        cin>>b[i];
    double s=(double)m;
    for(int i=0;i<n;i++)
    {
        if(a[i]<=1||b[i]<=1)
        {
            cout<<-1<<endl;
            return 0;
        }
        s+=(double)s/(a[i]-1);
        s+=(double)s/(b[i]-1);
    }
    s-=m;
    cout<<fixed<<setprecision(10)<<s<<endl;
    return 0;
}
