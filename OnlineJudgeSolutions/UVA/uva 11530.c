#include<stdio.h>
#include<string.h>

int main()
{
    int t,sum,c=1,i;
    char str[101];
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        sum=0;
       gets(str);
       for( i=0;i<strlen(str);i++)
       {
           if(str[i]=='a'||str[i]=='d'||str[i]=='g'||str[i]=='j'||str[i]=='m'||str[i]=='p'||str[i]=='t'||str[i]=='w'||str[i]==' ')
           {
               sum+=1;
           }
           else if(str[i]=='b'||str[i]=='e'||str[i]=='h'||str[i]=='k'||str[i]=='n'||str[i]=='q'||str[i]=='u'||str[i]=='x')
           {
               sum+=2;
           }
           else if(str[i]=='s'||str[i]=='z')
           {
               sum+=4;
           }
           else
           {
               sum+=3;
           }
       }
       printf("Case #%d: %d\n",c,sum);
       c++;

    }
}
