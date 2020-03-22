#include<stdio.h>
#include<string.h>
int main()

{
    int n,i,j,len;
    scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       char c[100];
       scanf("%s",c);
       len=strlen(c);
       if(len>10)
       {
           len-=2;
           printf("%c%d%c\n",c[0],len,c[len+1]);
       }
       else
       {
           printf("%s\n",c);
       }
   }
    return 0;
}
