#include<stdio.h>
#include<String.h>
int main()

{
    int n,c=0,i;
    char  ch[50];
    scanf("%d",&n);
    scanf("%s",&ch);
    for(i=0;i<n;i++)
    {
        if(ch[i]==ch[i+1])
        {
            c++;
        }
    }
    printf("%d\n",c);
    return 0;
}
