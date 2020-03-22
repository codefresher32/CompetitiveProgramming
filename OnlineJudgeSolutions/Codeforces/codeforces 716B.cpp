#include<bits/stdc++.h>
using namespace std;

int main()
{
    int l,a[26]={0};
    string s;
    cin>>s;
    l=s.size();
    if(l>26)
    {
        cout<<-1<<endl;
        return 0;
    }
    int c=0;
    for(int i=0;i<l;i++)
    {
        if(s[i]>='A'&&s[i]<='Z')
        {
            a[s[i]-'A']++;
            if(a[s[i]-'A']>1)
            {
                cout<<-1<<endl;
                return 0;
            }
        }
        else
            c++;
    }
    for(int i=0;i<l;i++)
    {
        if(s[i]=='?')
        {
            for(int j=0;j<26;j++)
            {
                if(!a[j])
                {
                    s[i]='A'+j;
                    a[j]=1;
                }
            }
        }
    }
    cout<<s<<endl;
    return 0;
}
