#include<stdio.h>
#include<string.h>
int main()

{
    char s[100];
    int i;
    scanf("%s",s);
    for(i=0;s[i]!='\0';i++){
    if(s[i]=='H' || s[i]=='Q' || s[i]=='9')
    {
        printf("YES\n");
        return 0;
    }
    }
      printf("NO\n");
    return 0;
}
