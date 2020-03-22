#include <stdio.h>
#include <string.h>

int main()

{
    int n,m,i,j;
    scanf("%d%d",&n,&m);
    char s[n],temp;
    scanf("%s",&s);

    while(m>0)
    {
    for(i=0;i<n;i++)
    {
        if(s[i]=='B'&&s[i+1]=='G')
        {
            temp='B';
            s[i]=s[i+1];
            s[i+1]=temp;
            i++;
        }
    }
    m--;
    }
    puts(s);
    return 0;
}
