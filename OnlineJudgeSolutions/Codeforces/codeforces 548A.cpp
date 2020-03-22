#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,r;
    cin>>s;
    int k,l,x,n;
    cin>>k;
    l=s.length();
    if(l%k!=0)
    {
        cout<<"NO\n";
        return 0;
    }
    x=l/k;
    for(int i=0;i<l;i+=x)
    {
       r=s.substr(i,x);
        n=r.length();
        for(int j=0;j<=n/2;j++)
        {
            if(r[j]!=r[n-j])
            {
                cout<<"NO\n";
                return 0;
            }
        }
    }
    cout<<"YES\n";
    return 0;
}
