#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int a[14],b[14],s=0,y=0;
    int c=0,t,x=0;
    for(int i=0;i<14;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<14;i++)
    {
        if(a[i]>0)
        {
            for(int j=0;j<14;j++)
            {
                b[j]=a[j];
            }
            long long int p,q;
            t=i;
             b[t]=0;
            if(t==13)
                t=-1;
            p/=14;
            q=p%14;
            for(int k=0;k<14;k++)
                b[k]+=p;
            for(int k=t+1;k<=q;k++)
            {
                b[k]+=1;
                if(k==13)
                    k=-1;
            }
            s=0;
            for(int k=0;k<14;k++)
            {
                if(k%2==0)
                {
                    s+=b[i];
                }
            }
            y=max(y,s);
        }
    }
    cout<<y<<endl;
    return 0;
}

