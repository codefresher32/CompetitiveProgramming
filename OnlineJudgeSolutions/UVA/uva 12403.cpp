#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,sum=0,n;
    char s[100];
    cin>>t;
    while(t--)
    {
       cin>>s;
       if(strcmp("report",s)!=0)
       {
           cin>>n;
            sum+=n;
       }

       if(strcmp("report",s)==0)
       {
           cout<<sum<<endl;
       }
    }
    return 0;
}
