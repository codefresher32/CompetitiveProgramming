#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int l,t=0;;
    l=s.size();
    for(int i=0;i<l-2;i++)
    {
        if(s[i]=='A')
        {
            if(s[i+1]=='B')
            {
                if(s[i+2]=='C')
                {
                    t=1;
                    break;
                }
            }
            else if(s[i+1]=='C')
            {
                if(s[i+2]=='B')
                {
                    t=1;
                    break;
                }
            }
        }
        else if(s[i]=='B')
        {
            if(s[i+1]=='A')
            {
                if(s[i+2]=='C')
                {
                    t=1;
                    break;
                }
            }
            else if(s[i+1]=='C')
            {
                if(s[i+2]=='A')
                {
                    t=1;
                    break;
                }
            }
        }
        if(s[i]=='C')
        {
            if(s[i+1]=='A')
            {
                if(s[i+2]=='B')
                {
                    t=1;
                    break;
                }
            }
            else if(s[i+1]=='B')
            {
                if(s[i+2]=='A')
                {
                    t=1;
                    break;
                }
            }
        }
    }
    if(t)
        cout<<"Yes\n";
    else
        cout<<"No\n";
    return 0;
}
