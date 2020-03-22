#include<stdio.h>
int main()

{
    int N,h,m,s;
    scanf("%d",&N);
    h = N/3600;
    m = (N-(h*3600))/60;
    s = (N-(h*3600+m*60))/1;
    printf("%d:%d:%d\n",h,m,s);
    return 0;
}
