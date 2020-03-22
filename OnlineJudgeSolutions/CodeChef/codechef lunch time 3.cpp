#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b)
{
    while(b)
    {
        a=a%b;
        swap(a,b);
    }
    return a;
}

int main()
{
   int n,m,x,y;
   cin>>n>>m;
   int a[100005][25];
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<m;j++)
        cin>>a[i][j];
   }
   long long sum=0;
   for(int i=0;i<n-1;i++)
   {
       for(int k=0;k<m;k++){
        for(int j=0;j<m;j++)
        {
            x=a[i][k],y=a[i+1][j];
           sum+=gcd(a[i][k],a[i+1][j]);
        }
       }
   }
   sum%=1000000007;
   cout<<sum<<endl;
    return 0;
}

