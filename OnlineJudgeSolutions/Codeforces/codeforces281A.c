#include<stdio.h>
#include<string.h>
int main()

{
    int i;
    char c[1000];
    gets(c);
   if (c[0] >= 'a' && c[0] <= 'z') {
         c[0] = c[0] - 32;}
    puts(c);

}
