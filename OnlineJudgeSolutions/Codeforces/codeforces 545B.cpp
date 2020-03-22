#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1,s2,o;
    int cnt=0,l;
    cin>>s1>>s2;
    l=s1.size();
    for(int i=0;i<l;i++)
    {
        if(s1[i]!=s2[i])
            cnt++;
    }
    if(cnt&1)
    {
        cout<<"impossible\n";
        return 0;
    }
    int j=1;
    for(int i=0;i<l;i++)
    {
        if(s1[i]!=s2[i])
        {
           if(j&1)
           {
               if(s1[i]=='1')
                o+='0';
               else
                o+='1';
           }
           else
           {
               if(s2[i]=='1')
                o+='0';
               else
                o+='1';
           }
           j++;
        }
        else
            o+=s1[i];
    }
    cout<<o<<endl;
    return 0;
}
