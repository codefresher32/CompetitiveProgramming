#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,p,t=0;
    cin>>n>>p;
    string s;
    cin>>s;
    for(int i=0;i<n-p;i++)
    {
        if(s[i]!=s[i+p])
        {
            if(s[i]=='.')
            {
                if(s[i+p]=='1')
                    s[i]='0';
                else
                    s[i]='1';
            }
            else if(s[i+p]=='.')
            {
                if(s[i]=='1')
                    s[i+p]='0';
                else
                    s[i+p]='1';
            }
            t=1;
            break;
        }
        else if(s[i]=='.'&&s[i+p]=='.')
        {
            s[i]='0';
            s[i+p]='1';
            t=1;
            break;
        }
    }
    if(!t)
    {
        cout<<"No\n";
        return 0;
    }
    for(int i=0;i<n;i++)
    {
        if(s[i]=='.')
            s[i]='0';
    }
    cout<<s<<endl;
    return 0;
}
