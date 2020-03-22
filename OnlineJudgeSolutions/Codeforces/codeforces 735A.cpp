#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int x,y,n,k;
    cin>>n>>k;
    cin>>s;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='G')
            x=i;
        else if(s[i]=='T')
            y=i;
    }
    if(x>y)
        swap(x,y);
    for(int i=x;i<n;i+=k)
    {
        if(s[i]=='#')
        {
            cout<<"NO\n";
            return 0;
        }
        else if(i==y)
        {
            cout<<"YES\n";
            return 0;
        }
    }
    cout<<"NO\n";
    return 0;
}
