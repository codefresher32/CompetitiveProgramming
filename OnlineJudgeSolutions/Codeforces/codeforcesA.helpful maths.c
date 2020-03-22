#include<stdio.h>
#include<string.h>
int main()

{
    char c[100];
    int i,j,temp,len;
    gets(c);
    len=strlen(c);
    for(i=0;i<len;i+=2)
    {
        for(j=i+2;j<len;j+=2)
        {
            if(c[i]>c[j])
            {
                temp=c[i];
                c[i]=c[j];
                c[j]=temp;
            }
        }
    }
    puts(c);
}
