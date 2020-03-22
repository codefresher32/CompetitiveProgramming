#include<bits/stdc++.h>
using namespace std;

int main()
{
    char s[101],p=0,l=0;
    cin>>s;
    for(int i=0;i<strlen(s);i++)
    {
        if(s[i]=='o')
            p++;
        else
            l++;
    }
    if(p==0||l==0)
    {
        cout<<"YES\n";
        return 0;
    }
    if(l%p==0)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}
