
#include<bits/stdc++.h>
using namespace std;

char f(char c)
{
    char a[]={"`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./"};
    for(int i=0;i<47;i++)
    {
        if(a[i]==c){
        return a[i-1];
        }
    }
    return c;
}

int main()
{
    char s[10005];
    while(gets(s))
    {
        int l=strlen(s);
        for(int i=0;i<l;i++)
        {
        s[i]=f(s[i]);
        }
        puts(s);
    }
    return 0;
}
