#include <stdio.h>
#include <string.h>

int main()

{
    int n,i,j;
    scanf("%d",&n);
    char s[n];
    scanf("%s",&s);

    for(i=0;i<n;i++)
    {
        if((s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='y')&&
           (s[i+1]=='a'||s[i+1]=='e'||s[i+1]=='i'||s[i+1]=='o'||s[i+1]=='u'||s[i+1]=='y'))
        {
            for(j=i+1;j<n;j++)
            {
                s[j]=s[j+1];
            }
            i-=1;
            n--;
        }
    }
    printf("%s",s);
    return 0;
}
