#include<stdio.h>
#include<string.h>
int main()

{
    int i,j,c=0;
    char x[100];
    gets(x);
    for(i=0,j=i+1;x[i]!='\0',x[j]!='\0';i++,j++)
    {
        if(x[i]==x[j])
        {
            c++;
        }
        else if(c>=6)
        {
            break;
        }
        else
        {
            c=0;
        }
    }
    if(c>=6)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}
