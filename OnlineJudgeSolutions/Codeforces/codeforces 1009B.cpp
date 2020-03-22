#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s,s1,s2,o;
    int l;
    cin>>s;

    l=s.size();
    int tr=0;
    for(int i=0;i<l;i++)
    {
        if(s[i]=='2'||(s[i]=='0'&&tr==1))
        {
            tr=1;
            o+=s[i];
        }
        else if(s[i]=='0'&&tr==0)
        {
            s1+='0';
        }
        else if(s[i]=='1')
        {
            s2+='1';
        }
    }
    cout<<s1<<s2<<o<<endl;

    return 0;
}
