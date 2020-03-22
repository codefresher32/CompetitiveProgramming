#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    char s[5];
    cin>>t;
    while(t--)
    {
        cin>>s;
        if(strlen(s)==5)
        {
            cout<<3<<endl;;
        }
        else if(s[0]=='t'&&s[1]=='w'||s[2]=='o'&&s[1]=='w'||s[0]=='t'&&s[2]=='o')
        {
            cout<<2<<endl;
        }
        else
        {
            cout<<1<<endl;
        }
    }
    return 0;
}
