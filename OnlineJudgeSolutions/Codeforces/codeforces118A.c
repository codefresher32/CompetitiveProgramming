#include<stdio.h>
#include<string.h>
int main()

{
    char c1[100],c2[100];
    int i,j=0,len;
    gets(c1);
    strlwr(c1);
    for(i=0;c1[i]!='\0';i++)
    {
        if(c1[i] != 'a'&&c1[i] != 'e'&&c1[i] != 'i'&&c1[i] != 'o'&&c1[i] != 'u'&&c1[i] != 'y')
        {
            printf(".%c",c1[i]);
        }
    }
    return 0;
}
