#include <stdio.h>
#include <string.h>

int main()

{
    char s[100];
    int i,j,u=0,l=0;

    gets(s);
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]>='A'&&s[i]<='Z')
        {
            u++;
        }
        else
        {
            l++;
        }
    }
    if(u>l)
        puts(strupr(s));
    else
        puts(strlwr(s));
}
