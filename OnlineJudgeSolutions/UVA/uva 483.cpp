#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    char s[1000];
    int i,j,len,b;
    while(gets(s)){
    len=strlen(s);
    b=-1;
    for(i=0;i<len;i++)
    {
        if(s[i]==' ')
        {
            for(j=i-1;j>b;j--)
            {
                cout<<s[j];
            }
            cout<<" ";
            b=i;
        }
    }
        for(j=len-1;j>b;j--)
            {
                cout<<s[j];
            }
        cout<<endl;
    }
    return 0;
}
