#include<stdio.h>
int main()

{
    double A,B,C,pi=3.14159;
    float tri,cir,trap,squ,rec;
    scanf("%lf %lf %lf",&A,&B,&C);
    tri = A*C*0.5;
    cir = pi*C*C;
    trap = 0.5*(A+B)*C;
    squ = B*B;
    rec = A*B;
    printf("TRIANGULO: %0.3f\n",tri);
    printf("CIRCULO: %0.3f\n",cir);
    printf("TRAPEZIO: %0.3f\n",trap);
    printf("QUADRADO: %0.3f\n",squ);
    printf("RETANGULO: %0.3f\n",rec);
    return 0;
}
