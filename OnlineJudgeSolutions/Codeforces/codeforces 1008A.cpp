#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int l,tr;
    cin>>s;
    l=s.size();
    for(int i=0;i<l;i++)
    {
        if(s[i]!='a'&&s[i]!='e'&&s[i]!='i'&&s[i]!='o'&&s[i]!='u'&&s[i]!='n')
        {
            if(s[i+1]=='a'||s[i+1]=='e'||s[i+1]=='i'||s[i+1]=='o'||s[i+1]=='u')
            {
                tr=0;
            }
            else
            {
                tr=1;
                break;
            }
        }
    }
    if(!tr)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}
