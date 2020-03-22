#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[5],b[5],sum1=0,sum2=0;
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
        b[i]=a[i];
    }
    sort(a,a+5,greater<int>());
    sort(b,b+5);
    for(int i=0;i<5;i++)
    {
        if(a[i]==a[i+1])
        {
            if(a[i+1]==a[1+2])
            {
                a[i]=a[i+1]=a[i+2]=0;
                break;
            }
            else
            {
                a[i]=a[i+1]=0;
                break;
            }
        }
    }
    for(int i=0;i<5;i++)
        sum1+=a[i];
    for(int i=0;i<5;i++)
    {
        if(b[i]==b[i+1])
        {
            if(b[i+1]==b[1+2])
            {
                b[i]=b[i+1]=b[i+2]=0;
                break;
            }
            else
            {
                b[i]=b[i+1]=0;
                break;
            }
        }
    }
    for(int i=0;i<5;i++)
        sum2+=b[i];
    cout<<min(sum1,sum2)<<endl;
    return 0;
}
