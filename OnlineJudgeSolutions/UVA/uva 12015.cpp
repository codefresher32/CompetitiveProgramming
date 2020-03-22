#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,a[11],x=1;
    string s[11];
    cin>>t;
    while(t--)
    {
        for(int i=1;i<=10;i++)
        {
            cin>>s[i];
            cin>>a[i];
        }
        int m=0;
        for(int i=1;i<=10;i++)
        {
            if(a[i]>m)
                m=a[i];
        }
        printf("Case #%d:\n",x);
        for(int i=1;i<=10;i++)
        {
            if(a[i]==m)
                cout<<s[i]<<endl;
        }
        x++;
    }
    return 0;
}
