#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b,mn=INT_MAX,f=0,s=0,d;
    cin>>n;
    for(int a=0;a*4<=n;a++)
    {
        d=n-a*4;
        if(d%7==0)
        {
            b=d/7;
            if(a+b<mn)
            {
                mn=a+b;
                f=a;
                s=b;
            }
        }
    }
    if(f==0&&s==0)
    {
        cout<<-1<<endl;
        return 0;
    }
    for(int i=1;i<=f;i++)
        cout<<4;
    for(int i=1;i<=s;i++)
        cout<<7;
    cout<<endl;
    return 0;
}
