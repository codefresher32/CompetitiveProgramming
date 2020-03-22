#include<bits/stdc++.h>
using namespace std;

int main()
{
    char s[1000];
    while(gets(s))
    {
        for(int i=0;i<strlen(s);i++)
        {
            printf("%c",s[i]-7);
        }
        cout<<endl;
    }
}
