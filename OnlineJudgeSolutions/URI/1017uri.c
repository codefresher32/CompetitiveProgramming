#include<stdio.h>
int main()

{
    int h,as;
    float am;
    scanf("%d %d",&h,&as);
    am = (as/12.0)*h;
    printf("%0.3f\n",am);
    return 0;
}
