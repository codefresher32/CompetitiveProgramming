#include<stdio.h>
#include<string.h>
int main()

{
    int i,len,x=0;
    char s[100];
    scanf("%s",&s);
    len=strlen(s);
    for(i=0;i<len;i++)
    {
        if(s[i]>='A'&&s[i]<='Z')
        {
            x++;
        }
    }
    if(s[0]>96&& x==len-1)
        {
            printf("%c",s[0]-32);
            for(i=1;i<len;i++)
            {
                printf("%c",s[i]+32);
            }
        }
    else if(x==len)
    {
        for(i=0;i<len;i++)
        {
            printf("%c",s[i]+32);
        }
    }
    else {
        printf("%s",s);}
    return 0;
}
