#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,x,y;
    cin>>n>>m;
    if(m>n)
    {
        if(m>2*(n+1))
        {
            cout<<-1<<endl;
            return 0;
        }
        else
        {
           while(m!=n&&n!=0)
           {
               cout<<110;
               m-=2;
               n--;
           }
           while(n)
           {
               cout<<10;
               n--;
               m--;
           }
           while(m)
           {
               cout<<1;
               m--;
           }
        }
    }
    else
    {
        if(n>m+1)
        {
            cout<<-1;
            return 0;
        }
        if(n==m+1)
        {
            cout<<0;
            n--;
        }
        for(int i=0;i<n;i++)
            cout<<10;
    }
    return 0;
}
