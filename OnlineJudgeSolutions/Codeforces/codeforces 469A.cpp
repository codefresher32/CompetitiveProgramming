#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x,x1,y,y1,a[105];
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        a[i]=i;
    }
    cin>>x;
    while(x--)
    {
        cin>>x1;
        for(int i=1;i<=n;i++)
        {
            if(x1==a[i])
            {
                a[i]=0;
            }
        }
    }
    cin>>y;
    while(y--)
    {
        cin>>y1;
        for(int i=1;i<=n;i++)
        {
            if(y1==a[i])
            {
                a[i]=0;
            }
        }
    }
    for(int i=1;i<=n;i++)
    {
        if(a[i]>0)
        {
            cout<<"Oh, my keyboard!"<<endl;
            return 0;
        }
    }
    cout<<"I become the guy."<<endl;
    return 0;
}
