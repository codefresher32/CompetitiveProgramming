#include<stdio.h>
#include<string.h>
int main()

{
    char s[101],t[101];
    int i;
    gets(s);
    gets(t);
    if(strcmp(strrev(s),t)==0)
    {
        printf("YES\n");
    }
    else {
    printf("NO\n");}
    return 0;
}
