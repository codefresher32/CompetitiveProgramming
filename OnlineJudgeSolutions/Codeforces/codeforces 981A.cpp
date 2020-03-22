#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s,s1,s2;
    int l;
    cin>>s;
    l=s.size();
    for(int i=0;i<l;i++)
    {
        s1="";
        s2="";
        s1=s.substr(i,l-i);
        s2=s1;
        reverse(s2.begin(),s2.end());
        if(s1!=s2)
        {
            cout<<s1.size()<<endl;
            return 0;
        }
    }
    cout<<0<<endl;
    return 0;
}
