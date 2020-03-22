#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,t,i,j;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>s;
        int cnt=0;
        for(i=0,j=n-1;i<j;i++,j--)
        {
            if(s[i]==s[j]||abs((s[i]-'0')-(s[j]-'0'))==2)
                cnt++;
        }
        if(2*cnt==n)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}

