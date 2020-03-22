#include<stdio.h>
int main()

{
    int n,wh;
    float wp,m;
    scanf("%d %d %f",&n,&wh,&wp);
    m = wp*wh;
    printf("NUMBER = %d\nSALARY = U$ %0.2f\n",n,m);
    return 0;
}
