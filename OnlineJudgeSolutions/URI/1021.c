#include <stdio.h>
int main()
{
    double n;
    int a,b,c,d,e,f,g,h,i,j,k,l;
    scanf("%lf",&n);
    a = n * 100;
    b = a / 10000;
    a = a % 10000;
    c = a / 5000;
    a = a % 5000;
    d = a / 2000;
    a = a % 2000;
    e = a / 1000;
    a = a % 1000;
    f = a / 500;
    a = a % 500;
    g = a / 200;
    a = a % 200;
    h = a / 100;
    a = a % 100;
    i = a / 50;
    a = a % 50;
    j = a / 25;
    a = a % 25;
    k = a / 10;
    a = a % 10;
    l = a / 5;
    a = a % 5;
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n",b);
    printf("%d nota(s) de R$ 50.00\n",c);
    printf("%d nota(s) de R$ 20.00\n",d);
    printf("%d nota(s) de R$ 10.00\n",e);
    printf("%d nota(s) de R$ 5.00\n",f);
    printf("%d nota(s) de R$ 2.00\n",g);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n",h);
    printf("%d moeda(s) de R$ 0.50\n",i);
    printf("%d moeda(s) de R$ 0.25\n",j);
    printf("%d moeda(s) de R$ 0.10\n",k);
    printf("%d moeda(s) de R$ 0.05\n",l);
    printf("%d moeda(s) de R$ 0.01\n",a);
    return 0;
}
