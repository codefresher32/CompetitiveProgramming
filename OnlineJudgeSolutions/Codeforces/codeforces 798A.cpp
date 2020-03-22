#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int c=0;
    cin>>s;
    for(int i=0,j=s.length()-1;i<s.length(),j>i;i++,j--)
    {
        if(s[i]!=s[j])
            c++;
    }
    if(c==1||(s.length()&1&&c==0))
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}
