#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,k,l,f,c=1;
    double lis,lds;
    cin>>n;
    lis=(double)floor(sqrt(n));
    lds=(double)ceil(n/lis);
    m=n+1;
    while(c<=lds)
    {
       f=m-lis;
       for(int i=0;i<lis;i++)
       {
           l=f+i;
           if(i==0)
            m=l;
            if(l>0)
                cout<<l<<" ";
       }
       c++;
    }
    return 0;
}
