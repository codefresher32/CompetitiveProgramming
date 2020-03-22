#include<bits/stdc++.h>
using namespace std;

int dec_t_binary(int n)
{
    vector<int>v;
    v.clear();
    int r,c=0;
    if(n==0)
    {
        return c;
    }
    while(n!=0)
    {
        r=n%2;
        v.push_back(r);
        n/=2;
    }
    reverse(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
    {
        if(v[i]==1)
        {
            c++;
        }
    }
    return c;
}

int hexi_t_dec(int n)
{
    int sum=0,k,r,c=0;
    if(n==0)
    {
        return c;
    }
    while(n!=0)
    {
        c++;
        r=n%10;
        k=1;
        for(int i=1;i<c;i++)
          {
              k=k*16;
          }
          sum+=r*k;
          n/=10;
    }
    return sum;

}

int main()
{
    int t,m,b1,b2,n;
    cin>>t;
    while(t--)
    {
        cin>>m;
        n=m;
       b1=dec_t_binary(m);
       b2=dec_t_binary(hexi_t_dec(n));
       printf("%d %d\n",b1,b2);
    }
    return 0;
}
