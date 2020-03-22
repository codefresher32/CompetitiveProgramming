#include<stdio.h>
int main()

{
   double a,b,c,temp;
   scanf("%lf %lf %lf",&a,&b,&c);
   if(a<b)
   {
       temp = b;
       b = a;
       a = temp;
   }
   if(a<c)
   {
       temp = c;
       c = a;
       a = temp;
   }
   if(a >= b+c)
    printf("NAO FORMA TRIANGULO\n");
   else if(a*a == b*b+c*c)
    printf("TRIANGULO RETANGULO\n");
   else if(a*a > b*b+c*c)
    printf("TRIANGULO OBTUSANGULO\n");
    else if(a*a < b*b+c*c)
    printf("TRIANGULO ACUTANGULO\n");
    if(a == b&&a == c)
        printf("TRIANGULO EQUILATERO\n");
    else if(a == b&&a != c||b == c&& b != a||a == c&&a !=b)
        printf("TRIANGULO ISOSCELES\n");
   return 0;
}
