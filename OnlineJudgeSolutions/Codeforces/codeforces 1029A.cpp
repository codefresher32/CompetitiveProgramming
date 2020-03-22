#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,o,p,t;
    int n,k,l,j;
    cin>>n>>k;
    cin>>s;
    for(int i=0;i<n-1;i++)
    {
        if(s[i]==s[n-1])
        {
            p=s.substr(0,i+1);
            t=s.substr(n-i-1,i+1);
            if(p==t)
                o=s.substr(i+1,n-i-1);
        }
    }
    if(o.size())
    {
        cout<<s;
        for(int i=1;i<k;i++)
            cout<<o;
        cout<<endl;
    }
    else
    {
        for(int i=0;i<k;i++)
            cout<<s;
        cout<<endl;
    }
   return 0;
}
