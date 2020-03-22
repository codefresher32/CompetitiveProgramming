#include<bits/stdc++.h>
using namespace std;

int main()
{
    int v,x,y=1;
    while(cin>>v)
    {
        if(v<0)
            return 0;
        int a[15]={0},b[15]={0},t[15]={0};
        a[1]=v;
        for(int i=1;i<=12;i++)
        {
            cin>>x;
            a[i+1]=x;
        }
        for(int i=1;i<=12;i++)
        {
            cin>>x;
            b[i]=x;
        }
        for(int i=1;i<=12;i++)
        {
            if(a[i]-b[i]>=0)
            {
                a[i+1]+=(a[i]-b[i]);
                t[i]=1;
            }
            else
            {
                a[i+1]+=a[i];
            }
        }
        printf("Case %d:\n",y);
        for(int i=1;i<=12;i++)
        {
            if(t[i])
                cout<<"No problem! :D\n";
            else
                cout<<"No problem. :(\n";
        }
        y++;
    }
}
