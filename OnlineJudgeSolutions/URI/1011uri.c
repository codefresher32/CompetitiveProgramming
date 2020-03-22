#include<stdio.h>
int main()

{
    int R;
    double v,pi=3.14159;
    scanf("%d",&R);
    v = (4.0/3)*pi*R*R*R;
    printf("VOLUME = %0.3lf\n",v);
    return 0;
}
