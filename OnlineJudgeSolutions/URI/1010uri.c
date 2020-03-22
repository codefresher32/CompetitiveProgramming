#include<stdio.h>
int main()

{
    int c1,c2,p1,p2;
    float price1,price2,total;
    scanf("%d %d %f",&c1,&p1,&price1);
    scanf("%d %d %f",&c2,&p2,&price2);
    total = (p1*price1)+(p2*price2);
    printf("VALOR A PAGAR: R$ %0.2f\n",total);
    return 0;

}
