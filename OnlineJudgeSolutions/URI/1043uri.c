#include<stdio.h>
int main()

{
    float a,b,c;
    scanf("%f %f %f",&a,&b,&c);
    if((a+b>c&&a-b<c)&&(a+c>b&&a-c<b)&&(b+c>a&&b-c<a))
        printf("Perimetro = %0.1f\n",a+b+c);
    else
        printf("Area = %0.1f\n",(a+b)*c*0.5);
    return 0;
}
