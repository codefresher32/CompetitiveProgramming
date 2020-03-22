#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()

{
    char s[1001];
    int len,i;
    gets(s);
    len=strlen(s);
    cout<<s;
    for(i=len-1;i>=0;i--)
    {
        cout<<s[i];
    }
    cout<<endl;
    return 0;
}
