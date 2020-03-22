#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b,c,d,k,m=0;
    cin>>n>>a>>b>>c;
    for(int i=0;i<=n;i++)
    {
        for(int j=0;(a*i+b*j)<=n;j++)
        {
            k=n-(a*i+b*j);
            if(k%c==0)
            {
                k/=c;
                k=i+j+k;
                if(k>m)
                    m=k;
            }
        }
    }
    cout<<m<<endl;
}
