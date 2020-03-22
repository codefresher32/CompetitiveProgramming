#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,c=0,len;
    char s[1001];
    gets(s);
    len=strlen(s);
    sort(s , s+len);
    for(i=0;i<len;i++)
    {
        if(s[i]>='a'&&s[i]<='z')
        {
            c++;
            if(s[i]==s[i+1])
            {
                c--;
            }
        }
    }
    cout<<c<<endl;
    return 0;
}
