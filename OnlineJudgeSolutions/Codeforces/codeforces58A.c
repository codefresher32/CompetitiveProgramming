#include <stdio.h>
#include <string.h>

int main()

{
    char s[100],a[5]={'h','e','l','l','o'};
    int i,j,c=0,len;

    gets(s);
    len=strlen(s);

    for(i=0;i<5;i++)
    {
        for(j=0;j<len; )
        {
            if(a[i]==s[j])
            {
                c++;
                j++;
                break;
            }
            j++;
        }
    }

    if(c==5)
    {
        printf("YES\n");
    }
    else {
    printf("NO\n");}
    return 0;
}
