#include<stdio.h>
int main()

{
    float s,ns,me,p;
    scanf("%f",&s);
    if(s >= 0 && s <= 400.00)
    {
        me = s*0.15;
        ns = s+me;
        printf("Novo salario: %0.2f\nReajuste ganho: %0.2f\nEm percentual: 15 %\n",ns,me);
    }
    else if(s >400.00 && s <= 800.00)
    {
        me = s*0.12;
        ns = s+me;
        printf("Novo salario: %0.2f\nReajuste ganho: %0.2f\nEm percentual: 12 %\n",ns,me);
    }
    else if(s > 800.00 && s <= 1200.00)
    {
        me = s*0.10;
        ns = s+me;
        printf("Novo salario: %0.2f\nReajuste ganho: %0.2f\nEm percentual: 10 %\n",ns,me);
    }
    else if(s > 1200.00 && s <= 2000.00)
    {
        me = s*0.07;
        ns = s+me;
        printf("Novo salario: %0.2f\nReajuste ganho: %0.2f\nEm percentual: 7 %\n",ns,me);
    }
    else if(s > 2000.00)
    {
        me = s*0.04;
        ns = s+me;
        printf("Novo salario: %0.2f\nReajuste ganho: %0.2f\nEm percentual: 4 %\n",ns,me);
    }
    return 0;
}
