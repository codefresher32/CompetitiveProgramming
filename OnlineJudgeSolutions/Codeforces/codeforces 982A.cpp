#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,c=0;
    string s;
    cin>>n;
    cin>>s;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='1'&&s[i+1]=='1')
        {
            cout<<"No\n";
            return 0;
        }
        else if(s[i]=='0'&&(s[i-1]!='1'&&s[i+1]!='1'))
        {
            cout<<"No\n";
            return 0;
        }
    }
    cout<<"Yes\n";
    return 0;
}

