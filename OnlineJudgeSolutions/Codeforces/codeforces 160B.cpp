#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,c1=0,c2=0,s1,j=0;
    char x[101],y[101];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>y[i];
    }
    sort(x,x+n);
    sort(y,y+n);
    for(int i=0;i<n;i++)
    {
        if(x[i]>y[i])
        {
            c1++;
        }
        else if(x[i]<y[i])
        {
            c2++;
        }
    }
    if(c1==n||c2==n)
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
    }

    return 0;
}
