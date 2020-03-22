#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,a,m,n,c=0;
    cin>>t;
    int v[1001]={0};
    for(int i=0;i<t;i++)
        cin>>v[i];
    m=n=v[0];
    for(int i=1;i<t;i++)
    {
        if(v[i]>m)
        {
            c++;
            m=v[i];
        }
        else if(v[i]<n)
        {
            c++;
            n=v[i];
        }
    }
    cout<<c<<endl;
    return 0;
}
