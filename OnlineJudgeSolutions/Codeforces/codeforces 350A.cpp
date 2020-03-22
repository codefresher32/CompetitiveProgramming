#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,a[101],b[101],nm,na,mn;
    cin>>n>>m;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int j=0;j<m;j++)
        cin>>b[j];

    sort(a,a+n);
    sort(b,b+m);
    nm=a[0];
    na=a[n-1];
    mn=b[0];

    if(nm*2<mn&&na<mn)
    {
        if(2*nm<na)
        {
            cout<<na<<endl;
            return 0;
        }
        else
        {
            cout<<2*nm<<endl;
            return 0;
        }
    }
    cout<<-1<<endl;
    return 0;
}
