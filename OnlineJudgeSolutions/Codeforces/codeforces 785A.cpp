#include<bits/stdc++.h>
using namespace std;

int counting(string s)
{
    if(s[0]=='T')
        return 4;
    else if(s[0]=='C')
        return 6;
    else if(s[0]=='O')
        return 8;
    else if(s[0]=='D')
        return 12;
    else if(s[0]=='I')
        return 20;
}

int main()
{
    int t,sum=0;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        sum+=counting(s);
    }
    cout<<sum<<endl;
    return 0;
}
