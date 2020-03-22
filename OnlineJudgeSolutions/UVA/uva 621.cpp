#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,len;
    char s[100000];
    cin>>n;
    while(n--)
    {
        cin>>s;
        len=strlen(s);
        if(strcmp(s,"1")==0||strcmp(s,"4")==0||strcmp(s,"78")==0)
        {
            cout<<"+\n";
        }
        else if(s[len-1]=='5'&&s[len-2]=='3')
        {
            cout<<"-\n";
        }
        else if(s[0]=='9'&&s[len-1]=='4')
        {
            cout<<"*\n";
        }
        else if(s[0]=='1'&&s[1]=='9')
        {
            cout<<"?\n";
        }
    }
    return 0;
}
