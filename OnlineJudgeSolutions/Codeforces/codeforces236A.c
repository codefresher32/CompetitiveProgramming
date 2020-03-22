#include<stdio.h>
#include<string.h>
int main ()

{
    int x,y,i,len,c=0,j,max;
    char s[100],temp;
    scanf("%s",&s);
    for(i=0;s[i]!='\0';i++)
    {
        for(j=i+1;s[j]!='\0';j++)
        {
            if(s[i]>s[j])
            {
                temp=s[i];
                s[i]=s[j];
                s[j]=temp;
            }
        }
    }
    len=strlen(s);
    for(i=0;s[i]!='\0';i++)
    {
            if(s[i-1]==s[i])
            {
                len--;
            }
    }
    if(len%2==0)
    {
        printf("CHAT WITH HER!\n");
    }
    else
        printf("IGNORE HIM!\n");
    return 0;
}
