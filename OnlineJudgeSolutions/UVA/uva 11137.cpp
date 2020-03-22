#include<bits/stdc++.h>
using namespace std;

int main()
{
   int coin[25],n;
   for(int i=1;i<22;i++)
        coin[i]=(i*i*i);
   while(cin>>n)
   {
       long long way[10005]={0};
       way[0]=1;
       for(int j=0;j<22;j++)
       {
           for(int i=1;i<=n;i++)
           {
               if(i>=coin[j]&&way[i-coin[j]])
                    way[i]+=way[i-coin[j]];
           }
       }
       cout<<way[n]<<endl;
   }
}
