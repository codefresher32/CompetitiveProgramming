#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x[100]={0},c=0;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>x[i];
    for(int i=n-1;i>=0;i--)
    {
        for(int j=0;j<i;j++)
        {
            if(x[i]==x[j]&&x[j]!=0)
                x[j]=0;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(x[i]>0)
            c++;
    }
    cout<<c<<endl;
    for(int i=0;i<n;i++)
    {
        if(x[i]!=0)
        {
            cout<<x[i]<<" ";
        }
    }
    cout<<endl;

return 0;
}

