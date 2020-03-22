#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,sum=0,t;
    string s;
    cin>>n;
    while(n--)
    {
        cin>>t;
        cin>>s;
        if(s=="South")
            sum+=t;
        else if(s=="North")
            sum-=t;
    }
    if(!sum)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}
