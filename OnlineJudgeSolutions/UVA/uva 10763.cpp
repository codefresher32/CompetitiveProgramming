#include<bits/stdc++.h>
using namespace std;

int a[500005],b[500005];

int main()
{
    int n;
    while(cin>>n)
    {
        if(n==0)
            return 0;
        for(int i=0;i<n;i++)
            cin>>a[i]>>b[i];
        sort(a,a+n);
        sort(b,b+n);
        int tr=1;
        for(int i=0;i<n;i++)
        {
            if(a[i]!=b[i])
            {
                tr=0;
                break;
            }
        }
        if(tr)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
}
